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
    0xcb, 0x2f, 0x5f, 0xfd, 0xc5, 0xcb, 0xe5, 0xe6,
    0x36, 0x54, 0x06, 0x92, 0xf2, 0xd2, 0xdc, 0x6b,
    0xd7, 0x30, 0x1e, 0xd4, 0xe1, 0x04, 0x77, 0x2c,
    0x58, 0x0a, 0x84, 0xd1, 0xa2, 0x8c, 0x7b, 0x97,
    0xad, 0xf8, 0x9f, 0x42, 0x5b, 0xed, 0x54, 0x52,
    0x89, 0x78, 0xec, 0xae, 0x3c, 0x52, 0x65, 0xa6,
    0xe8, 0x68, 0x9d, 0x99, 0x97, 0xd0, 0x1f, 0x3f,
    0x63, 0x76, 0xeb, 0xa6, 0x57, 0xe3, 0xa8, 0x4a,
    0x46, 0x3f, 0xef, 0xfd, 0x5d, 0x05, 0x4c, 0xb4,
    0x37, 0x4b, 0xfb, 0x61, 0x83, 0x45, 0x10, 0x75,
    0x0e, 0x77, 0xcb, 0x7a, 0x55, 0xda, 0xd1, 0xdc,
    0x3a, 0xa1, 0xfa, 0xf3, 0x4b, 0x34, 0xb5, 0x6c,
    0xe8, 0xdd, 0x1b, 0xed, 0x00, 0x9e, 0xe6, 0x35,
    0xba, 0x46, 0x86, 0xfd, 0xb7, 0xa9, 0x54, 0xdb,
    0xa0, 0x83, 0x9c, 0xe3, 0x69, 0xb5, 0x68, 0x37,
    0x5e, 0x9e, 0x8e, 0xdc, 0xb4, 0xb5, 0x8b, 0x96,
    0xeb, 0x6f, 0x23, 0x32, 0x33, 0xd1, 0x49, 0x5f,
    0x22, 0xac, 0xb1, 0xc8, 0x02, 0x4b, 0x4e, 0x2c,
    0x67, 0x6b, 0x32, 0xd0, 0xd9, 0x07, 0xd0, 0xe3,
    0xcf, 0xbf, 0xa5, 0x07, 0xae, 0x99, 0x03, 0xc4,
    0x57, 0xf0, 0x14, 0x5c, 0x19, 0xb1, 0xb4, 0xb4,
    0x76, 0x0a, 0x5f, 0x34, 0xd7, 0x59, 0x54, 0x02,
    0x73, 0xad, 0x2b, 0x12, 0x3b, 0x63, 0xb2, 0xff,
    0x73, 0xae, 0x84, 0xb2, 0x7d, 0x05, 0x01, 0x45,
    0x22, 0x77, 0x7b, 0x87, 0x49, 0xbd, 0x78, 0x4f,
    0xdb, 0xd9, 0x57, 0x1b, 0x3b, 0xcc, 0x28, 0x2a,
    0x73, 0xf6, 0xf5, 0x2d, 0x9b, 0xfa, 0x00, 0xf5,
    0x9c, 0xf3, 0x16, 0x2f, 0xa5, 0x03, 0xfd, 0x45,
    0x83, 0xbd, 0x3b, 0xda, 0xe3, 0x59, 0x5a, 0x7b,
    0x95, 0x08, 0xd6, 0x0b, 0x6a, 0x83, 0x9a, 0xba,
    0x7d, 0x3d, 0x89, 0x5a, 0x5f, 0xbf, 0xbb, 0xa4,
    0xba, 0x3f, 0x1e, 0x8a, 0x08, 0x23, 0x51, 0xc0,
    0xd1, 0xec, 0x75, 0x9e, 0xc0, 0xf1, 0x14, 0x6d,
    0xed, 0xbe, 0x9b, 0x90, 0x8a, 0x89, 0x1f, 0x3a,
    0xf7, 0x87, 0xac, 0xca, 0xe7, 0x1e, 0xd2, 0xbf,
    0x22, 0x02, 0xf5, 0xe7, 0x3c, 0xd8, 0xd8, 0xaa,
    0xd8, 0x27, 0x47, 0x42, 0xf7, 0xb7, 0xb6, 0xa5,
    0x0f, 0x6a, 0x02, 0x97, 0x5a, 0xe3, 0x67, 0x66,
    0x9b, 0xac, 0xf6, 0x07, 0x4a, 0xba, 0x3e, 0x31,
    0xa0, 0x38, 0xe7, 0x79, 0x1a, 0x82, 0xa9, 0x3d,
    0xf6, 0xb7, 0x50, 0xac, 0x7f, 0x61, 0xb6, 0xfa,
    0xc7, 0x5a, 0xd1, 0xcf, 0x93, 0xa8, 0x6a, 0x83,
    0x99, 0x7f, 0x83, 0x19, 0xf8, 0x33, 0xeb, 0xc5,
    0x96, 0xc0, 0xd6, 0x56, 0xb3, 0xcd, 0x67, 0xaf,
    0x67, 0xe5, 0x7e, 0xf8, 0x6e, 0xeb, 0x7e, 0xac,
    0x8b, 0xcc, 0x9c, 0xf6, 0x26, 0x59, 0x52, 0xdd,
    0x0d, 0x97, 0x7d, 0xa3, 0x64, 0x3e, 0x0a, 0x6f,
    0xa9, 0x3c, 0x96, 0x88, 0x56, 0x65, 0x0c, 0x85,
    0xaf, 0x00, 0xe2, 0x60, 0xbd, 0xe3, 0x01, 0x67,
    0x8f, 0xec, 0x6e, 0x29, 0x92, 0xca, 0x23, 0x41,
    0x7d, 0x57, 0xd6, 0x77, 0x94, 0x06, 0x4b, 0xd3,
    0x14, 0xc7, 0x2a, 0xee, 0x6b, 0x7e, 0xc5, 0x8f,
    0x95, 0x79, 0x4a, 0x55, 0x4d, 0x3b, 0xef, 0x61,
    0x8a, 0xb1, 0xae, 0x8d, 0x0e, 0x7c, 0x25, 0x16,
    0x64, 0x26, 0x4e, 0x69, 0x53, 0xa0, 0x78, 0xf2,
    0xa8, 0x46, 0xea, 0xa7, 0x70, 0xcb, 0x1a, 0x61,
    0xa5, 0x26, 0x66, 0xf7, 0x63, 0xd9, 0x88, 0x49,
    0x0d, 0xab, 0x6d, 0x32, 0x55, 0x74, 0x5f, 0x3f,
    0xeb, 0xa5, 0x45, 0xc4, 0x90, 0x65, 0xc2, 0xbf,
    0x1c, 0x2b, 0x6b, 0xce, 0x43, 0xdc, 0x8a, 0x32,
    0x6b, 0x16, 0x95, 0xa8, 0xc9, 0xb4, 0x99, 0x77,
    0x75, 0xb3, 0xa3, 0x76, 0x2b, 0x52, 0x6c, 0xfd,
    0x29, 0x38, 0xb0, 0x49, 0xbe, 0x0a, 0x12, 0xcb,
    0x54, 0xc7, 0x12, 0x4d, 0xa9, 0x72, 0x32, 0x51
};

#define B_RELAY1_PORT    12
#define B_CFG_PORT        0

void supla_esp_board_set_device_name(char *buffer, uint8 buffer_size) {

	ets_snprintf(buffer, buffer_size, "SONOFF-SOCKET");

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

	*channel_count = 1;

	channels[0].Number = 0;
	channels[0].Type = SUPLA_CHANNELTYPE_RELAY;

	channels[0].FuncList = SUPLA_BIT_RELAYFUNC_POWERSWITCH \
								| SUPLA_BIT_RELAYFUNC_LIGHTSWITCH;

	channels[0].Default = SUPLA_CHANNELFNC_POWERSWITCH;

	channels[0].value[0] = supla_esp_gpio_relay_on(B_RELAY1_PORT);

}

void supla_esp_board_send_channel_values_with_delay(void *srpc) {

	supla_esp_channel_value_changed(0, supla_esp_gpio_relay_on(B_RELAY1_PORT));

}
