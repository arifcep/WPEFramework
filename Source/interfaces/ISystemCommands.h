#pragma once

#include "Module.h"
#include "IStringIterator.h"

namespace WPEFramework {
namespace Exchange {

    struct ISystemCommands : virtual public Core::IUnknown {
        enum { ID = 0x00000080 };

        using CommandId = string;

        struct ICommand : virtual public Core::IUnknown {
            enum { ID = 0x00000081 };

            struct IParamsIterator : virtual public Core::IUnknown {
                enum { ID = 0x00000082 };

                virtual ~IParamsIterator() {}
                virtual string Name() const = 0;
                virtual string Value() const = 0;
                virtual bool Next() = 0;
            };

            virtual ~ICommand() {}

            virtual uint32_t Execute(IParamsIterator* params) = 0;
            virtual string Description() const = 0;
        };

        virtual ~ISystemCommand() {}

        virtual uint32_t Execute(const CommandId& id, ICommand::IParamsIterator* params) = 0;
        virtual RPC::IStringIterator* SupportedCommands() const = 0;
        virtual ICommand* Command(const CommandId& id) const = 0;
    };

}  // namespace Exchange
}  // namespace WPEFramework
