// C++ implementation of the Blue Robotics 'Ping' binary message protocol

//~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!
// THIS IS AN AUTOGENERATED FILE
// DO NOT EDIT
//~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!~!

#pragma once

#include "ping-message.h"

// TODO: should maybe be an enum
namespace Ping1dId
{
    static const uint16_t SET_DEVICE_ID = 1000;
    static const uint16_t SET_RANGE = 1001;
    static const uint16_t SET_SPEED_OF_SOUND = 1002;
    static const uint16_t SET_MODE_AUTO = 1003;
    static const uint16_t SET_PING_INTERVAL = 1004;
    static const uint16_t SET_GAIN_SETTING = 1005;
    static const uint16_t SET_PING_ENABLE = 1006;
    static const uint16_t FIRMWARE_VERSION = 1200;
    static const uint16_t DEVICE_ID = 1201;
    static const uint16_t VOLTAGE_5 = 1202;
    static const uint16_t SPEED_OF_SOUND = 1203;
    static const uint16_t RANGE = 1204;
    static const uint16_t MODE_AUTO = 1205;
    static const uint16_t PING_INTERVAL = 1206;
    static const uint16_t GAIN_SETTING = 1207;
    static const uint16_t TRANSMIT_DURATION = 1208;
    static const uint16_t GENERAL_INFO = 1210;
    static const uint16_t DISTANCE_SIMPLE = 1211;
    static const uint16_t DISTANCE = 1212;
    static const uint16_t PROCESSOR_TEMPERATURE = 1213;
    static const uint16_t PCB_TEMPERATURE = 1214;
    static const uint16_t PING_ENABLE = 1215;
    static const uint16_t PROFILE = 1300;
    static const uint16_t GOTO_BOOTLOADER = 1100;
    static const uint16_t CONTINUOUS_START = 1400;
    static const uint16_t CONTINUOUS_STOP = 1401;
};

class ping1d_set_device_id : public ping_message
{
public:
    ping1d_set_device_id(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_device_id(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_device_id()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1000; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t device_id() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_device_id(const uint8_t device_id) { (uint8_t&)msgData[headerLength + 0] = device_id; }
};

class ping1d_set_range : public ping_message
{
public:
    ping1d_set_range(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_range(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_range()        : ping_message { static_cast<uint16_t>(18) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 8; // payload size
        (uint16_t&)msgData[4] = 1001; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t scan_start() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_scan_start(const uint32_t scan_start) { (uint32_t&)msgData[headerLength + 0] = scan_start; }
    uint32_t scan_length() const { return (uint32_t&)msgData[headerLength + 4]; }
    void set_scan_length(const uint32_t scan_length) { (uint32_t&)msgData[headerLength + 4] = scan_length; }
};

class ping1d_set_speed_of_sound : public ping_message
{
public:
    ping1d_set_speed_of_sound(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_speed_of_sound(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_speed_of_sound()        : ping_message { static_cast<uint16_t>(14) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 4; // payload size
        (uint16_t&)msgData[4] = 1002; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t speed_of_sound() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_speed_of_sound(const uint32_t speed_of_sound) { (uint32_t&)msgData[headerLength + 0] = speed_of_sound; }
};

class ping1d_set_mode_auto : public ping_message
{
public:
    ping1d_set_mode_auto(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_mode_auto(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_mode_auto()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1003; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t mode_auto() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_mode_auto(const uint8_t mode_auto) { (uint8_t&)msgData[headerLength + 0] = mode_auto; }
};

class ping1d_set_ping_interval : public ping_message
{
public:
    ping1d_set_ping_interval(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_ping_interval(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_ping_interval()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1004; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t ping_interval() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_ping_interval(const uint16_t ping_interval) { (uint16_t&)msgData[headerLength + 0] = ping_interval; }
};

class ping1d_set_gain_setting : public ping_message
{
public:
    ping1d_set_gain_setting(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_gain_setting(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_gain_setting()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1005; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t gain_setting() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_gain_setting(const uint8_t gain_setting) { (uint8_t&)msgData[headerLength + 0] = gain_setting; }
};

class ping1d_set_ping_enable : public ping_message
{
public:
    ping1d_set_ping_enable(const ping_message& msg) : ping_message { msg } {}
    ping1d_set_ping_enable(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_set_ping_enable()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1006; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t ping_enabled() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_ping_enabled(const uint8_t ping_enabled) { (uint8_t&)msgData[headerLength + 0] = ping_enabled; }
};

class ping1d_firmware_version : public ping_message
{
public:
    ping1d_firmware_version(const ping_message& msg) : ping_message { msg } {}
    ping1d_firmware_version(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_firmware_version()        : ping_message { static_cast<uint16_t>(16) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 6; // payload size
        (uint16_t&)msgData[4] = 1200; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t device_type() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_device_type(const uint8_t device_type) { (uint8_t&)msgData[headerLength + 0] = device_type; }
    uint8_t device_model() const { return (uint8_t&)msgData[headerLength + 1]; }
    void set_device_model(const uint8_t device_model) { (uint8_t&)msgData[headerLength + 1] = device_model; }
    uint16_t firmware_version_major() const { return (uint16_t&)msgData[headerLength + 2]; }
    void set_firmware_version_major(const uint16_t firmware_version_major) { (uint16_t&)msgData[headerLength + 2] = firmware_version_major; }
    uint16_t firmware_version_minor() const { return (uint16_t&)msgData[headerLength + 4]; }
    void set_firmware_version_minor(const uint16_t firmware_version_minor) { (uint16_t&)msgData[headerLength + 4] = firmware_version_minor; }
};

class ping1d_device_id : public ping_message
{
public:
    ping1d_device_id(const ping_message& msg) : ping_message { msg } {}
    ping1d_device_id(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_device_id()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1201; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t device_id() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_device_id(const uint8_t device_id) { (uint8_t&)msgData[headerLength + 0] = device_id; }
};

class ping1d_voltage_5 : public ping_message
{
public:
    ping1d_voltage_5(const ping_message& msg) : ping_message { msg } {}
    ping1d_voltage_5(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_voltage_5()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1202; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t voltage_5() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_voltage_5(const uint16_t voltage_5) { (uint16_t&)msgData[headerLength + 0] = voltage_5; }
};

class ping1d_speed_of_sound : public ping_message
{
public:
    ping1d_speed_of_sound(const ping_message& msg) : ping_message { msg } {}
    ping1d_speed_of_sound(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_speed_of_sound()        : ping_message { static_cast<uint16_t>(14) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 4; // payload size
        (uint16_t&)msgData[4] = 1203; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t speed_of_sound() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_speed_of_sound(const uint32_t speed_of_sound) { (uint32_t&)msgData[headerLength + 0] = speed_of_sound; }
};

class ping1d_range : public ping_message
{
public:
    ping1d_range(const ping_message& msg) : ping_message { msg } {}
    ping1d_range(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_range()        : ping_message { static_cast<uint16_t>(18) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 8; // payload size
        (uint16_t&)msgData[4] = 1204; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t scan_start() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_scan_start(const uint32_t scan_start) { (uint32_t&)msgData[headerLength + 0] = scan_start; }
    uint32_t scan_length() const { return (uint32_t&)msgData[headerLength + 4]; }
    void set_scan_length(const uint32_t scan_length) { (uint32_t&)msgData[headerLength + 4] = scan_length; }
};

class ping1d_mode_auto : public ping_message
{
public:
    ping1d_mode_auto(const ping_message& msg) : ping_message { msg } {}
    ping1d_mode_auto(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_mode_auto()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1205; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t mode_auto() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_mode_auto(const uint8_t mode_auto) { (uint8_t&)msgData[headerLength + 0] = mode_auto; }
};

class ping1d_ping_interval : public ping_message
{
public:
    ping1d_ping_interval(const ping_message& msg) : ping_message { msg } {}
    ping1d_ping_interval(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_ping_interval()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1206; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t ping_interval() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_ping_interval(const uint16_t ping_interval) { (uint16_t&)msgData[headerLength + 0] = ping_interval; }
};

class ping1d_gain_setting : public ping_message
{
public:
    ping1d_gain_setting(const ping_message& msg) : ping_message { msg } {}
    ping1d_gain_setting(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_gain_setting()        : ping_message { static_cast<uint16_t>(14) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 4; // payload size
        (uint16_t&)msgData[4] = 1207; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t gain_setting() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_gain_setting(const uint32_t gain_setting) { (uint32_t&)msgData[headerLength + 0] = gain_setting; }
};

class ping1d_transmit_duration : public ping_message
{
public:
    ping1d_transmit_duration(const ping_message& msg) : ping_message { msg } {}
    ping1d_transmit_duration(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_transmit_duration()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1208; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t transmit_duration() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_transmit_duration(const uint16_t transmit_duration) { (uint16_t&)msgData[headerLength + 0] = transmit_duration; }
};

class ping1d_general_info : public ping_message
{
public:
    ping1d_general_info(const ping_message& msg) : ping_message { msg } {}
    ping1d_general_info(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_general_info()        : ping_message { static_cast<uint16_t>(20) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 10; // payload size
        (uint16_t&)msgData[4] = 1210; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t firmware_version_major() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_firmware_version_major(const uint16_t firmware_version_major) { (uint16_t&)msgData[headerLength + 0] = firmware_version_major; }
    uint16_t firmware_version_minor() const { return (uint16_t&)msgData[headerLength + 2]; }
    void set_firmware_version_minor(const uint16_t firmware_version_minor) { (uint16_t&)msgData[headerLength + 2] = firmware_version_minor; }
    uint16_t voltage_5() const { return (uint16_t&)msgData[headerLength + 4]; }
    void set_voltage_5(const uint16_t voltage_5) { (uint16_t&)msgData[headerLength + 4] = voltage_5; }
    uint16_t ping_interval() const { return (uint16_t&)msgData[headerLength + 6]; }
    void set_ping_interval(const uint16_t ping_interval) { (uint16_t&)msgData[headerLength + 6] = ping_interval; }
    uint8_t gain_setting() const { return (uint8_t&)msgData[headerLength + 8]; }
    void set_gain_setting(const uint8_t gain_setting) { (uint8_t&)msgData[headerLength + 8] = gain_setting; }
    uint8_t mode_auto() const { return (uint8_t&)msgData[headerLength + 9]; }
    void set_mode_auto(const uint8_t mode_auto) { (uint8_t&)msgData[headerLength + 9] = mode_auto; }
};

class ping1d_distance_simple : public ping_message
{
public:
    ping1d_distance_simple(const ping_message& msg) : ping_message { msg } {}
    ping1d_distance_simple(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_distance_simple()        : ping_message { static_cast<uint16_t>(15) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 5; // payload size
        (uint16_t&)msgData[4] = 1211; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t distance() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_distance(const uint32_t distance) { (uint32_t&)msgData[headerLength + 0] = distance; }
    uint8_t confidence() const { return (uint8_t&)msgData[headerLength + 4]; }
    void set_confidence(const uint8_t confidence) { (uint8_t&)msgData[headerLength + 4] = confidence; }
};

class ping1d_distance : public ping_message
{
public:
    ping1d_distance(const ping_message& msg) : ping_message { msg } {}
    ping1d_distance(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_distance()        : ping_message { static_cast<uint16_t>(34) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 24; // payload size
        (uint16_t&)msgData[4] = 1212; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t distance() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_distance(const uint32_t distance) { (uint32_t&)msgData[headerLength + 0] = distance; }
    uint16_t confidence() const { return (uint16_t&)msgData[headerLength + 4]; }
    void set_confidence(const uint16_t confidence) { (uint16_t&)msgData[headerLength + 4] = confidence; }
    uint16_t transmit_duration() const { return (uint16_t&)msgData[headerLength + 6]; }
    void set_transmit_duration(const uint16_t transmit_duration) { (uint16_t&)msgData[headerLength + 6] = transmit_duration; }
    uint32_t ping_number() const { return (uint32_t&)msgData[headerLength + 8]; }
    void set_ping_number(const uint32_t ping_number) { (uint32_t&)msgData[headerLength + 8] = ping_number; }
    uint32_t scan_start() const { return (uint32_t&)msgData[headerLength + 12]; }
    void set_scan_start(const uint32_t scan_start) { (uint32_t&)msgData[headerLength + 12] = scan_start; }
    uint32_t scan_length() const { return (uint32_t&)msgData[headerLength + 16]; }
    void set_scan_length(const uint32_t scan_length) { (uint32_t&)msgData[headerLength + 16] = scan_length; }
    uint32_t gain_setting() const { return (uint32_t&)msgData[headerLength + 20]; }
    void set_gain_setting(const uint32_t gain_setting) { (uint32_t&)msgData[headerLength + 20] = gain_setting; }
};

class ping1d_processor_temperature : public ping_message
{
public:
    ping1d_processor_temperature(const ping_message& msg) : ping_message { msg } {}
    ping1d_processor_temperature(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_processor_temperature()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1213; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t processor_temperature() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_processor_temperature(const uint16_t processor_temperature) { (uint16_t&)msgData[headerLength + 0] = processor_temperature; }
};

class ping1d_pcb_temperature : public ping_message
{
public:
    ping1d_pcb_temperature(const ping_message& msg) : ping_message { msg } {}
    ping1d_pcb_temperature(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_pcb_temperature()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1214; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t pcb_temperature() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_pcb_temperature(const uint16_t pcb_temperature) { (uint16_t&)msgData[headerLength + 0] = pcb_temperature; }
};

class ping1d_ping_enable : public ping_message
{
public:
    ping1d_ping_enable(const ping_message& msg) : ping_message { msg } {}
    ping1d_ping_enable(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_ping_enable()        : ping_message { static_cast<uint16_t>(11) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 1; // payload size
        (uint16_t&)msgData[4] = 1215; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint8_t ping_enabled() const { return (uint8_t&)msgData[headerLength + 0]; }
    void set_ping_enabled(const uint8_t ping_enabled) { (uint8_t&)msgData[headerLength + 0] = ping_enabled; }
};

class ping1d_profile : public ping_message
{
public:
    ping1d_profile(const ping_message& msg) : ping_message { msg } {}
    ping1d_profile(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_profile(uint16_t profile_data_length
)        : ping_message { static_cast<uint16_t>(36 + profile_data_length) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 26 + profile_data_length; // payload size
        (uint16_t&)msgData[4] = 1300; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint32_t distance() const { return (uint32_t&)msgData[headerLength + 0]; }
    void set_distance(const uint32_t distance) { (uint32_t&)msgData[headerLength + 0] = distance; }
    uint16_t confidence() const { return (uint16_t&)msgData[headerLength + 4]; }
    void set_confidence(const uint16_t confidence) { (uint16_t&)msgData[headerLength + 4] = confidence; }
    uint16_t transmit_duration() const { return (uint16_t&)msgData[headerLength + 6]; }
    void set_transmit_duration(const uint16_t transmit_duration) { (uint16_t&)msgData[headerLength + 6] = transmit_duration; }
    uint32_t ping_number() const { return (uint32_t&)msgData[headerLength + 8]; }
    void set_ping_number(const uint32_t ping_number) { (uint32_t&)msgData[headerLength + 8] = ping_number; }
    uint32_t scan_start() const { return (uint32_t&)msgData[headerLength + 12]; }
    void set_scan_start(const uint32_t scan_start) { (uint32_t&)msgData[headerLength + 12] = scan_start; }
    uint32_t scan_length() const { return (uint32_t&)msgData[headerLength + 16]; }
    void set_scan_length(const uint32_t scan_length) { (uint32_t&)msgData[headerLength + 16] = scan_length; }
    uint32_t gain_setting() const { return (uint32_t&)msgData[headerLength + 20]; }
    void set_gain_setting(const uint32_t gain_setting) { (uint32_t&)msgData[headerLength + 20] = gain_setting; }
    uint16_t profile_data_length() const { return (uint16_t&)msgData[headerLength + 24]; }
    //TODO do this in constructor (const)
    void set_profile_data_length(const uint16_t profile_data_length) { (uint8_t&)msgData[headerLength + 24] = profile_data_length;}
    uint8_t* profile_data() const { return (uint8_t*)(msgData+headerLength+26); }
    void set_profile_data_at(const uint16_t i, const uint8_t data) { (uint8_t&)msgData[headerLength + 26 + i] = data; }
};

class ping1d_goto_bootloader : public ping_message
{
public:
    ping1d_goto_bootloader(const ping_message& msg) : ping_message { msg } {}
    ping1d_goto_bootloader(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_goto_bootloader()        : ping_message { static_cast<uint16_t>(10) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 0; // payload size
        (uint16_t&)msgData[4] = 1100; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

};

class ping1d_continuous_start : public ping_message
{
public:
    ping1d_continuous_start(const ping_message& msg) : ping_message { msg } {}
    ping1d_continuous_start(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_continuous_start()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1400; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t id() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_id(const uint16_t id) { (uint16_t&)msgData[headerLength + 0] = id; }
};

class ping1d_continuous_stop : public ping_message
{
public:
    ping1d_continuous_stop(const ping_message& msg) : ping_message { msg } {}
    ping1d_continuous_stop(const uint8_t* buf, const uint16_t length) : ping_message { buf, length } {}
    ping1d_continuous_stop()        : ping_message { static_cast<uint16_t>(12) }    {
        msgData[0] = 'B';
        msgData[1] = 'R';
        (uint16_t&)msgData[2] = 2; // payload size
        (uint16_t&)msgData[4] = 1401; // ID
        msgData[6] = 0;
        msgData[7] = 0;
    }

    uint16_t id() const { return (uint16_t&)msgData[headerLength + 0]; }
    void set_id(const uint16_t id) { (uint16_t&)msgData[headerLength + 0] = id; }
};

