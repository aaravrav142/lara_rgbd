/**
 * @file   state_estimator_node.h
 * @author George Andrew Brindeiro (georgebrindeiro@lara.unb.br)
 * @date   Apr 24, 2014
 *
 * @attention Copyright (C) 2014
 * @attention Laboratório de Automação e Robótica (LARA)
 * @attention Universidade de Brasília (UnB)
 */

#ifndef LARA_RGBD_STATE_ESTIMATOR_NODE_H_
#define LARA_RGBD_STATE_ESTIMATOR_NODE_H_

#include <state_estimator/state_estimator.h>

#include <ros/ros.h>

// ROS Subscriber Callbacks
void cloud_cb(const sensor_msgs::PointCloud2::ConstPtr& cloud_msg);
void odom_cb(const nav_msgs::Odometry::ConstPtr& odom_msg);

// ROS Publisher Functions
void pub_fake_pose_estimate(const nav_msgs::Odometry::ConstPtr& odom_msg);
void pub_pose_estimate();
void pub_keyframes_estimate();

ros::Publisher pub_pose;
ros::Publisher pub_keyframes;

StateEstimator* state_estimator;

#endif  // LARA_RGBD_STATE_ESTIMATOR_NODE_H_
