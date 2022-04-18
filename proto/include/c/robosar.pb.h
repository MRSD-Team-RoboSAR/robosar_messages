/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_ROBOSAR_FMS_ROBOSAR_PB_H_INCLUDED
#define PB_ROBOSAR_FMS_ROBOSAR_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _robosar_fms_Accelerometer { 
    double acc_x; 
    double acc_y; 
    double acc_z; 
} robosar_fms_Accelerometer;

typedef struct _robosar_fms_Encoder_count { 
    uint64_t left; 
    uint64_t right; 
} robosar_fms_Encoder_count;

typedef struct _robosar_fms_Encoder_speed { 
    uint64_t left; 
    uint64_t right; 
} robosar_fms_Encoder_speed;

typedef struct _robosar_fms_Gyroscope { 
    double gyro_x; 
    double gyro_y; 
    double gyro_z; 
} robosar_fms_Gyroscope;

typedef struct _robosar_fms_Image { 
    uint32_t width; 
    uint32_t height; 
    uint32_t channels; 
    char image_data[27648]; 
} robosar_fms_Image;

typedef struct _robosar_fms_Infrared { 
    uint32_t sensor_a; 
    uint32_t sensor_b; 
    uint32_t sensor_c; 
    uint32_t sensor_d; 
    uint32_t sensor_e; 
    uint32_t sensor_f; 
    uint32_t sensor_g; 
    uint32_t sensor_h; 
    uint32_t sensor_i; 
    uint32_t sensor_j; 
    uint32_t sensor_k; 
    uint32_t sensor_l; 
} robosar_fms_Infrared;

typedef struct _robosar_fms_LaserScanner { 
    pb_size_t values_count;
    uint64_t values[700]; 
} robosar_fms_LaserScanner;

typedef struct _robosar_fms_Ultrasonic { 
    uint32_t sensor_a; 
    uint32_t sensor_b; 
    uint32_t sensor_c; 
    uint32_t sensor_d; 
    uint32_t sensor_e; 
} robosar_fms_Ultrasonic;

typedef struct _robosar_fms_SensorData { 
    uint64_t timestamp_ns; 
    uint32_t seq_id; 
    robosar_fms_Accelerometer accel_data; 
    robosar_fms_Gyroscope gyro_data; 
    robosar_fms_Encoder_count count_data; 
    robosar_fms_Encoder_speed speed_data; 
    robosar_fms_Infrared ir_data; 
    robosar_fms_Ultrasonic us_data; 
    robosar_fms_LaserScanner lrf_data; 
    robosar_fms_Image img_data; 
} robosar_fms_SensorData;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define robosar_fms_Accelerometer_init_default   {0, 0, 0}
#define robosar_fms_Ultrasonic_init_default      {0, 0, 0, 0, 0}
#define robosar_fms_Infrared_init_default        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define robosar_fms_Gyroscope_init_default       {0, 0, 0}
#define robosar_fms_Encoder_count_init_default   {0, 0}
#define robosar_fms_Encoder_speed_init_default   {0, 0}
#define robosar_fms_LaserScanner_init_default    {0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}}
#define robosar_fms_Image_init_default           {0, 0, 0, ""}
#define robosar_fms_SensorData_init_default      {0, 0, robosar_fms_Accelerometer_init_default, robosar_fms_Gyroscope_init_default, robosar_fms_Encoder_count_init_default, robosar_fms_Encoder_speed_init_default, robosar_fms_Infrared_init_default, robosar_fms_Ultrasonic_init_default, robosar_fms_LaserScanner_init_default, robosar_fms_Image_init_default}
#define robosar_fms_Accelerometer_init_zero      {0, 0, 0}
#define robosar_fms_Ultrasonic_init_zero         {0, 0, 0, 0, 0}
#define robosar_fms_Infrared_init_zero           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define robosar_fms_Gyroscope_init_zero          {0, 0, 0}
#define robosar_fms_Encoder_count_init_zero      {0, 0}
#define robosar_fms_Encoder_speed_init_zero      {0, 0}
#define robosar_fms_LaserScanner_init_zero       {0, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}}
#define robosar_fms_Image_init_zero              {0, 0, 0, ""}
#define robosar_fms_SensorData_init_zero         {0, 0, robosar_fms_Accelerometer_init_zero, robosar_fms_Gyroscope_init_zero, robosar_fms_Encoder_count_init_zero, robosar_fms_Encoder_speed_init_zero, robosar_fms_Infrared_init_zero, robosar_fms_Ultrasonic_init_zero, robosar_fms_LaserScanner_init_zero, robosar_fms_Image_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define robosar_fms_Accelerometer_acc_x_tag      1
#define robosar_fms_Accelerometer_acc_y_tag      2
#define robosar_fms_Accelerometer_acc_z_tag      3
#define robosar_fms_Encoder_count_left_tag       1
#define robosar_fms_Encoder_count_right_tag      2
#define robosar_fms_Encoder_speed_left_tag       1
#define robosar_fms_Encoder_speed_right_tag      2
#define robosar_fms_Gyroscope_gyro_x_tag         1
#define robosar_fms_Gyroscope_gyro_y_tag         2
#define robosar_fms_Gyroscope_gyro_z_tag         3
#define robosar_fms_Image_width_tag              1
#define robosar_fms_Image_height_tag             2
#define robosar_fms_Image_channels_tag           3
#define robosar_fms_Image_image_data_tag         4
#define robosar_fms_Infrared_sensor_a_tag        1
#define robosar_fms_Infrared_sensor_b_tag        2
#define robosar_fms_Infrared_sensor_c_tag        3
#define robosar_fms_Infrared_sensor_d_tag        4
#define robosar_fms_Infrared_sensor_e_tag        5
#define robosar_fms_Infrared_sensor_f_tag        6
#define robosar_fms_Infrared_sensor_g_tag        7
#define robosar_fms_Infrared_sensor_h_tag        8
#define robosar_fms_Infrared_sensor_i_tag        9
#define robosar_fms_Infrared_sensor_j_tag        10
#define robosar_fms_Infrared_sensor_k_tag        11
#define robosar_fms_Infrared_sensor_l_tag        12
#define robosar_fms_LaserScanner_values_tag      1
#define robosar_fms_Ultrasonic_sensor_a_tag      1
#define robosar_fms_Ultrasonic_sensor_b_tag      2
#define robosar_fms_Ultrasonic_sensor_c_tag      3
#define robosar_fms_Ultrasonic_sensor_d_tag      4
#define robosar_fms_Ultrasonic_sensor_e_tag      5
#define robosar_fms_SensorData_timestamp_ns_tag  1
#define robosar_fms_SensorData_seq_id_tag        2
#define robosar_fms_SensorData_accel_data_tag    3
#define robosar_fms_SensorData_gyro_data_tag     4
#define robosar_fms_SensorData_count_data_tag    5
#define robosar_fms_SensorData_speed_data_tag    6
#define robosar_fms_SensorData_ir_data_tag       7
#define robosar_fms_SensorData_us_data_tag       8
#define robosar_fms_SensorData_lrf_data_tag      9
#define robosar_fms_SensorData_img_data_tag      11

/* Struct field encoding specification for nanopb */
#define robosar_fms_Accelerometer_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, DOUBLE,   acc_x,             1) \
X(a, STATIC,   REQUIRED, DOUBLE,   acc_y,             2) \
X(a, STATIC,   REQUIRED, DOUBLE,   acc_z,             3)
#define robosar_fms_Accelerometer_CALLBACK NULL
#define robosar_fms_Accelerometer_DEFAULT NULL

#define robosar_fms_Ultrasonic_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_a,          1) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_b,          2) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_c,          3) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_d,          4) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_e,          5)
#define robosar_fms_Ultrasonic_CALLBACK NULL
#define robosar_fms_Ultrasonic_DEFAULT NULL

#define robosar_fms_Infrared_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_a,          1) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_b,          2) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_c,          3) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_d,          4) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_e,          5) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_f,          6) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_g,          7) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_h,          8) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_i,          9) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_j,         10) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_k,         11) \
X(a, STATIC,   REQUIRED, UINT32,   sensor_l,         12)
#define robosar_fms_Infrared_CALLBACK NULL
#define robosar_fms_Infrared_DEFAULT NULL

#define robosar_fms_Gyroscope_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, DOUBLE,   gyro_x,            1) \
X(a, STATIC,   REQUIRED, DOUBLE,   gyro_y,            2) \
X(a, STATIC,   REQUIRED, DOUBLE,   gyro_z,            3)
#define robosar_fms_Gyroscope_CALLBACK NULL
#define robosar_fms_Gyroscope_DEFAULT NULL

#define robosar_fms_Encoder_count_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT64,   left,              1) \
X(a, STATIC,   REQUIRED, UINT64,   right,             2)
#define robosar_fms_Encoder_count_CALLBACK NULL
#define robosar_fms_Encoder_count_DEFAULT NULL

#define robosar_fms_Encoder_speed_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT64,   left,              1) \
X(a, STATIC,   REQUIRED, UINT64,   right,             2)
#define robosar_fms_Encoder_speed_CALLBACK NULL
#define robosar_fms_Encoder_speed_DEFAULT NULL

#define robosar_fms_LaserScanner_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, UINT64,   values,            1)
#define robosar_fms_LaserScanner_CALLBACK NULL
#define robosar_fms_LaserScanner_DEFAULT NULL

#define robosar_fms_Image_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT32,   width,             1) \
X(a, STATIC,   REQUIRED, UINT32,   height,            2) \
X(a, STATIC,   REQUIRED, UINT32,   channels,          3) \
X(a, STATIC,   REQUIRED, STRING,   image_data,        4)
#define robosar_fms_Image_CALLBACK NULL
#define robosar_fms_Image_DEFAULT NULL

#define robosar_fms_SensorData_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, UINT64,   timestamp_ns,      1) \
X(a, STATIC,   REQUIRED, UINT32,   seq_id,            2) \
X(a, STATIC,   REQUIRED, MESSAGE,  accel_data,        3) \
X(a, STATIC,   REQUIRED, MESSAGE,  gyro_data,         4) \
X(a, STATIC,   REQUIRED, MESSAGE,  count_data,        5) \
X(a, STATIC,   REQUIRED, MESSAGE,  speed_data,        6) \
X(a, STATIC,   REQUIRED, MESSAGE,  ir_data,           7) \
X(a, STATIC,   REQUIRED, MESSAGE,  us_data,           8) \
X(a, STATIC,   REQUIRED, MESSAGE,  lrf_data,          9) \
X(a, STATIC,   REQUIRED, MESSAGE,  img_data,         11)
#define robosar_fms_SensorData_CALLBACK NULL
#define robosar_fms_SensorData_DEFAULT NULL
#define robosar_fms_SensorData_accel_data_MSGTYPE robosar_fms_Accelerometer
#define robosar_fms_SensorData_gyro_data_MSGTYPE robosar_fms_Gyroscope
#define robosar_fms_SensorData_count_data_MSGTYPE robosar_fms_Encoder_count
#define robosar_fms_SensorData_speed_data_MSGTYPE robosar_fms_Encoder_speed
#define robosar_fms_SensorData_ir_data_MSGTYPE robosar_fms_Infrared
#define robosar_fms_SensorData_us_data_MSGTYPE robosar_fms_Ultrasonic
#define robosar_fms_SensorData_lrf_data_MSGTYPE robosar_fms_LaserScanner
#define robosar_fms_SensorData_img_data_MSGTYPE robosar_fms_Image

extern const pb_msgdesc_t robosar_fms_Accelerometer_msg;
extern const pb_msgdesc_t robosar_fms_Ultrasonic_msg;
extern const pb_msgdesc_t robosar_fms_Infrared_msg;
extern const pb_msgdesc_t robosar_fms_Gyroscope_msg;
extern const pb_msgdesc_t robosar_fms_Encoder_count_msg;
extern const pb_msgdesc_t robosar_fms_Encoder_speed_msg;
extern const pb_msgdesc_t robosar_fms_LaserScanner_msg;
extern const pb_msgdesc_t robosar_fms_Image_msg;
extern const pb_msgdesc_t robosar_fms_SensorData_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define robosar_fms_Accelerometer_fields &robosar_fms_Accelerometer_msg
#define robosar_fms_Ultrasonic_fields &robosar_fms_Ultrasonic_msg
#define robosar_fms_Infrared_fields &robosar_fms_Infrared_msg
#define robosar_fms_Gyroscope_fields &robosar_fms_Gyroscope_msg
#define robosar_fms_Encoder_count_fields &robosar_fms_Encoder_count_msg
#define robosar_fms_Encoder_speed_fields &robosar_fms_Encoder_speed_msg
#define robosar_fms_LaserScanner_fields &robosar_fms_LaserScanner_msg
#define robosar_fms_Image_fields &robosar_fms_Image_msg
#define robosar_fms_SensorData_fields &robosar_fms_SensorData_msg

/* Maximum encoded size of messages (where known) */
#define robosar_fms_Accelerometer_size           27
#define robosar_fms_Encoder_count_size           22
#define robosar_fms_Encoder_speed_size           22
#define robosar_fms_Gyroscope_size               27
#define robosar_fms_Image_size                   27669
#define robosar_fms_Infrared_size                72
#define robosar_fms_LaserScanner_size            7700
#define robosar_fms_SensorData_size              35605
#define robosar_fms_Ultrasonic_size              30

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
