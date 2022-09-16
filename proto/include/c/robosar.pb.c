/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.6-dev */

#include "robosar.pb.h"
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(robosar_fms_Accelerometer, robosar_fms_Accelerometer, AUTO)


PB_BIND(robosar_fms_Ultrasonic, robosar_fms_Ultrasonic, AUTO)


PB_BIND(robosar_fms_Infrared, robosar_fms_Infrared, AUTO)


PB_BIND(robosar_fms_Gyroscope, robosar_fms_Gyroscope, AUTO)


PB_BIND(robosar_fms_Encoder_count, robosar_fms_Encoder_count, AUTO)


PB_BIND(robosar_fms_Encoder_speed, robosar_fms_Encoder_speed, AUTO)


PB_BIND(robosar_fms_LaserScanner, robosar_fms_LaserScanner, 4)


PB_BIND(robosar_fms_AgentStatus, robosar_fms_AgentStatus, AUTO)


PB_BIND(robosar_fms_AprilTagRot, robosar_fms_AprilTagRot, AUTO)


PB_BIND(robosar_fms_AprilTagTrans, robosar_fms_AprilTagTrans, AUTO)


PB_BIND(robosar_fms_AprilTagPose, robosar_fms_AprilTagPose, AUTO)


PB_BIND(robosar_fms_AprilTagDetection, robosar_fms_AprilTagDetection, AUTO)


PB_BIND(robosar_fms_AllDetections, robosar_fms_AllDetections, 2)


PB_BIND(robosar_fms_SensorData, robosar_fms_SensorData, 4)



#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * To be able to encode/decode double on these platforms, you need.
 * to define PB_CONVERT_DOUBLE_FLOAT in pb.h or compiler command line.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

