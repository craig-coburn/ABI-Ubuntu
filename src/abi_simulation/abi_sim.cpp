#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Float64.h"
#include "trajectory_msgs/JointTrajectory.h"
#include "sensor_msgs/JointState.h"
#include <kdl_parser/kdl_parser.hpp>

/*At the moment, fitting all code into main function 
(sort into separate function later)*/

int main(int argc char** argv) {

KDL::Tree abi_tree;
urdf::Model abi;
if (!my_model.initXml(....)){
ROS_ERROR("Failed to parse urdf robot model");
return false;
}
if (!kdl_parser::treeFromUrdfModel(abi, abi_tree)){
ROS_ERROR("Failed to construct kdl tree");
return false;
}



}


