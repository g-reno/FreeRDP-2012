/**
 * FreeRDP: A Remote Desktop Protocol Client
 * RAIL Virtual Channel Plugin
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 * Copyright 2011 Roman Barabanov <romanbarabanov@gmail.com>
 * Copyright 2011 Vic Lee
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RAIL_MAIN_H
#define	__RAIL_MAIN_H

struct rail_plugin
{
	rdpSvcPlugin plugin;
	RAIL_VCHANNEL_DATA_SENDER rail_data_sender;
	RAIL_VCHANNEL_EVENT_SENDER rail_event_sender;
	RAIL_SESSION * session;
};
typedef struct rail_plugin railPlugin;

#endif /* __RAIL_MAIN_H */