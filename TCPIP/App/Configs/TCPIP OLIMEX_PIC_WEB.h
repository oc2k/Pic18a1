/*********************************************************************
 *
 *	Microchip TCP/IP Stack Demo Application Configuration Header
 *
 *********************************************************************
 * FileName:        TCPIPConfig.h
 * Dependencies:    Microchip TCP/IP Stack
 * Processor:       PIC18, PIC24F, PIC24H, dsPIC30F, dsPIC33F, PIC32
 * Compiler:        Microchip C32 v1.10 or higher
 *					Microchip C30 v3.12 or higher
 *					Microchip C18 v3.34 or higher
 *					HI-TECH PICC-18 PRO 9.63PL2 or higher
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright (C) 2002-2010 Microchip Technology Inc.  All rights
 * reserved.
 *
 * Microchip licenses to you the right to use, modify, copy, and
 * distribute:
 * (i)  the Software when embedded on a Microchip microcontroller or
 *      digital signal controller product ("Device") which is
 *      integrated into Licensee's product; or
 * (ii) ONLY the Software driver source files ENC28J60.c, ENC28J60.h,
 *		ENCX24J600.c and ENCX24J600.h ported to a non-Microchip device
 *		used in conjunction with a Microchip ethernet controller for
 *		the sole purpose of interfacing with the ethernet controller.
 *
 * You should refer to the license agreement accompanying this
 * Software for additional information regarding your rights and
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *
 * V5.36   ---- STACK_USE_MPFS support has been removed 
 ********************************************************************/
#ifndef __TCPIPCONFIG_H
#define __TCPIPCONFIG_H

#include "GenericTypeDefs.h"
#include "Compiler.h"
#define GENERATED_BY_TCPIPCONFIG "Version 1.0.3383.23374"

// =======================================================================
//   Application Options
// =======================================================================

/* Application Level Module Selection
 *   Uncomment or comment the following lines to enable or
 *   disabled the following high-level application modules.
 */
// -- (NEW)
//NewTask_/#define STACK_USE_HAL_A2D			//(NEW) Activate "HalA2D.h"
//NewTask_/#define STACK_USE_HAL_SCI_UART		//(NEW) Activate "HalSCI.h"

#define STACK_USE_UART					// Application demo using UART for IP address display and stack configuration
#define STACK_USE_UART2TCP_BRIDGE		// UART to TCP Bridge application example
//181004a1PermanenceDelete_/#define STACK_USE_IP_GLEANING
//180920a2#define STACK_USE_ICMP_SERVER			// Ping query and response capability
#define STACK_USE_ICMP_CLIENT			// Ping transmission capability
//181003b1PermanenceDelete_/180913a3#define STACK_USE_HTTP2_SERVER			// New HTTP server with POST, Cookies, Authentication, etc.
//181003g6PermanenceDelete_/#define STACK_USE_SSL_SERVER			// SSL server socket support (Requires SW300052)
//181003g7PermanenceDelete_/#define STACK_USE_SSL_CLIENT			// SSL client socket support (Requires SW300052)
//181003d1PermanenceDelete_/180913a2#define STACK_USE_AUTO_IP               // Dynamic link-layer IP address automatic configuration protocol
//181003c2PermanenceDelete_/180913a2#define STACK_USE_DHCP_CLIENT			// Dynamic Host Configuration Protocol client for obtaining IP address and other parameters
//181003c1PermanenceDelete_/180913a2#define STACK_USE_DHCP_SERVER			// Single host DHCP server
//181004a2PermanenceDelete_/#define STACK_USE_FTP_SERVER			// File Transfer Protocol (old)
//181003e1PermanenceDelete_/180913a1#define STACK_USE_SMTP_CLIENT			// Simple Mail Transfer Protocol for sending email
//181004a3PermanenceDelete_/#define STACK_USE_SNMP_SERVER			// Simple Network Management Protocol v2C Community Agent
//181004a4PermanenceDelete_/#define STACK_USE_SNMPV3_SERVER			// Simple Network Management Protocol v3 Agent
//181004a5PermanenceDelete_/#define STACK_USE_TFTP_CLIENT			// Trivial File Transfer Protocol client
//181003f1PermanenceDelete_/180912a6#define STACK_USE_GENERIC_TCP_CLIENT_EXAMPLE	// HTTP Client example in GenericTCPClient.c
//181003f2PermanenceDelete_/180912a6#define STACK_USE_GENERIC_TCP_SERVER_EXAMPLE	// ToUpper server example in GenericTCPServer.c
//181003g1PermanenceDelete_/180912a5#define STACK_USE_TELNET_SERVER			// Telnet server
#define STACK_USE_ANNOUNCE				// Microchip Embedded Ethernet Device Discoverer server/client
#define STACK_USE_DNS					// Domain Name Service Client for resolving hostname strings to IP addresses
//181004a6PermanenceDelete_/#define STACK_USE_DNS_SERVER			// Domain Name Service Server for redirection to the local device
#define STACK_USE_NBNS					// NetBIOS Name Service Server for repsonding to NBNS hostname broadcast queries
//181003g2PermanenceDelete_/180912a4#define STACK_USE_REBOOT_SERVER			// Module for resetting this PIC remotely.  Primarily useful for a Bootloader.
//181003g3PermanenceDelete_/180912a3#define STACK_USE_SNTP_CLIENT			// Simple Network Time Protocol for obtaining current date/time from Internet
//181003g5PermanenceDelete_/#define STACK_USE_UDP_PERFORMANCE_TEST	// Module for testing UDP TX performance characteristics.  NOTE: Enabling this will cause a huge amount of UDP broadcast packets to flood your network on the discard port.  Use care when enabling this on production networks, especially with VPNs (could tunnel broadcast traffic across a limited bandwidth connection).
//181003g4PermanenceDelete_/180912a2#define STACK_USE_TCP_PERFORMANCE_TEST	// Module for testing TCP TX performance characteristics
//181004a7PermanenceDelete_/#define STACK_USE_DYNAMICDNS_CLIENT		// Dynamic DNS client updater module
//181004a8PermanenceDelete_/180912a1#define STACK_USE_BERKELEY_API			// Berekely Sockets APIs are available
//181004a9PermanenceDelete_/#define STACK_USE_ZEROCONF_LINK_LOCAL	// Zeroconf IPv4 Link-Local Addressing
//181004a10PermanenceDelete_/#define STACK_USE_ZEROCONF_MDNS_SD		// Zeroconf mDNS and mDNS service discovery
//
// -- oc2k define start from here
#define __fixedAsciiDATE		"Sep 09 2018" //" 09/09/2018 " 

// =======================================================================
//   Data Storage Options
// =======================================================================

/* MPFS Configuration
 *   MPFS is automatically included when required for other
 *   applications.  If your custom application requires it
 *   otherwise, uncomment the appropriate selection.
 */
//181003a1PermanenceDelete_/180914a5#define STACK_USE_MPFS2

/* MPFS Storage Location
 *   If html pages are stored in internal program memory,
 *   comment both MPFS_USE_EEPROM and MPFS_USE_SPI_FLASH, then
 *   include an MPFS image (.c or .s file) in the project.
 *   If html pages are stored in external memory, uncomment the
 *   appropriate definition.
 *
 *   Supported serial flash parts include the SST25VFxxxB series.
 */
//#define MPFS_USE_EEPROM
#define MPFS_USE_SPI_FLASH

/* EEPROM Addressing Selection
 *   If using the 1Mbit EEPROM, uncomment this line
 */
//#define USE_EEPROM_25LC1024

/* EEPROM Reserved Area
 *   Number of EEPROM bytes to be reserved before MPFS storage starts.
 *   These bytes host application configurations such as IP Address,
 *   MAC Address, and any other required variables.
 *
 *   For MPFS Classic, this setting must match the Reserved setting
 *	 on the Advanced Settings page of the MPFS2 Utility.
 */
#define MPFS_RESERVE_BLOCK				(4096ul)

/* MPFS File Handles
 *   Maximum number of simultaneously open MPFS2 files.
 *   For MPFS Classic, this has no effect.
 */
#define MAX_MPFS_HANDLES				(7ul)


// =======================================================================
//   Network Addressing Options
// =======================================================================

/* Default Network Configuration
 *   These settings are only used if data is not found in EEPROM.
 *   To clear EEPROM, hold BUTTON0, reset the board, and continue
 *   holding until the LEDs flash.  Release, and reset again.
 */
#define MY_DEFAULT_HOST_NAME			"PIC-WEB"

#define MY_DEFAULT_MAC_BYTE1            (0x00)	// Use the default of 00-04-A3-00-00-00
#define MY_DEFAULT_MAC_BYTE2            (0x04)	// if using an ENCX24J600, MRF24WB0M, or
#define MY_DEFAULT_MAC_BYTE3            (0xA3)	// PIC32MX6XX/7XX internal Ethernet 
#define MY_DEFAULT_MAC_BYTE4            (0x00)	// controller and wish to use the 
#define MY_DEFAULT_MAC_BYTE5            (0x00)	// internal factory programmed MAC
#define MY_DEFAULT_MAC_BYTE6            (0x01)	// address instead.

#define MY_DEFAULT_IP_ADDR_BYTE1        (169ul)
#define MY_DEFAULT_IP_ADDR_BYTE2        (254ul)
#define MY_DEFAULT_IP_ADDR_BYTE3        (1ul)
#define MY_DEFAULT_IP_ADDR_BYTE4        (1ul)

#define MY_DEFAULT_MASK_BYTE1           (255ul)
#define MY_DEFAULT_MASK_BYTE2           (255ul)
#define MY_DEFAULT_MASK_BYTE3           (0ul)
#define MY_DEFAULT_MASK_BYTE4           (0ul)

#define MY_DEFAULT_GATE_BYTE1           (169ul)
#define MY_DEFAULT_GATE_BYTE2           (254ul)
#define MY_DEFAULT_GATE_BYTE3           (1ul)
#define MY_DEFAULT_GATE_BYTE4           (1ul)

#define MY_DEFAULT_PRIMARY_DNS_BYTE1	(169ul)
#define MY_DEFAULT_PRIMARY_DNS_BYTE2	(254ul)
#define MY_DEFAULT_PRIMARY_DNS_BYTE3	(1ul)
#define MY_DEFAULT_PRIMARY_DNS_BYTE4	(1ul)

#define MY_DEFAULT_SECONDARY_DNS_BYTE1	(0ul)
#define MY_DEFAULT_SECONDARY_DNS_BYTE2	(0ul)
#define MY_DEFAULT_SECONDARY_DNS_BYTE3	(0ul)
#define MY_DEFAULT_SECONDARY_DNS_BYTE4	(0ul)

// ===================================================================================
// 0800:	64,01,	64,01,	3E,01,	64,01;	29,01,	1B,01,	0E,01,	F8,00; __>> 356, 356, 318, 356; 297, 283, 270, 248;
// ===================================================================================
// -----------------------------
#define MY_DEFAULT_PROJ_PARAM0			(356ul)	// PP0,8 _n_rom00
#define MY_DEFAULT_PROJ_PARAM1			(356ul)	// PP1,8 _n_rom02
#define MY_DEFAULT_PROJ_PARAM2			(318ul)	// PP2,9 _n_rom04
#define MY_DEFAULT_PROJ_PARAM3			(356ul)	// PP3,10 _n_rom06
#define MY_DEFAULT_PROJ_PARAM4			(297ul)	// PP4,11 _n_rom08
#define MY_DEFAULT_PROJ_PARAM5			(283ul)	// PP5,12 _n_rom0A
#define MY_DEFAULT_PROJ_PARAM6			(270ul)	// PP6,13 _n_rom0C
#define MY_DEFAULT_PROJ_PARAM7			(248ul)	// PP7,14 _n_rom0E 

// =======================================================================
//   PIC32MX7XX/6XX MAC Layer Options
//   If not using a PIC32MX7XX/6XX device, ignore this section.
// =======================================================================
#define	ETH_CFG_LINK			0		// set to 1 if you need to config the link to specific following parameters
										// otherwise the default connection will be attempted
										// depending on the selected PHY
	#define	ETH_CFG_AUTO		1		// use auto negotiation
	#define	ETH_CFG_10			1		// use/advertise 10 Mbps capability
	#define	ETH_CFG_100			1		// use/advertise 100 Mbps capability
	#define	ETH_CFG_HDUPLEX		1		// use/advertise half duplex capability
	#define	ETH_CFG_FDUPLEX		1		// use/advertise full duplex capability
	#define	ETH_CFG_AUTO_MDIX	1		// use/advertise auto MDIX capability
	#define	ETH_CFG_SWAP_MDIX	1		// use swapped MDIX. else normal MDIX

#define EMAC_TX_DESCRIPTORS		2		// number of the TX descriptors to be created
#define EMAC_RX_DESCRIPTORS		8		// number of the RX descriptors and RX buffers to be created

#define	EMAC_RX_BUFF_SIZE		1536	// size of a RX buffer. should be multiple of 16
										// this is the size of all receive buffers processed by the ETHC
										// The size should be enough to accomodate any network received packet
										// If the packets are larger, they will have to take multiple RX buffers
										// The current implementation does not handle this situation right now and the packet is discarded.


// =======================================================================
//   Transport Layer Options
// =======================================================================

/* Transport Layer Configuration
 *   The following low level modules are automatically enabled
 *   based on module selections above.  If your custom module
 *   requires them otherwise, enable them here.
 */
#define STACK_USE_TCP // in basic, currently use for "STACK_USE_UART2TCP_BRIDGE" see TCPIP.h defines
#define STACK_USE_UDP // in basic, currently use for "STACK_USE_DNS", "STACK_USE_NBNS" and "STACK_USE_ANNOUNCE" see TCPIP.h defines

/* Client Mode Configuration
 *   Uncomment following line if this stack will be used in CLIENT
 *   mode.  In CLIENT mode, some functions specific to client operation
 *   are enabled.
 */
#define STACK_CLIENT_MODE

/* TCP Socket Memory Allocation
 *   TCP needs memory to buffer incoming and outgoing data.  The
 *   amount and medium of storage can be allocated on a per-socket
 *   basis using the example below as a guide.
 */
	// Allocate how much total RAM (in bytes) you want to allocate
	// for use by your TCP TCBs, RX FIFOs, and TX FIFOs.
	#define TCP_ETH_RAM_SIZE					(3900ul)
	#define TCP_PIC_RAM_SIZE					(0ul)
	#define TCP_SPI_RAM_SIZE					(0ul)
	#define TCP_SPI_RAM_BASE_ADDRESS			(0x00)

	// Define names of socket types
	#define TCP_SOCKET_TYPES
		#define TCP_PURPOSE_GENERIC_TCP_CLIENT 0
		#define TCP_PURPOSE_GENERIC_TCP_SERVER 1
		#define TCP_PURPOSE_TELNET 2
		#define TCP_PURPOSE_FTP_COMMAND 3
		#define TCP_PURPOSE_FTP_DATA 4
		#define TCP_PURPOSE_TCP_PERFORMANCE_TX 5
		#define TCP_PURPOSE_TCP_PERFORMANCE_RX 6
		#define TCP_PURPOSE_UART_2_TCP_BRIDGE 7
		#define TCP_PURPOSE_HTTP_SERVER 8
		#define TCP_PURPOSE_DEFAULT 9
		#define TCP_PURPOSE_BERKELEY_SERVER 10
		#define TCP_PURPOSE_BERKELEY_CLIENT 11
	#define END_OF_TCP_SOCKET_TYPES

	#if defined(__TCP_C)
		// Define what types of sockets are needed, how many of
		// each to include, where their TCB, TX FIFO, and RX FIFO
		// should be stored, and how big the RX and TX FIFOs should
		// be.  Making this initializer bigger or smaller defines
		// how many total TCP sockets are available.
		//
		// Each socket requires up to 56 bytes of PIC RAM and
		// 48+(TX FIFO size)+(RX FIFO size) bytes of TCP_*_RAM each.
		//
		// Note: The RX FIFO must be at least 1 byte in order to
		// receive SYN and FIN messages required by TCP.  The TX
		// FIFO can be zero if desired.
		#define TCP_CONFIGURATION
		ROM struct
		{
			BYTE vSocketPurpose;
			BYTE vMemoryMedium;
			WORD wTXBufferSize;
			WORD wRXBufferSize;
		} TCPSocketInitializer[] =
		{
			{TCP_PURPOSE_GENERIC_TCP_CLIENT, TCP_ETH_RAM, 125, 100},
			{TCP_PURPOSE_GENERIC_TCP_SERVER, TCP_ETH_RAM, 20, 20},
			{TCP_PURPOSE_TELNET, TCP_ETH_RAM, 200, 150},
			//{TCP_PURPOSE_TELNET, TCP_ETH_RAM, 200, 150},
			//{TCP_PURPOSE_TELNET, TCP_ETH_RAM, 200, 150},
			//{TCP_PURPOSE_FTP_COMMAND, TCP_ETH_RAM, 100, 40},
			//{TCP_PURPOSE_FTP_DATA, TCP_ETH_RAM, 0, 128},
			{TCP_PURPOSE_TCP_PERFORMANCE_TX, TCP_ETH_RAM, 200, 1},
			//{TCP_PURPOSE_TCP_PERFORMANCE_RX, TCP_ETH_RAM, 40, 1500},
			{TCP_PURPOSE_UART_2_TCP_BRIDGE, TCP_ETH_RAM, 256, 256},
			{TCP_PURPOSE_HTTP_SERVER, TCP_ETH_RAM, 200, 200},
			{TCP_PURPOSE_HTTP_SERVER, TCP_ETH_RAM, 200, 200},
			{TCP_PURPOSE_DEFAULT, TCP_ETH_RAM, 200, 200},
			{TCP_PURPOSE_BERKELEY_SERVER, TCP_ETH_RAM, 25, 20},
			//{TCP_PURPOSE_BERKELEY_SERVER, TCP_ETH_RAM, 25, 20},
			//{TCP_PURPOSE_BERKELEY_SERVER, TCP_ETH_RAM, 25, 20},
			//{TCP_PURPOSE_BERKELEY_CLIENT, TCP_ETH_RAM, 125, 100},
		};
		#define END_OF_TCP_CONFIGURATION
	#endif

/* UDP Socket Configuration
 *   Define the maximum number of available UDP Sockets, and whether
 *   or not to include a checksum on packets being transmitted.
 */
#define MAX_UDP_SOCKETS     (8u)
#define UDP_USE_TX_CHECKSUM		// This slows UDP TX performance by nearly 50%, except when using the ENCX24J600 or PIC32MX6XX/7XX, which have a super fast DMA and incurs virtually no speed pentalty.


// =======================================================================
//   Application-Specific Options
// =======================================================================

// -- HTTP2 Server options -----------------------------------------------

	// Maximum numbers of simultaneous HTTP connections allowed.
	// Each connection consumes 2 bytes of RAM and a TCP socket
	#define MAX_HTTP_CONNECTIONS	(2u)

	// Optional setting to use PIC RAM instead of Ethernet/Wi-Fi RAM for
	// storing HTTP Connection Context variables (HTTP_CONN structure for each 
	// HTTP connection).  Undefining this macro results in the Ethernet/Wi-Fi 
	// RAM being used (minimum PIC RAM usage, lower performance).  Defining 
	// this macro results in PIC RAM getting used (higher performance, but uses 
	// PIC RAM).  This option should not be enabled on PIC18 devices.  The 
	// performance increase of having this option defined is only apparent when 
	// the HTTP server is servicing multiple connections simultaneously.
	//#define HTTP_SAVE_CONTEXT_IN_PIC_RAM

	// Indicate what file to serve when no specific one is requested
	#define HTTP_DEFAULT_FILE		"index.htm"
	#define HTTPS_DEFAULT_FILE		"index.htm"
	#define HTTP_DEFAULT_LEN		(10u)		// For buffer overrun protection.
												// Set to longest length of above two strings.

	// Configure MPFS over HTTP updating
	// Comment this line to disable updating via HTTP
	#define HTTP_MPFS_UPLOAD		"mpfsupload"
	//#define HTTP_MPFS_UPLOAD_REQUIRES_AUTH	// Require password for MPFS uploads
		// Certain firewall and router combinations cause the MPFS2 Utility to fail
		// when uploading.  If this happens, comment out this definition.

	// Define which HTTP modules to use
	// If not using a specific module, comment it to save resources
	#define HTTP_USE_POST					// Enable POST support
	#define HTTP_USE_COOKIES				// Enable cookie support
	#define HTTP_USE_AUTHENTICATION			// Enable basic authentication support

	//#define HTTP_NO_AUTH_WITHOUT_SSL		// Uncomment to require SSL before requesting a password

    // Define the maximum data length for reading cookie and GET/POST arguments (bytes)
	#define HTTP_MAX_DATA_LEN		(100u)
	
    // Define the minimum number of bytes free in the TX FIFO before executing callbacks
	#define HTTP_MIN_CALLBACK_FREE	(16u)

	//181006a5PermanenceDelete_/#define STACK_USE_HTTP_APP_RECONFIG		// Use the AppConfig web page in the Demo App (~2.5kb ROM, ~0b RAM)
	//181006a5PermanenceDelete_/#define STACK_USE_HTTP_MD5_DEMO			// Use the MD5 Demo web page (~5kb ROM, ~160b RAM)
	//181003e2PermanenceDelete_/180913a1	#define STACK_USE_HTTP_EMAIL_DEMO		// Use the e-mail demo web page

// -- SSL Options --------------------------------------------------------

	#define MAX_SSL_CONNECTIONS		(2ul)	// Maximum connections via SSL
	#define MAX_SSL_SESSIONS		(2ul)	// Max # of cached SSL sessions
	#define MAX_SSL_BUFFERS			(4ul)	// Max # of SSL buffers (2 per socket)
	#define MAX_SSL_HASHES			(5ul)	// Max # of SSL hashes  (2 per, plus 1 to avoid deadlock)

	// Bits in SSL RSA key.  This parameter is used for SSL sever
	// connections only.  The only valid value is 512 bits (768 and 1024
	// bits do not work at this time).  Note, however, that SSL client
	// operations do currently work up to 1024 bit RSA key length.
	#define SSL_RSA_KEY_SIZE		(512ul)


// -- SNMP Options -------------------------------------------------------

	// Comment following line if SNMP TRAP support is needed
	//#define SNMP_TRAP_DISABLED

	// This is the maximum length for community string.
	// Application must ensure that this length is observed.
	// SNMP module adds one byte extra after SNMP_COMMUNITY_MAX_LEN
	// for adding '\0' NULL character.
	#define SNMP_COMMUNITY_MAX_LEN  	(8u)
	#define SNMP_MAX_COMMUNITY_SUPPORT	(3u)
	#define NOTIFY_COMMUNITY_LEN		(SNMP_COMMUNITY_MAX_LEN)

	// Default SNMPv2C community names.  These can be overridden at run time if
	// alternate strings are present in external EEPROM or Flash (actual
	// strings are stored in AppConfig.readCommunity[] and
	// AppConfig.writeCommunity[] arrays).  These strings are case sensitive.
	// An empty string means disabled (not matchable).
	// For application security, these default community names should not be
	// used, but should all be disabled to force the end user to select unique
	// community names.  These defaults are provided only to make it easier to
	// start development.  Specifying more strings than
	// SNMP_MAX_COMMUNITY_SUPPORT will result in the later strings being
	// ignored (but still wasting program memory).  Specifying fewer strings is
	// legal, as long as at least one is present.  A string larger than
	// SNMP_COMMUNITY_MAX_LEN bytes will be ignored.
	#define SNMP_READ_COMMUNITIES		{"public", "read", ""}
	#define END_OF_SNMP_READ_COMMUNITIES
	#define SNMP_WRITE_COMMUNITIES     	{"private", "write", "public"}
	#define END_OF_SNMP_WRITE_COMMUNITIES
#endif

