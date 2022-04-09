/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 Metrological
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace WPEFramework {
namespace Exchange {

    enum IDS {
        ID_BROWSER  = 0x00000040,
        ID_BROWSER_NOTIFICATION,
        ID_POWER,
        ID_PLAYGIGA,
        ID_COMMAND,
        ID_COMMAND_REGISTRATION,
        ID_DICTIONARY,
        ID_DICTIONARY_NOTIFICATION,
        ID_DICTIONARY_ITERATOR,
        ID_EXTERNAL,
        ID_EXTERNAL_NOTIFICATION,
        ID_EXTERNAL_CATALOG,
        ID_EXTERNAL_CATALOG_NOTIFICATION,
        ID_KEYHANDLER,
        ID_KEYPRODUCER,
        ID_MEMORY,
        ID_PROCESSMEMORY,
        ID_MEMORYEXTENDED,
        ID_NETFLIX,
        ID_NETFLIX_NOTIFICATION,
        ID_CONTENTDECRYPTION,
        ID_PROVISIONING,
        ID_PROVISIONING_NOTIFICATION,

        ID_SWITCHBOARD,
        ID_SWITCHBOARD_NOTIFICATION,
        ID_TIMESYNC,
        ID_TIMESYNC_NOTIFICATION,
        ID_IPNETWORK,
        ID_IPNETWORK_DNSSERVER,

        ID_GUIDE,
        ID_GUIDE_NOTIFICATION,
        ID_VOICEHANDLER,
        ID_VOICEPRODUCER,
        ID_WEBDRIVER,
        ID_WEBSERVER,
        ID_STREAMING,
        ID_STREAMING_NOTIFICATION,
        ID_CAPTURE,
        ID_RPCLINK_NOTIFICATION,
        ID_RPCLINK,
        ID_AVNCLIENT,

        ID_POWER_NOTIFICATION,

        ID_BLUETOOTH,
        ID_RTSPCLIENT,

        ID_BROWSER_METADATA,

        ID_BLUETOOTH_DEVICE,
        ID_BLUETOOTH_DEVICE_ITERATOR,
        ID_BLUETOOTH_NOTIFICATION,
        ID_BLUETOOTH_CALLBACK,

        ID_SYSTEMCOMMAND,

        ID_PACKAGER,
        ID_PACKAGER_INSTALLATIONINFO,
        ID_PACKAGER_PACKAGEINFO,
        ID_PACKAGER_NOTIFICATION,

        ID_SECURESHELLSERVER,
        ID_SECURESHELLSERVER_CLIENT,
        ID_SECURESHELLSERVER_CLIENT_ITERATOR,

        ID_PACKAGER_PACKAGEINFOEX,
        ID_PACKAGER_PACKAGEINFOEX_ITERATOR,

        ID_TESTCONTROLLER,
        ID_TESTCONTROLLER_TEST,
        ID_TESTCONTROLLER_TEST_ITERATOR,
        ID_TESTCONTROLLER_CATEGORY,
        ID_TESTCONTROLLER_CATEGORY_ITERATOR,

        ID_TESTUTILITY,
        ID_TESTUTILITY_COMMAND,
        ID_TESTUTILITY_ITERATOR,

        ID_COMPOSITION,
        ID_COMPOSITION_CLIENT,
        ID_COMPOSITION_RENDER,
        ID_COMPOSITION_NOTIFICATION,
        ID_COMPOSITION_DISPLAY,

        ID_ROOMADMINISTRATOR,
        ID_ROOMADMINISTRATOR_NOTIFICATION,
        ID_ROOMADMINISTRATOR_ROOM,
        ID_ROOMADMINISTRATOR_ROOM_CALLBACK,
        ID_ROOMADMINISTRATOR_ROOM_MSGNOTIFICATION,

        ID_STREAM,
        ID_STREAM_CONTROL,
        ID_STREAM_CONTROL_GEOMETRY,
        ID_STREAM_CONTROL_CALLBACK,
        ID_STREAM_CALLBACK,
        ID_PLAYER,

        ID_DSGCC_CLIENT,
        ID_DSGCC_CLIENT_NOTIFICATION,

        ID_PERFORMANCE,

        ID_WEBPA,
        ID_WEBPA_CLIENT,

        ID_WHEELHANDLER,
        ID_WHEELPRODUCER,
        ID_POINTERHANDLER,
        ID_POINTERPRODUCER,
        ID_TOUCHHANDLER,
        ID_TOUCHPRODUCER,

        ID_STREAM_ELEMENT,
        ID_STREAM_ELEMENT_ITERATOR,

        ID_REMOTECONTROL,
        ID_REMOTECONTROL_NOTIFICATION,

        ID_RESOURCEMONITOR,

        ID_INPUT_PIN,
        ID_INPUT_PIN_NOTIFICATION,
        ID_INPUT_PIN_CATALOG,

        ID_MATH,

        ID_VOICEPRODUCER_PROFILE,

        ID_VOLUMECONTROL,
        ID_VOLUMECONTROL_NOTIFICATION,

        ID_DEVICE_PROPERTIES,
        ID_GRAPHICS_PROPERTIES,
        ID_CONNECTION_PROPERTIES,
        ID_DISPLAY_PROPERTIES,
        ID_COLORIMETRY_ITERATOR,
        ID_CONNECTION_PROPERTIES_NOTIFICATION,

        ID_HDR_PROPERTIES,
        ID_HDR_ITERATOR,

        ID_PLAYER_PROPERTIES,
        ID_PLAYER_PROPERTIES_AUDIO,
        ID_PLAYER_PROPERTIES_VIDEO,

        ID_REMOTEINVOCATION,

        ID_WEB_BROWSER,
        ID_BROWSER_RESOURCES,
        ID_BROWSER_SECURITY,

        ID_AVSCLIENT,
        ID_AVSCONTROLLER,
        ID_AVSCONTROLLER_NOTIFICATION,

        ID_INPUT_SWITCH,

        ID_BLUETOOTH_SECURITYCALLBACK,
        ID_BLUETOOTH_CLASSIC,
        ID_BLUETOOTH_CLASSIC_SECURITYCALLBACK,
        ID_BLUETOOTH_LOWENERGY,

        ID_DOLBY_OUTPUT,
        ID_DOLBY_OUTPUT_NOTIFICATION,

        ID_WEBKITBROWSER_NOTIFICATION,

        ID_AMAZONPRIME,
        ID_AMAZONPRIME_NOTIFICATION,

        ID_CUSTOMER_CARE_OPERATIONS,

        ID_MEDIAPLAYER,
        ID_MEDIASTREAM,
        ID_MEDIASTREAM_NOTIFICATION,

        ID_APPLICATION,
        ID_APPLICATION_NOTIFICATION,
        ID_CONFIGURATION,

        ID_DEVICE_CAPABILITIES,
        ID_DEVICE_CAPABILITIES_AUDIO,
        ID_DEVICE_CAPABILITIES_VIDEO,
        ID_DEVICE_CAPABILITIES_RESOLUTION,
        ID_DEVICE_METADATA,

        ID_DIALSERVER,
        ID_DIALSERVER_APPLICATION,

        ID_LANGUAGETAG,
        ID_LANGUAGETAG_NOTIFICATION,
          
        ID_EXTERNAL_DERIVED,
        ID_BRIGHTNESS,
        ID_FOCUS,

        //OCDM
        ID_ACCESSOROCDM,
        ID_ACCESSOROCDM_NOTIFICATION,
        ID_SESSION,
        ID_SESSION_CALLBACK,
        ID_SESSION_EXTENSION,

        //Butler
        ID_BUTLER,
        ID_BUTLER_NOTIFICATION,

	      // Network Tools
        ID_NETWORKTOOLS,
        ID_NETWORKTOOLS_CALLBACK,

        ID_BLUETOOTHAUDIOSINK,
        ID_BLUETOOTHAUDIOSINK_CALLBACK,
        ID_BLUETOOTHAUDIOSINK_AUDIOCODECITERATOR,
        ID_BLUETOOTHAUDIOSINK_DRMSCHEMEITERATOR,
        ID_BLUETOOTHAUDIOSINK_CONTROL,

        ID_VALUE_POINT,
        ID_VALUE_POINT_NOTIFICATION,
        ID_VALUE_POINT_CATALOG,
        ID_VALUE_POINT_CATALOG_NOTIFICATION,
        ID_ZIGWAVE,

        ID_TIMEZONE,
        ID_TIMEZONE_NOTIFICATION,

        ID_MESSAGE_CONTROL,
        ID_MESSAGE_CONTROL_NOTIFICATION,

        ID_STORE,
        ID_STORE_NOTIFICATION,
        ID_STORE_CACHE,

        ID_LISA,
        ID_LISA_NOTIFICATION,
        ID_LISA_APP_VERSION,
        ID_LISA_APP_VERSION_ITERATOR,
        ID_LISA_APP,
        ID_LISA_APP_ITERATOR,
        ID_LISA_APPS_PAYLOAD,
        ID_LISA_STORAGE,
        ID_LISA_STORAGE_PAYLOAD,
        ID_LISA_PROGRESS,
        ID_LISA_KEY_VALUE,
        ID_LISA_KEY_VALUE_ITERATOR,
        ID_LISA_METADATA_PAYLOAD,

        ID_CONTENTDECRYPTION_NOTIFICATION,
    };
}
}
