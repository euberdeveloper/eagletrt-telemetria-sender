#ifndef TELEMETRY_DATA_STRUCTURE
#define TELEMETRY_DATA_STRUCTURE

typedef struct {
	long timestamp;
	double value;
} inverters_right_speed_data;

typedef struct {
	long timestamp;
	double value;
} inverters_right_temperature_igbt_data;

typedef struct {
	long timestamp;
	double value;
} inverters_right_temperature_motors_data;

typedef struct {
	long timestamp;
	double value;
} inverters_right_torque_data;

typedef struct {
	long timestamp;
	double value;
} inverters_right_filtered_actual_current_data;

typedef struct {
	long timestamp;
	double value;
} inverters_right_input_current_data;

typedef struct {
	inverters_right_speed_data *speed;
	int speed_count;
	int speed_size;
	inverters_right_temperature_igbt_data *temperature_igbt;
	int temperature_igbt_count;
	int temperature_igbt_size;
	inverters_right_temperature_motors_data *temperature_motors;
	int temperature_motors_count;
	int temperature_motors_size;
	inverters_right_torque_data *torque;
	int torque_count;
	int torque_size;
	inverters_right_filtered_actual_current_data *filtered_actual_current;
	int filtered_actual_current_count;
	int filtered_actual_current_size;
	inverters_right_input_current_data *input_current;
	int input_current_count;
	int input_current_size;
} inverters_right_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_speed_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_temperature_igbt_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_temperature_motors_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_torque_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_filtered_actual_current_data;

typedef struct {
	long timestamp;
	double value;
} inverters_left_input_current_data;

typedef struct {
	inverters_left_speed_data *speed;
	int speed_count;
	int speed_size;
	inverters_left_temperature_igbt_data *temperature_igbt;
	int temperature_igbt_count;
	int temperature_igbt_size;
	inverters_left_temperature_motors_data *temperature_motors;
	int temperature_motors_count;
	int temperature_motors_size;
	inverters_left_torque_data *torque;
	int torque_count;
	int torque_size;
	inverters_left_filtered_actual_current_data *filtered_actual_current;
	int filtered_actual_current_count;
	int filtered_actual_current_size;
	inverters_left_input_current_data *input_current;
	int input_current_count;
	int input_current_size;
} inverters_left_data;

typedef struct {
	inverters_right_data right;
	inverters_left_data left;
} inverters_data;

typedef struct {
	double max;
	double min;
	double average;
} bms_hv_temperature_value_data;

typedef struct {
	long timestamp;
	bms_hv_temperature_value_data value;
} bms_hv_temperature_data;

typedef struct {
	double max;
	double min;
	double total;
} bms_hv_voltage_value_data;

typedef struct {
	long timestamp;
	bms_hv_voltage_value_data value;
} bms_hv_voltage_data;

typedef struct {
	double current;
	double pow;
} bms_hv_current_value_data;

typedef struct {
	long timestamp;
	bms_hv_current_value_data value;
} bms_hv_current_data;

typedef struct {
	int fault_id;
	int fault_index;
} bms_hv_errors_value_data;

typedef struct {
	long timestamp;
	bms_hv_errors_value_data value;
} bms_hv_errors_data;

typedef struct {
	int fault_id;
	int fault_index;
} bms_hv_warnings_value_data;

typedef struct {
	long timestamp;
	bms_hv_warnings_value_data value;
} bms_hv_warnings_data;

typedef struct {
	bms_hv_temperature_data *temperature;
	int temperature_count;
	int temperature_size;
	bms_hv_voltage_data *voltage;
	int voltage_count;
	int voltage_size;
	bms_hv_current_data *current;
	int current_count;
	int current_size;
	bms_hv_errors_data *errors;
	int errors_count;
	int errors_size;
	bms_hv_warnings_data *warnings;
	int warnings_count;
	int warnings_size;
} bms_hv_data;

typedef struct {
	double voltage;
	double temperature;
} bms_lv_values_value_data;

typedef struct {
	long timestamp;
	bms_lv_values_value_data value;
} bms_lv_values_data;

typedef struct {
	long timestamp;
	int value;
} bms_lv_errors_data;

typedef struct {
	bms_lv_values_data *values;
	int values_count;
	int values_size;
	bms_lv_errors_data *errors;
	int errors_count;
	int errors_size;
} bms_lv_data;

typedef struct {
	double latitude_safe;
	double longitude_safe;
	double latitude;
	double longitude;
	double altitude;
	char* ns_indicator;
	char* ew_indicator;
	char* utc_time;
} gps_gga_value_data;

typedef struct {
	long timestamp;
	gps_gga_value_data value;
} gps_gga_data;

typedef struct {
	double latitude;
	double longitude;
	char* ns_indicator;
	char* ew_indicator;
	char* utc_time;
} gps_gll_value_data;

typedef struct {
	long timestamp;
	gps_gll_value_data value;
} gps_gll_data;

typedef struct {
	double ground_speed_knots;
	double ground_speed_human;
} gps_vtg_value_data;

typedef struct {
	long timestamp;
	gps_vtg_value_data value;
} gps_vtg_data;

typedef struct {
	double latitude;
	double longitude;
	char* ns_indicator;
	char* ew_indicator;
	char* utc_time;
	char* date;
	double ground_speed_knots;
} gps_rmc_value_data;

typedef struct {
	long timestamp;
	gps_rmc_value_data value;
} gps_rmc_data;

typedef struct {
	gps_gga_data *gga;
	int gga_count;
	int gga_size;
	gps_gll_data *gll;
	int gll_count;
	int gll_size;
	gps_vtg_data *vtg;
	int vtg_count;
	int vtg_size;
	gps_rmc_data *rmc;
	int rmc_count;
	int rmc_size;
} gps_data;

typedef struct {
	double x;
	double y;
	double z;
	double scale;
} imu_old_gyro_value_data;

typedef struct {
	long timestamp;
	imu_old_gyro_value_data value;
} imu_old_gyro_data;

typedef struct {
	double x;
	double y;
	double z;
	double scale;
} imu_old_accel_value_data;

typedef struct {
	long timestamp;
	imu_old_accel_value_data value;
} imu_old_accel_data;

typedef struct {
	imu_old_gyro_data *gyro;
	int gyro_count;
	int gyro_size;
	imu_old_accel_data *accel;
	int accel_count;
	int accel_size;
} imu_old_data;

typedef struct {
	double x;
	double y;
	double z;
} imu_gyro_value_data;

typedef struct {
	long timestamp;
	imu_gyro_value_data value;
} imu_gyro_data;

typedef struct {
	double x;
	double y;
	double z;
} imu_accel_value_data;

typedef struct {
	long timestamp;
	imu_accel_value_data value;
} imu_accel_data;

typedef struct {
	imu_gyro_data *gyro;
	int gyro_count;
	int gyro_size;
	imu_accel_data *accel;
	int accel_count;
	int accel_size;
} imu_data;

typedef struct {
	double left;
	double right;
} front_wheels_encoders_speed_rads_value_data;

typedef struct {
	long timestamp;
	front_wheels_encoders_speed_rads_value_data value;
} front_wheels_encoders_speed_rads_data;

typedef struct {
	double rotations;
	double km;
} front_wheels_encoders_rotation_and_km_value_data;

typedef struct {
	long timestamp;
	front_wheels_encoders_rotation_and_km_value_data value;
} front_wheels_encoders_rotation_and_km_data;

typedef struct {
	front_wheels_encoders_speed_rads_data *speed_rads;
	int speed_rads_count;
	int speed_rads_size;
	front_wheels_encoders_rotation_and_km_data *rotation_and_km;
	int rotation_and_km_count;
	int rotation_and_km_size;
} front_wheels_encoders_data;

typedef struct {
	long timestamp;
	int value;
} pedals_throttle_data;

typedef struct {
	int is_breaking;
	double pressure_front;
	double pressure_back;
} pedals_brake_value_data;

typedef struct {
	long timestamp;
	pedals_brake_value_data value;
} pedals_brake_data;

typedef struct {
	pedals_throttle_data *throttle;
	int throttle_count;
	int throttle_size;
	pedals_brake_data *brake;
	int brake_count;
	int brake_size;
} pedals_data;

typedef struct {
	long timestamp;
	double value;
} steering_wheel_encoder_data;

typedef struct {
	int control;
	int cooling;
	int map;
} steering_wheel_gears_value_data;

typedef struct {
	long timestamp;
	steering_wheel_gears_value_data value;
} steering_wheel_gears_data;

typedef struct {
	steering_wheel_encoder_data *encoder;
	int encoder_count;
	int encoder_size;
	steering_wheel_gears_data *gears;
	int gears_count;
	int gears_size;
	int marker;
} steering_wheel_data;

typedef struct {
	int id;
	long timestamp;
	char* sessionName;
	int lap_index;
	inverters_data inverters;
	bms_hv_data bms_hv;
	bms_lv_data bms_lv;
	gps_data gps;
	imu_old_data imu_old;
	imu_data imu;
	front_wheels_encoders_data front_wheels_encoders;
	pedals_data pedals;
	steering_wheel_data steering_wheel;
} data_t;


#endif