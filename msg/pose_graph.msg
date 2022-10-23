
#################################################################
## This message is used to transport a graph between two nodes.
## Each vertex has a set of points and a width describing the
## shape of it and additionally successors and predecessors
## to describe the overall structure of the graph 
##
#################################################################

Header header               # Header for Timestamp and Id
geometry_msgs/Pose origin   # The origin of the map (respectively: offset (the map is moved))
pose_vertex[] vertices           # The vertices in the graph 