import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
/**
 * A program to read a set of points, (xi, yi), from a file, dataJ, and a set of
 * ranges from a second file, rangeJ, and, for each range [a, b] in rangeJ, sum
 * all the y values over all the points in dataJ whose x value is in the range
 * [a, b].
 *
 * @author Kyle Hoefker
 */
public final class sumYinRangeX {
    /**
     * Default constructor--private to prevent instantiation.
     */
    private sumYinRangeX() {
        // no code needed here
    }
    /**
     * Main method.
     *
     * @param args[0]
     *            a filename for a file containing data
     *
     * @param args[1]
     *            a filename for a file containing ranges
     */
    public static void main(String[] args) {
        // Define a Binary Search Tree with sums
        class Node {
            int x, y;
            int sum;
            Node left;
            Node right;
            Node(int x, int y) {
                this.x = x;
                this.y = y;
                this.sum = y;
                this.right = null;
                this.left = null;
            }
            /**
             * Helper method for insert.
             *
             * @param z
             *            the node to be inserted
             *
             * @return the parent of z
             */
            Node locateParentUpdateSum(Node z) {
                Node ret = null;
                Node p = this;
                while (p != null) {
                    // p will visit every subtree should change sums
                    p.sum += z.y;
                    ret = p;
                    if (z.x < p.x) {
                        p = p.left;
                    } else {
                        p = p.right;
                    }
                }
                return ret;
            }
            /**
             * Inserts the given node into the the tree with this as the root
             * and updates the sums
             *
             * @param add
             *            the node to be inserted
             */
            void insert(Node add) {
                Node parent = this.locateParentUpdateSum(add);
                if (add.x < parent.x) {
                    parent.left = add;
                } else {
                    parent.right = add;
                }
            }
            /**
             * Helper method for sumInRange to sum the values <= val in this
             *
             * @param val
             *            the value x must be <=
             * @return the sum of y values where x <= val
             */
            int sumLE(int val) {
                int sum = 0;
                Node p = this;
                while (p != null) {
                    if (p.x <= val) {
                        sum += p.y;
                        if (p.left != null) {
                            sum += p.left.sum;
                        }
                        p = p.right;
                    } else {
                        p = p.left;
                    }
                }
                return sum;
            }
            /**
             * Helper method for sumInRange to sum the values >= val in this
             *
             * @param val
             *            the value x must be >=
             * @return the sum of y values where x >= val
             */
            int sumGE(int val) {
                int sum = 0;
                Node p = this;
                while (p != null) {
                    if (p.x >= val) {
                        sum += p.y;
                        if (p.right != null) {
                            sum += p.right.sum;
                        }
                        p = p.left;
                    } else {
                        p = p.right;
                    }
                }
                return sum;
            }
            /**
             * Computes the sum of y values where min <= x <= max
             *
             * @param min
             *            the minumum of the range
             * @param max
             *            the maximum of the range
             * @return the sum of y values where x is in the range
             */
            int sumInRange(int min, int max) {
                Node p = this;
                while (p != null && (p.x < min || p.x > max)) {
                    if (p.x < min) {
                        p = p.right;
                    } else {
                        p = p.left;
                    }
                }
                int sum = 0;
                if (p != null) {
                    if (p.right != null) {
                        sum += p.right.sumLE(max);
                    }
                    if (p.left != null) {
                        sum += p.left.sumGE(min);
                    }
                    sum += p.y;
                }
                return sum;
            }
        }
        // Open files
        Scanner dataJ = null;
        Scanner rangeJ = null;
        try {
            dataJ = new Scanner(new File(args[0]));
            rangeJ = new Scanner(new File(args[1]));
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        // Insert data into a binary search tree
        Node root = null;
        if (dataJ.hasNext()) { // Insert root data
            root = new Node(dataJ.nextInt(), dataJ.nextInt());
        }
        while (dataJ.hasNext()) { // Insert other data
            Node d = new Node(dataJ.nextInt(), dataJ.nextInt());
            root.insert(d);
        }
        // Report the sums for each range
        while (rangeJ.hasNext()) {
            int min = rangeJ.nextInt();
            int max = rangeJ.nextInt();
            System.out
                    .println(min + " " + max + " " + root.sumInRange(min, max));
        }
        // Close files
        dataJ.close();
        rangeJ.close();
    }
}
