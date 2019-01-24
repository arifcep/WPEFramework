//
// generated automatically from "ITestUtility.h"
//

#include "ITestUtility.h"

namespace WPEFramework {

namespace ProxyStubs {

using namespace Exchange;

// -----------------------------------------------------------------
// STUB
// -----------------------------------------------------------------

//
// ITestUtility interface stub definitions
//
// Methods:
//  (0) virtual ITestUtility::ICommand::IIterator * Commands() const = 0 
//  (1) virtual ITestUtility::ICommand * Command(const string &) const = 0 

ProxyStub::MethodHandler TestUtilityStubMethods[] = {
  // virtual ITestUtility::ICommand::IIterator * Commands() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility * implementation = input.Implementation<ITestUtility>();
    ASSERT((implementation != nullptr) && "Null ITestUtility implementation pointer (ITestUtility::Commands() stub)");

    ITestUtility::ICommand::IIterator * output = implementation->Commands();

    writer.Number<ITestUtility::ICommand::IIterator *>(output);
  },

  // virtual ITestUtility::ICommand * Command(const string &) const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Reader reader(input.Reader());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility * implementation = input.Implementation<ITestUtility>();
    ASSERT((implementation != nullptr) && "Null ITestUtility implementation pointer (ITestUtility::Command() stub)");

    const string & param0 = reader.Text();

    ITestUtility::ICommand * output = implementation->Command(param0);

    writer.Number<ITestUtility::ICommand *>(output);
  },

  nullptr
}; // TestUtilityStubMethods[]

//
// ITestUtility::ICommand interface stub definitions
//
// Methods:
//  (0) virtual string Execute(const string &) = 0 
//  (1) virtual string Description() const = 0
//  (2) virtual string Signature() const = 0
//  (3) virtual string Name() const = 0

ProxyStub::MethodHandler TestUtilityCommandStubMethods[] = {
  // virtual string Execute(const string &) = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Reader reader(input.Reader());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    ITestUtility::ICommand * implementation = input.Implementation<ITestUtility::ICommand>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (ITestUtility::ICommand::Execute() stub)");

    const string & param0 = reader.Text();

    string output = implementation->Execute(param0);

    writer.Text(output);
  },

  // virtual string Description() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility::ICommand * implementation = input.Implementation<ITestUtility::ICommand>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (ITestUtility::ICommand::Description() stub)");

    string output = implementation->Description();

    writer.Text(output);
  },

  // virtual string Signature() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility::ICommand * implementation = input.Implementation<ITestUtility::ICommand>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (ITestUtility::ICommand::Signature() stub)");

    string output = implementation->Signature();

    writer.Text(output);
  },

  // virtual const string & Name() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {
    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility::ICommand * implementation = input.Implementation<ITestUtility::ICommand>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (ITestUtility::ICommand::Name() stub)");

    string output = implementation->Name();

    writer.Text(output);
  },

  nullptr
}; // TestUtilityCommandStubMethods[]

//
// ITestUtility::ICommand::IIterator interface stub definitions
//
// Methods:
//  (0) virtual void Reset() = 0 
//  (1) virtual bool IsValid() const = 0 
//  (2) virtual bool Next() = 0 
//  (3) virtual ITestUtility::ICommand * Command() const = 0 

ProxyStub::MethodHandler TestUtilityCommandIteratorStubMethods[] = {
  // virtual void Reset() = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());

    ITestUtility::ICommand::IIterator * implementation = input.Implementation<ITestUtility::ICommand::IIterator>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand::IIterator implementation pointer (ITestUtility::ICommand::IIterator::Reset() stub)");

    implementation->Reset();
  },

  // virtual bool IsValid() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility::ICommand::IIterator * implementation = input.Implementation<ITestUtility::ICommand::IIterator>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand::IIterator implementation pointer (ITestUtility::ICommand::IIterator::IsValid() stub)");

    bool output = implementation->IsValid();

    writer.Boolean(output);
  },

  // virtual bool Next() = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    ITestUtility::ICommand::IIterator * implementation = input.Implementation<ITestUtility::ICommand::IIterator>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand::IIterator implementation pointer (ITestUtility::ICommand::IIterator::Next() stub)");

    bool output = implementation->Next();

    writer.Boolean(output);
  },

  // virtual ITestUtility::ICommand * Command() const = 0
  //
  [](Core::ProxyType<Core::IPCChannel> & channel VARIABLE_IS_NOT_USED, Core::ProxyType<RPC::InvokeMessage> & message) {

    RPC::Data::Input & input(message->Parameters());
    RPC::Data::Frame::Writer writer(message->Response().Writer());

    const ITestUtility::ICommand::IIterator * implementation = input.Implementation<ITestUtility::ICommand::IIterator>();
    ASSERT((implementation != nullptr) && "Null ITestUtility::ICommand::IIterator implementation pointer (ITestUtility::ICommand::IIterator::Command() stub)");

    ITestUtility::ICommand * output = implementation->Command();

    writer.Number<ITestUtility::ICommand *>(output);
  },

  nullptr
}; // TestUtilityCommandIteratorStubMethods[]


// -----------------------------------------------------------------
// PROXY
// -----------------------------------------------------------------

//
// ITestUtility interface proxy definitions
//
// Methods:
//  (0) virtual ITestUtility::ICommand::IIterator * Commands() const = 0 
//  (1) virtual ITestUtility::ICommand * Command(const string &) const = 0 

class TestUtilityProxy final : public ProxyStub::UnknownProxyType<ITestUtility> {
public:
  TestUtilityProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
      : BaseClass(channel, implementation, otherSideInformed)
  {
  }

  ITestUtility::ICommand::IIterator * Commands() const override
  {
    IPCMessage newMessage(BaseClass::Message(0));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    ITestUtility::ICommand::IIterator * output_implementation = reader.Number<ITestUtility::ICommand::IIterator *>();
    ASSERT((output_implementation != nullptr) && "Null ITestUtility::ICommand::IIterator implementation pointer (TestUtilityProxy::Commands() proxy stub)");
    ITestUtility::ICommand::IIterator * output = const_cast<TestUtilityProxy &>(*this).CreateProxy<ITestUtility::ICommand::IIterator>(output_implementation);
    ASSERT((output != nullptr) && "Failed to instantiate ITestUtility::ICommand::IIterator proxy (TestUtilityProxy::Commands() proxy stub)");

    return output;
  }

  ITestUtility::ICommand * Command(const string & param0) const override
  {
    IPCMessage newMessage(BaseClass::Message(1));

    RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
    writer.Text(param0);

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    ITestUtility::ICommand * output_implementation = reader.Number<ITestUtility::ICommand *>();
    ASSERT((output_implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (TestUtilityProxy::Command() proxy stub)");
    ITestUtility::ICommand * output = const_cast<TestUtilityProxy &>(*this).CreateProxy<ITestUtility::ICommand>(output_implementation);
    ASSERT((output != nullptr) && "Failed to instantiate ITestUtility::ICommand proxy (TestUtilityProxy::Command() proxy stub)");

    return output;
  }
}; // class TestUtilityProxy

//
// ITestUtility::ICommand interface proxy definitions
//
// Methods:
//  (0) virtual string Execute(const string &) = 0 
//  (1) virtual string Description() const = 0
//  (2) virtual string Signature() const = 0
//  (3) virtual string Name() const = 0

class TestUtilityCommandProxy final : public ProxyStub::UnknownProxyType<ITestUtility::ICommand> {
public:
  TestUtilityCommandProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
      : BaseClass(channel, implementation, otherSideInformed)
  {
  }

  string Execute(const string & param0) override
  {
    IPCMessage newMessage(BaseClass::Message(0));

    RPC::Data::Frame::Writer writer(newMessage->Parameters().Writer());
    writer.Text(param0);

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    string output = reader.Text();

    return output;
  }

  string Description() const override
  {
    IPCMessage newMessage(BaseClass::Message(1));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    string output = reader.Text();

    return output;
  }

  string Signature() const override
  {
    IPCMessage newMessage(BaseClass::Message(2));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    string output = reader.Text();

    return output;
  }

  string Name() const override
  {
    IPCMessage newMessage(BaseClass::Message(3));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    string output = reader.Text();

    return output;
  }
}; // class TestUtilityCommandProxy

//
// ITestUtility::ICommand::IIterator interface proxy definitions
//
// Methods:
//  (0) virtual void Reset() = 0 
//  (1) virtual bool IsValid() const = 0 
//  (2) virtual bool Next() = 0 
//  (3) virtual ITestUtility::ICommand * Command() const = 0 

class TestUtilityCommandIteratorProxy final : public ProxyStub::UnknownProxyType<ITestUtility::ICommand::IIterator> {
public:
  TestUtilityCommandIteratorProxy(Core::ProxyType<Core::IPCChannel> & channel, void * implementation, const bool otherSideInformed)
      : BaseClass(channel, implementation, otherSideInformed)
  {
  }

  void Reset() override
  {
    IPCMessage newMessage(BaseClass::Message(0));

    Invoke(newMessage);
  }

  bool IsValid() const override
  {
    IPCMessage newMessage(BaseClass::Message(1));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    bool output = reader.Boolean();

    return output;
  }

  bool Next() override
  {
    IPCMessage newMessage(BaseClass::Message(2));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    bool output = reader.Boolean();

    return output;
  }

  ITestUtility::ICommand * Command() const override
  {
    IPCMessage newMessage(BaseClass::Message(3));

    Invoke(newMessage);

    RPC::Data::Frame::Reader reader(newMessage->Response().Reader());
    ITestUtility::ICommand * output_implementation = reader.Number<ITestUtility::ICommand *>();
    ASSERT((output_implementation != nullptr) && "Null ITestUtility::ICommand implementation pointer (TestUtilityCommandIteratorProxy::Command() proxy stub)");
    ITestUtility::ICommand * output = const_cast<TestUtilityCommandIteratorProxy &>(*this).CreateProxy<ITestUtility::ICommand>(output_implementation);
    ASSERT((output != nullptr) && "Failed to instantiate ITestUtility::ICommand proxy (TestUtilityCommandIteratorProxy::Command() proxy stub)");

    return output;
  }
}; // class TestUtilityCommandIteratorProxy


// -----------------------------------------------------------------
// REGISTRATION
// -----------------------------------------------------------------

namespace {

typedef ProxyStub::StubType<ITestUtility::ICommand, TestUtilityCommandStubMethods, ProxyStub::UnknownStub> TestUtilityCommandStub;
typedef ProxyStub::StubType<ITestUtility, TestUtilityStubMethods, ProxyStub::UnknownStub> TestUtilityStub;
typedef ProxyStub::StubType<ITestUtility::ICommand::IIterator, TestUtilityCommandIteratorStubMethods, ProxyStub::UnknownStub> TestUtilityCommandIteratorStub;

static class Instantiation {
public:
  Instantiation()
  {
    RPC::Administrator::Instance().Announce<ITestUtility::ICommand, TestUtilityCommandProxy, TestUtilityCommandStub>();
    RPC::Administrator::Instance().Announce<ITestUtility, TestUtilityProxy, TestUtilityStub>();
    RPC::Administrator::Instance().Announce<ITestUtility::ICommand::IIterator, TestUtilityCommandIteratorProxy, TestUtilityCommandIteratorStub>();
  }
} ProxyStubRegistration;

} // namespace

} // namespace WPEFramework

} // namespace ProxyStubs

