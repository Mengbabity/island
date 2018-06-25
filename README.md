# island

#Number of Islands
问题：给定一个二维数组，1表示地，0表示水。二维数组就可以表示一张地图。计算这张地图上有几个岛。

思路：典型的深度优先搜索。所谓岛即从1边缘开始，或者1被0包围。当1的上下左右没有1时，表明结束。
     即深度优先搜索函数，将此此时遍历到的1置为0，再依次判断其上下左右是否为1，是1则继续调用深度优先搜索函数。
