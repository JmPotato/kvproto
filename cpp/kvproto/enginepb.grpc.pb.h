// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: enginepb.proto
#ifndef GRPC_enginepb_2eproto__INCLUDED
#define GRPC_enginepb_2eproto__INCLUDED

#include "enginepb.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc
{
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
} // namespace grpc

namespace enginepb
{

class Engine final
{
public:
    static constexpr char const * service_full_name() { return "enginepb.Engine"; }
    class StubInterface
    {
    public:
        virtual ~StubInterface() {}
        std::unique_ptr<::grpc::ClientReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        ApplyCommandBatch(::grpc::ClientContext * context)
        {
            return std::unique_ptr<::grpc::ClientReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                ApplyCommandBatchRaw(context));
        }
        std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        AsyncApplyCommandBatch(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq, void * tag)
        {
            return std::unique_ptr<
                ::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                AsyncApplyCommandBatchRaw(context, cq, tag));
        }
        std::unique_ptr<::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        PrepareAsyncApplyCommandBatch(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq)
        {
            return std::unique_ptr<
                ::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                PrepareAsyncApplyCommandBatchRaw(context, cq));
        }
        std::unique_ptr<::grpc::ClientWriterInterface<::enginepb::SnapshotRequest>> ApplySnapshot(::grpc::ClientContext *    context,
                                                                                                  ::enginepb::SnapshotDone * response)
        {
            return std::unique_ptr<::grpc::ClientWriterInterface<::enginepb::SnapshotRequest>>(ApplySnapshotRaw(context, response));
        }
        std::unique_ptr<::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest>>
        AsyncApplySnapshot(::grpc::ClientContext * context, ::enginepb::SnapshotDone * response, ::grpc::CompletionQueue * cq, void * tag)
        {
            return std::unique_ptr<::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest>>(
                AsyncApplySnapshotRaw(context, response, cq, tag));
        }
        std::unique_ptr<::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest>>
        PrepareAsyncApplySnapshot(::grpc::ClientContext * context, ::enginepb::SnapshotDone * response, ::grpc::CompletionQueue * cq)
        {
            return std::unique_ptr<::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest>>(
                PrepareAsyncApplySnapshotRaw(context, response, cq));
        }

    private:
        virtual ::grpc::ClientReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
        ApplyCommandBatchRaw(::grpc::ClientContext * context)
            = 0;
        virtual ::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
        AsyncApplyCommandBatchRaw(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq, void * tag)
            = 0;
        virtual ::grpc::ClientAsyncReaderWriterInterface<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
        PrepareAsyncApplyCommandBatchRaw(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq)
            = 0;
        virtual ::grpc::ClientWriterInterface<::enginepb::SnapshotRequest> * ApplySnapshotRaw(::grpc::ClientContext *    context,
                                                                                              ::enginepb::SnapshotDone * response)
            = 0;
        virtual ::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest> * AsyncApplySnapshotRaw(::grpc::ClientContext *    context,
                                                                                                        ::enginepb::SnapshotDone * response,
                                                                                                        ::grpc::CompletionQueue *  cq,
                                                                                                        void *                     tag)
            = 0;
        virtual ::grpc::ClientAsyncWriterInterface<::enginepb::SnapshotRequest> *
        PrepareAsyncApplySnapshotRaw(::grpc::ClientContext * context, ::enginepb::SnapshotDone * response, ::grpc::CompletionQueue * cq)
            = 0;
    };
    class Stub final : public StubInterface
    {
    public:
        Stub(const std::shared_ptr<::grpc::ChannelInterface> & channel);
        std::unique_ptr<::grpc::ClientReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        ApplyCommandBatch(::grpc::ClientContext * context)
        {
            return std::unique_ptr<::grpc::ClientReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                ApplyCommandBatchRaw(context));
        }
        std::unique_ptr<::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        AsyncApplyCommandBatch(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq, void * tag)
        {
            return std::unique_ptr<::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                AsyncApplyCommandBatchRaw(context, cq, tag));
        }
        std::unique_ptr<::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>
        PrepareAsyncApplyCommandBatch(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq)
        {
            return std::unique_ptr<::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch>>(
                PrepareAsyncApplyCommandBatchRaw(context, cq));
        }
        std::unique_ptr<::grpc::ClientWriter<::enginepb::SnapshotRequest>> ApplySnapshot(::grpc::ClientContext *    context,
                                                                                         ::enginepb::SnapshotDone * response)
        {
            return std::unique_ptr<::grpc::ClientWriter<::enginepb::SnapshotRequest>>(ApplySnapshotRaw(context, response));
        }
        std::unique_ptr<::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest>>
        AsyncApplySnapshot(::grpc::ClientContext * context, ::enginepb::SnapshotDone * response, ::grpc::CompletionQueue * cq, void * tag)
        {
            return std::unique_ptr<::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest>>(
                AsyncApplySnapshotRaw(context, response, cq, tag));
        }
        std::unique_ptr<::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest>>
        PrepareAsyncApplySnapshot(::grpc::ClientContext * context, ::enginepb::SnapshotDone * response, ::grpc::CompletionQueue * cq)
        {
            return std::unique_ptr<::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest>>(
                PrepareAsyncApplySnapshotRaw(context, response, cq));
        }

    private:
        std::shared_ptr<::grpc::ChannelInterface> channel_;
        ::grpc::ClientReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
        ApplyCommandBatchRaw(::grpc::ClientContext * context) override;
        ::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
        AsyncApplyCommandBatchRaw(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq, void * tag) override;
        ::grpc::ClientAsyncReaderWriter<::enginepb::CommandRequestBatch, ::enginepb::CommandResponseBatch> *
                                                                 PrepareAsyncApplyCommandBatchRaw(::grpc::ClientContext * context, ::grpc::CompletionQueue * cq) override;
        ::grpc::ClientWriter<::enginepb::SnapshotRequest> *      ApplySnapshotRaw(::grpc::ClientContext *    context,
                                                                                  ::enginepb::SnapshotDone * response) override;
        ::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest> * AsyncApplySnapshotRaw(::grpc::ClientContext *    context,
                                                                                       ::enginepb::SnapshotDone * response,
                                                                                       ::grpc::CompletionQueue *  cq,
                                                                                       void *                     tag) override;
        ::grpc::ClientAsyncWriter<::enginepb::SnapshotRequest> * PrepareAsyncApplySnapshotRaw(::grpc::ClientContext *    context,
                                                                                              ::enginepb::SnapshotDone * response,
                                                                                              ::grpc::CompletionQueue *  cq) override;
        const ::grpc::internal::RpcMethod                        rpcmethod_ApplyCommandBatch_;
        const ::grpc::internal::RpcMethod                        rpcmethod_ApplySnapshot_;
    };
    static std::unique_ptr<Stub> NewStub(const std::shared_ptr<::grpc::ChannelInterface> & channel,
                                         const ::grpc::StubOptions &                       options = ::grpc::StubOptions());

    class Service : public ::grpc::Service
    {
    public:
        Service();
        virtual ~Service();
        virtual ::grpc::Status
                               ApplyCommandBatch(::grpc::ServerContext *                                                                         context,
                                                 ::grpc::ServerReaderWriter<::enginepb::CommandResponseBatch, ::enginepb::CommandRequestBatch> * stream);
        virtual ::grpc::Status ApplySnapshot(::grpc::ServerContext *                             context,
                                             ::grpc::ServerReader<::enginepb::SnapshotRequest> * reader,
                                             ::enginepb::SnapshotDone *                          response);
    };
    template <class BaseClass>
    class WithAsyncMethod_ApplyCommandBatch : public BaseClass
    {
    private:
        void BaseClassMustBeDerivedFromService(const Service * service) {}

    public:
        WithAsyncMethod_ApplyCommandBatch() { ::grpc::Service::MarkMethodAsync(0); }
        ~WithAsyncMethod_ApplyCommandBatch() override { BaseClassMustBeDerivedFromService(this); }
        // disable synchronous version of this method
        ::grpc::Status ApplyCommandBatch(
            ::grpc::ServerContext *                                                                         context,
            ::grpc::ServerReaderWriter<::enginepb::CommandResponseBatch, ::enginepb::CommandRequestBatch> * stream) final override
        {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestApplyCommandBatch(
            ::grpc::ServerContext *                                                                              context,
            ::grpc::ServerAsyncReaderWriter<::enginepb::CommandResponseBatch, ::enginepb::CommandRequestBatch> * stream,
            ::grpc::CompletionQueue *                                                                            new_call_cq,
            ::grpc::ServerCompletionQueue *                                                                      notification_cq,
            void *                                                                                               tag)
        {
            ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
        }
    };
    template <class BaseClass>
    class WithAsyncMethod_ApplySnapshot : public BaseClass
    {
    private:
        void BaseClassMustBeDerivedFromService(const Service * service) {}

    public:
        WithAsyncMethod_ApplySnapshot() { ::grpc::Service::MarkMethodAsync(1); }
        ~WithAsyncMethod_ApplySnapshot() override { BaseClassMustBeDerivedFromService(this); }
        // disable synchronous version of this method
        ::grpc::Status ApplySnapshot(::grpc::ServerContext *                             context,
                                     ::grpc::ServerReader<::enginepb::SnapshotRequest> * reader,
                                     ::enginepb::SnapshotDone *                          response) final override
        {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
        void RequestApplySnapshot(::grpc::ServerContext *                                                            context,
                                  ::grpc::ServerAsyncReader<::enginepb::SnapshotDone, ::enginepb::SnapshotRequest> * reader,
                                  ::grpc::CompletionQueue *                                                          new_call_cq,
                                  ::grpc::ServerCompletionQueue *                                                    notification_cq,
                                  void *                                                                             tag)
        {
            ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
        }
    };
    typedef WithAsyncMethod_ApplyCommandBatch<WithAsyncMethod_ApplySnapshot<Service>> AsyncService;
    template <class BaseClass>
    class WithGenericMethod_ApplyCommandBatch : public BaseClass
    {
    private:
        void BaseClassMustBeDerivedFromService(const Service * service) {}

    public:
        WithGenericMethod_ApplyCommandBatch() { ::grpc::Service::MarkMethodGeneric(0); }
        ~WithGenericMethod_ApplyCommandBatch() override { BaseClassMustBeDerivedFromService(this); }
        // disable synchronous version of this method
        ::grpc::Status ApplyCommandBatch(
            ::grpc::ServerContext *                                                                         context,
            ::grpc::ServerReaderWriter<::enginepb::CommandResponseBatch, ::enginepb::CommandRequestBatch> * stream) final override
        {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
    };
    template <class BaseClass>
    class WithGenericMethod_ApplySnapshot : public BaseClass
    {
    private:
        void BaseClassMustBeDerivedFromService(const Service * service) {}

    public:
        WithGenericMethod_ApplySnapshot() { ::grpc::Service::MarkMethodGeneric(1); }
        ~WithGenericMethod_ApplySnapshot() override { BaseClassMustBeDerivedFromService(this); }
        // disable synchronous version of this method
        ::grpc::Status ApplySnapshot(::grpc::ServerContext *                             context,
                                     ::grpc::ServerReader<::enginepb::SnapshotRequest> * reader,
                                     ::enginepb::SnapshotDone *                          response) final override
        {
            abort();
            return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
        }
    };
    typedef Service StreamedUnaryService;
    typedef Service SplitStreamedService;
    typedef Service StreamedService;
};

} // namespace enginepb


#endif // GRPC_enginepb_2eproto__INCLUDED