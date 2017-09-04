/*
 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

const uint8_t rsa_public_key_bytes[512] = {
    0xd4, 0xa4, 0x43, 0xdf, 0xc8, 0xd7, 0xa9, 0xa1,
    0x78, 0x70, 0x5d, 0x38, 0xe4, 0x33, 0x7f, 0x28,
    0x97, 0x12, 0xac, 0xbe, 0xb4, 0xf2, 0x91, 0x17,
    0x05, 0x96, 0xfb, 0xc3, 0xd8, 0x41, 0xb9, 0xdd,
    0x00, 0xcd, 0xec, 0x1e, 0x4e, 0x35, 0x92, 0x23,
    0x25, 0x87, 0xa7, 0x96, 0x96, 0x4c, 0xb3, 0x1c,
    0x3f, 0xa1, 0xdd, 0x5b, 0x9a, 0x9b, 0x6c, 0x1b,
    0x76, 0xaa, 0x9c, 0x1a, 0xa6, 0xfd, 0x15, 0xb0,
    0x4b, 0x5b, 0x91, 0x63, 0xd8, 0x51, 0x8f, 0xcf,
    0x7a, 0xdf, 0x3d, 0x23, 0xe4, 0x96, 0x8e, 0xad,
    0xdc, 0xec, 0xf9, 0x0a, 0xa9, 0x3d, 0x95, 0x9d,
    0xdd, 0xb7, 0xb9, 0xcd, 0x03, 0x56, 0x03, 0x77,
    0x42, 0x5e, 0x98, 0xee, 0x85, 0x31, 0xeb, 0x75,
    0x99, 0xa9, 0x3a, 0x36, 0x6a, 0x6c, 0x6e, 0x14,
    0x7d, 0xdc, 0xb3, 0x2e, 0x97, 0x7c, 0x90, 0x4c,
    0xaf, 0xf0, 0xc5, 0xd4, 0x38, 0x36, 0x93, 0xa9,
    0x01, 0x0f, 0xe5, 0x06, 0xc7, 0xf6, 0xf0, 0xb8,
    0x4f, 0x3d, 0xf2, 0xea, 0x17, 0x8f, 0xcc, 0x7f,
    0xb0, 0x40, 0x21, 0x17, 0xa8, 0x78, 0x2e, 0xc8,
    0x8f, 0x65, 0x6e, 0xc2, 0x0a, 0xca, 0xed, 0x49,
    0x8d, 0x15, 0x26, 0x87, 0xb9, 0x35, 0xea, 0x73,
    0x9a, 0xb3, 0xc3, 0xc1, 0x11, 0x08, 0xdd, 0xa6,
    0x6c, 0x8c, 0xac, 0xab, 0xba, 0x56, 0x6b, 0x08,
    0x29, 0xb7, 0x81, 0xee, 0x94, 0x11, 0x8e, 0xd6,
    0x32, 0x30, 0x03, 0xff, 0x05, 0xc3, 0x42, 0x53,
    0x0b, 0xa2, 0x31, 0xff, 0x14, 0xa8, 0x50, 0x76,
    0x39, 0x9c, 0x5e, 0x2d, 0xd1, 0x10, 0x5e, 0x20,
    0x65, 0x9b, 0x3d, 0x10, 0xd6, 0xea, 0x91, 0x9f,
    0x39, 0x69, 0x13, 0xbb, 0x8a, 0x2a, 0xb1, 0x52,
    0xa2, 0x9f, 0x9b, 0x9c, 0xd4, 0x01, 0x9d, 0xae,
    0x61, 0x9e, 0x4f, 0x61, 0xaa, 0x24, 0x11, 0x93,
    0x46, 0x2e, 0x1a, 0x0e, 0xd3, 0xb7, 0xa9, 0xee,
    0x32, 0x2a, 0x7b, 0xb5, 0xe9, 0x3f, 0xd7, 0x7b,
    0xa2, 0x23, 0xc5, 0x25, 0x9e, 0x8d, 0x00, 0x79,
    0x9f, 0x9a, 0x8e, 0xf6, 0x71, 0xee, 0x0d, 0x22,
    0x0e, 0x7d, 0x43, 0x45, 0xb7, 0xd5, 0x75, 0xa0,
    0x50, 0xc4, 0xdd, 0xa0, 0xe3, 0xf6, 0x9c, 0xf0,
    0xa0, 0xa8, 0xd6, 0x13, 0xe9, 0xe2, 0x99, 0xf1,
    0xd5, 0x83, 0xfa, 0x6f, 0xa5, 0xfc, 0x1b, 0xf2,
    0xed, 0x0b, 0x68, 0x0e, 0x7a, 0xf1, 0x22, 0x6a,
    0x71, 0x35, 0xf2, 0x50, 0x7e, 0x9a, 0x59, 0x0b,
    0xd3, 0x4b, 0x2c, 0xbc, 0xa2, 0x73, 0xf8, 0x62,
    0x3d, 0xfb, 0x05, 0xa2, 0x69, 0x6a, 0x7d, 0xed,
    0x38, 0xea, 0xec, 0xed, 0xb2, 0x1e, 0x29, 0xf9,
    0xa3, 0x52, 0x17, 0xba, 0xfa, 0xb7, 0xcf, 0x80,
    0xd5, 0x77, 0x89, 0x4c, 0x18, 0xfa, 0x6b, 0xd5,
    0xe3, 0x45, 0xde, 0x3c, 0xe5, 0x7a, 0x5c, 0xa4,
    0x36, 0xda, 0x35, 0x7d, 0x5a, 0x4e, 0x62, 0xa9,
    0xeb, 0xda, 0x86, 0xe4, 0x4c, 0x41, 0xe1, 0xea,
    0xa5, 0x6a, 0x0c, 0x28, 0xdb, 0xda, 0x8b, 0x4d,
    0x77, 0x52, 0x75, 0x7c, 0xbd, 0xda, 0x37, 0x4e,
    0xa8, 0xf4, 0x77, 0xf1, 0xd7, 0x0e, 0x74, 0xf9,
    0x1a, 0x46, 0xcb, 0x1c, 0xe2, 0x30, 0x6a, 0x7e,
    0xb4, 0x1f, 0x42, 0x34, 0xcf, 0xf8, 0xb8, 0x25,
    0xe5, 0x68, 0x87, 0xe6, 0x8e, 0xc8, 0x27, 0x21,
    0x9b, 0xeb, 0x55, 0x40, 0x16, 0x9a, 0x75, 0x32,
    0xf7, 0xfd, 0xef, 0x40, 0x67, 0x49, 0xc8, 0x64,
    0xf8, 0x6d, 0x06, 0x71, 0xd0, 0xf5, 0xee, 0xe6,
    0xcd, 0xd5, 0xa3, 0x6f, 0x8f, 0x78, 0x65, 0x0d,
    0x1a, 0x53, 0x29, 0x1f, 0x73, 0x10, 0xe6, 0x2c,
    0x4a, 0x9a, 0x44, 0x23, 0xea, 0xc5, 0x36, 0x55,
    0x1c, 0x8a, 0x14, 0x7e, 0x87, 0x27, 0x1e, 0xf9,
    0xc9, 0xb2, 0x69, 0x0a, 0xa7, 0xef, 0x44, 0x12,
    0xe7, 0x33, 0x5f, 0x4a, 0xb1, 0x44, 0x4b, 0xc9
};

#define B_RELAY1_PORT    12
#define B_CFG_PORT        0

void supla_esp_board_set_device_name(char *buffer, uint8 buffer_size) {
	#ifdef __BOARD_sonoff_ds18b20
		ets_snprintf(buffer, buffer_size, "SONOFF-DS18B20");
	#else
		ets_snprintf(buffer, buffer_size, "SONOFF");
	#endif
}


void supla_esp_board_gpio_init(void) {
		
	supla_input_cfg[0].type = INPUT_TYPE_BUTTON;
	supla_input_cfg[0].gpio_id = B_CFG_PORT;
	supla_input_cfg[0].flags = INPUT_FLAG_PULLUP | INPUT_FLAG_CFG_BTN;
	supla_input_cfg[0].relay_gpio_id = B_RELAY1_PORT;
	supla_input_cfg[0].channel = 0;

	// ---------------------------------------
	// ---------------------------------------

    supla_relay_cfg[0].gpio_id = B_RELAY1_PORT;
    supla_relay_cfg[0].flags = RELAY_FLAG_RESTORE_FORCE;
    supla_relay_cfg[0].channel = 0;
    

}

void supla_esp_board_set_channels(TDS_SuplaDeviceChannel_B *channels, unsigned char *channel_count) {
	

	#ifdef __BOARD_sonoff_ds18b20
    	*channel_count = 2;
	#else
		*channel_count = 1;
	#endif


	channels[0].Number = 0;
	channels[0].Type = SUPLA_CHANNELTYPE_RELAY;

	channels[0].FuncList = SUPLA_BIT_RELAYFUNC_POWERSWITCH \
								| SUPLA_BIT_RELAYFUNC_LIGHTSWITCH;

	channels[0].Default = SUPLA_CHANNELFNC_POWERSWITCH;

	channels[0].value[0] = supla_esp_gpio_relay_on(B_RELAY1_PORT);

	#ifdef __BOARD_sonoff_ds18b20
		channels[1].Number = 1;
		channels[1].Type = SUPLA_CHANNELTYPE_THERMOMETERDS18B20;

		channels[1].FuncList = 0;
		channels[1].Default = 0;

		supla_get_temperature(channels[1].value);
	#endif



}

void supla_esp_board_send_channel_values_with_delay(void *srpc) {

	supla_esp_channel_value_changed(0, supla_esp_gpio_relay_on(B_RELAY1_PORT));

}
