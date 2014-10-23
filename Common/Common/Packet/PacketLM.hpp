#ifndef _COMMON_PACKET_PACKETLM_HPP_
#define _COMMON_PACKET_PACKETLM_HPP_

#include "Common/CommonStruct.hpp"
#include "Common/Packet/Command.hpp"

enum CommandLM {
    COMMAND_LM_CONNECTED = COMMAND_LM_BEGIN,
    COMMAND_LM_DISCONNECTED,
    COMMAND_LM_END,
};

#endif // _COMMON_PACKET_PACKETLM_HPP_