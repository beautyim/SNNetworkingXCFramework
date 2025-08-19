#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SMAPICApiClient, SMAPICApiClientCompanion, SMAPICApple, SMAPICApple1, SMAPICApple1Companion, SMAPICApple1RegisterFrom, SMAPICApple1RegisterFromCompanion, SMAPICAppleCompanion, SMAPICAppleLoginFrom, SMAPICAppleLoginFromCompanion, SMAPICAppleUserInfo, SMAPICAppleUserInfoCompanion, SMAPICBase64ByteArray, SMAPICBase64ByteArrayCompanion, SMAPICErrorResponse, SMAPICErrorResponseCompanion, SMAPICFeedback, SMAPICFeedbackCompanion, SMAPICFeedbackImagesInner, SMAPICFeedbackImagesInnerCompanion, SMAPICGetMusicCategoryList200Response, SMAPICGetMusicCategoryList200ResponseCompanion, SMAPICGetMusicCategoryList200ResponseData, SMAPICGetMusicCategoryList200ResponseDataCompanion, SMAPICGetMusicCategoryListRequest, SMAPICGetMusicCategoryListRequestCompanion, SMAPICGetMusicDetail200Response, SMAPICGetMusicDetail200ResponseCompanion, SMAPICGetMusicDetailRequest, SMAPICGetMusicDetailRequestCompanion, SMAPICGetMusicHall200Response, SMAPICGetMusicHall200ResponseCompanion, SMAPICGetMusicHall200ResponseData, SMAPICGetMusicHall200ResponseDataCompanion, SMAPICGetMusicHall200ResponseDataHasMore, SMAPICGetMusicHall200ResponseDataHasMoreCompanion, SMAPICGetMusicHallRequest, SMAPICGetMusicHallRequestCompanion, SMAPICGetMusicList200Response, SMAPICGetMusicList200ResponseCompanion, SMAPICGetMusicListRequest, SMAPICGetMusicListRequestCompanion, SMAPICGetMusicMy200Response, SMAPICGetMusicMy200ResponseCompanion, SMAPICGetMusicMy200ResponseData, SMAPICGetMusicMy200ResponseDataCompanion, SMAPICGetMusicMy200ResponseDataMyWorks, SMAPICGetMusicMy200ResponseDataMyWorksCompanion, SMAPICGetMusicMy200ResponseDataUserInfo, SMAPICGetMusicMy200ResponseDataUserInfoCompanion, SMAPICGetMusicMyRequest, SMAPICGetMusicMyRequestCompanion, SMAPICGetMusicOptions200Response, SMAPICGetMusicOptions200ResponseCompanion, SMAPICGetMusicOptions200ResponseData, SMAPICGetMusicOptions200ResponseDataCompanion, SMAPICGetNoticeList200Response, SMAPICGetNoticeList200ResponseCompanion, SMAPICGetNoticeList200ResponseData, SMAPICGetNoticeList200ResponseDataCompanion, SMAPICGetNoticeRequest, SMAPICGetNoticeRequestCompanion, SMAPICGetReportTypes200Response, SMAPICGetReportTypes200ResponseCompanion, SMAPICGetReportTypes200ResponseOneOf, SMAPICGetReportTypes200ResponseOneOf1, SMAPICGetReportTypes200ResponseOneOf1Companion, SMAPICGetReportTypes200ResponseOneOfCompanion, SMAPICGetReportTypes200ResponseOneOfData, SMAPICGetReportTypes200ResponseOneOfDataCompanion, SMAPICGetReportTypes200ResponseOneOfDataTypesInner, SMAPICGetReportTypes200ResponseOneOfDataTypesInnerCompanion, SMAPICGetVipList200Response, SMAPICGetVipList200ResponseCompanion, SMAPICGetVipList200ResponseData, SMAPICGetVipList200ResponseDataCompanion, SMAPICGetVipList200ResponseDataUserVipStatus, SMAPICGetVipList200ResponseDataUserVipStatusCompanion, SMAPICGetVipList200ResponseDataUserVipStatusIsVip, SMAPICGetVipList200ResponseDataUserVipStatusIsVipCompanion, SMAPICGetVipListRequest, SMAPICGetVipListRequestCompanion, SMAPICGoogle, SMAPICGoogle1, SMAPICGoogle1Channel, SMAPICGoogle1ChannelCompanion, SMAPICGoogle1Companion, SMAPICGoogle1RegisterFrom, SMAPICGoogle1RegisterFromCompanion, SMAPICGoogleChannel, SMAPICGoogleChannelCompanion, SMAPICGoogleCompanion, SMAPICGoogleLoginFrom, SMAPICGoogleLoginFromCompanion, SMAPICHTTPClientFactory, SMAPICHttpResponse<T>, SMAPICHttpResponseCompanion, SMAPICKotlinAbstractCoroutineContextElement, SMAPICKotlinAbstractCoroutineContextKey<B, E>, SMAPICKotlinArray<T>, SMAPICKotlinByteArray, SMAPICKotlinByteIterator, SMAPICKotlinCancellationException, SMAPICKotlinEnum<E>, SMAPICKotlinEnumCompanion, SMAPICKotlinException, SMAPICKotlinIllegalStateException, SMAPICKotlinKTypeProjection, SMAPICKotlinKTypeProjectionCompanion, SMAPICKotlinKVariance, SMAPICKotlinNothing, SMAPICKotlinRuntimeException, SMAPICKotlinThrowable, SMAPICKotlinUnit, SMAPICKotlinx_coroutines_coreCoroutineDispatcher, SMAPICKotlinx_coroutines_coreCoroutineDispatcherKey, SMAPICKotlinx_datetimeInstant, SMAPICKotlinx_datetimeInstantCompanion, SMAPICKotlinx_io_coreBuffer, SMAPICKotlinx_serialization_coreSerialKind, SMAPICKotlinx_serialization_coreSerializersModule, SMAPICKotlinx_serialization_jsonClassDiscriminatorMode, SMAPICKotlinx_serialization_jsonJson, SMAPICKotlinx_serialization_jsonJsonConfiguration, SMAPICKotlinx_serialization_jsonJsonDefault, SMAPICKotlinx_serialization_jsonJsonElement, SMAPICKotlinx_serialization_jsonJsonElementCompanion, SMAPICKtor_client_coreHttpClient, SMAPICKtor_client_coreHttpClientCall, SMAPICKtor_client_coreHttpClientCallCompanion, SMAPICKtor_client_coreHttpClientConfig<T>, SMAPICKtor_client_coreHttpClientEngineConfig, SMAPICKtor_client_coreHttpReceivePipeline, SMAPICKtor_client_coreHttpReceivePipelinePhases, SMAPICKtor_client_coreHttpRequestBuilder, SMAPICKtor_client_coreHttpRequestBuilderCompanion, SMAPICKtor_client_coreHttpRequestData, SMAPICKtor_client_coreHttpRequestPipeline, SMAPICKtor_client_coreHttpRequestPipelinePhases, SMAPICKtor_client_coreHttpResponse, SMAPICKtor_client_coreHttpResponseContainer, SMAPICKtor_client_coreHttpResponseData, SMAPICKtor_client_coreHttpResponsePipeline, SMAPICKtor_client_coreHttpResponsePipelinePhases, SMAPICKtor_client_coreHttpSendPipeline, SMAPICKtor_client_coreHttpSendPipelinePhases, SMAPICKtor_client_coreProxyConfig, SMAPICKtor_eventsEventDefinition<T>, SMAPICKtor_eventsEvents, SMAPICKtor_httpContentDisposition, SMAPICKtor_httpContentDispositionCompanion, SMAPICKtor_httpContentType, SMAPICKtor_httpContentTypeCompanion, SMAPICKtor_httpHeaderValueParam, SMAPICKtor_httpHeaderValueWithParameters, SMAPICKtor_httpHeaderValueWithParametersCompanion, SMAPICKtor_httpHeadersBuilder, SMAPICKtor_httpHttpMethod, SMAPICKtor_httpHttpMethodCompanion, SMAPICKtor_httpHttpProtocolVersion, SMAPICKtor_httpHttpProtocolVersionCompanion, SMAPICKtor_httpHttpStatusCode, SMAPICKtor_httpHttpStatusCodeCompanion, SMAPICKtor_httpOutgoingContent, SMAPICKtor_httpPartData, SMAPICKtor_httpURLBuilder, SMAPICKtor_httpURLBuilderCompanion, SMAPICKtor_httpURLProtocol, SMAPICKtor_httpURLProtocolCompanion, SMAPICKtor_httpUrl, SMAPICKtor_httpUrlCompanion, SMAPICKtor_utilsAttributeKey<T>, SMAPICKtor_utilsGMTDate, SMAPICKtor_utilsGMTDateCompanion, SMAPICKtor_utilsMonth, SMAPICKtor_utilsMonthCompanion, SMAPICKtor_utilsPipeline<TSubject, TContext>, SMAPICKtor_utilsPipelinePhase, SMAPICKtor_utilsStringValuesBuilderImpl, SMAPICKtor_utilsTypeInfo, SMAPICKtor_utilsWeekDay, SMAPICKtor_utilsWeekDayCompanion, SMAPICMusicApiTypeGetMusicCategoryList, SMAPICMusicApiTypeGetMusicCategoryListCompanion, SMAPICMusicApiTypeGetMusicCategoryListSerializer, SMAPICMusicDetail, SMAPICMusicDetailCompanion, SMAPICMusicHallItem, SMAPICMusicHallItemCompanion, SMAPICMusicHallItemIsLike, SMAPICMusicHallItemIsLikeCompanion, SMAPICMusicListItem, SMAPICMusicListItemCompanion, SMAPICMusicOption, SMAPICMusicOptionCompanion, SMAPICNoticeListItem, SMAPICNoticeListItemChatType, SMAPICNoticeListItemChatTypeCompanion, SMAPICNoticeListItemCompanion, SMAPICNoticeListItemMessageType, SMAPICNoticeListItemMessageTypeCompanion, SMAPICNoticeListItemSubMessageType, SMAPICNoticeListItemSubMessageTypeCompanion, SMAPICOctetByteArray, SMAPICOctetByteArrayCompanion, SMAPICPartConfig<T>, SMAPICPostAppClose200Response, SMAPICPostAppClose200ResponseCompanion, SMAPICPostAppInit200Response, SMAPICPostAppInit200ResponseCompanion, SMAPICPostAppInit200ResponseData, SMAPICPostAppInit200ResponseDataCompanion, SMAPICPostAppInit200ResponseDataUserInfo, SMAPICPostAppInit200ResponseDataUserInfoCompanion, SMAPICPostAppOpen200Response, SMAPICPostAppOpen200ResponseCompanion, SMAPICPostAppleCancel200Response, SMAPICPostAppleCancel200ResponseCompanion, SMAPICPostAppleCancelRequest, SMAPICPostAppleCancelRequestCompanion, SMAPICPostAppleCreate200Response, SMAPICPostAppleCreate200ResponseCompanion, SMAPICPostAppleCreate200ResponseData, SMAPICPostAppleCreate200ResponseDataCompanion, SMAPICPostAppleCreate200ResponseDataPayItem, SMAPICPostAppleCreate200ResponseDataPayItemCompanion, SMAPICPostAppleCreateRequest, SMAPICPostAppleCreateRequestCompanion, SMAPICPostAppleCreateRequestProductType, SMAPICPostAppleCreateRequestProductTypeCompanion, SMAPICPostAppleNotice200Response, SMAPICPostAppleNotice200ResponseCompanion, SMAPICPostAppleNoticeRequest, SMAPICPostAppleNoticeRequestCompanion, SMAPICPostAppleNoticeRequestEnvironment, SMAPICPostAppleNoticeRequestEnvironmentCompanion, SMAPICPostAppleNoticeRequestNotificationType, SMAPICPostAppleNoticeRequestNotificationTypeCompanion, SMAPICPostAppleVerify200Response, SMAPICPostAppleVerify200ResponseCompanion, SMAPICPostAppleVerify200ResponseData, SMAPICPostAppleVerify200ResponseDataAccountInfo, SMAPICPostAppleVerify200ResponseDataAccountInfoCompanion, SMAPICPostAppleVerify200ResponseDataCompanion, SMAPICPostAppleVerify200ResponseDataUserInfo, SMAPICPostAppleVerify200ResponseDataUserInfoCompanion, SMAPICPostAppleVerifyRequest, SMAPICPostAppleVerifyRequestCompanion, SMAPICPostAppleVerifyRequestProductType, SMAPICPostAppleVerifyRequestProductTypeCompanion, SMAPICPostEmailResetPasswordRequest, SMAPICPostEmailResetPasswordRequestCompanion, SMAPICPostEmailSendCode200Response, SMAPICPostEmailSendCode200ResponseCompanion, SMAPICPostEmailSendCodeRequest, SMAPICPostEmailSendCodeRequestCompanion, SMAPICPostEmailSendCodeRequestType, SMAPICPostEmailSendCodeRequestTypeCompanion, SMAPICPostEmailVerifyCode200Response, SMAPICPostEmailVerifyCode200ResponseCompanion, SMAPICPostEmailVerifyCodeRequest, SMAPICPostEmailVerifyCodeRequestCompanion, SMAPICPostEmailVerifyCodeRequestFromType, SMAPICPostEmailVerifyCodeRequestFromTypeCompanion, SMAPICPostFeedbackSubmit200Response, SMAPICPostFeedbackSubmit200ResponseCompanion, SMAPICPostFeedbackSubmitRequest, SMAPICPostFeedbackSubmitRequestCompanion, SMAPICPostFeedbackSubmitRequestPhotosInner, SMAPICPostFeedbackSubmitRequestPhotosInnerCompanion, SMAPICPostGoogleVerify200Response, SMAPICPostGoogleVerify200ResponseCompanion, SMAPICPostGoogleVerify200ResponseOneOf, SMAPICPostGoogleVerify200ResponseOneOf1, SMAPICPostGoogleVerify200ResponseOneOf1Companion, SMAPICPostGoogleVerify200ResponseOneOfCompanion, SMAPICPostGoogleVerify200ResponseOneOfData, SMAPICPostGoogleVerify200ResponseOneOfDataCompanion, SMAPICPostGoogleVerifyRequest, SMAPICPostGoogleVerifyRequestChannel, SMAPICPostGoogleVerifyRequestChannelCompanion, SMAPICPostGoogleVerifyRequestCompanion, SMAPICPostLoginCompleteProfile200Response, SMAPICPostLoginCompleteProfile200ResponseCompanion, SMAPICPostLoginCompleteProfile200ResponseData, SMAPICPostLoginCompleteProfile200ResponseDataCompanion, SMAPICPostLoginCompleteProfileRequest, SMAPICPostLoginCompleteProfileRequestCompanion, SMAPICPostLoginHandle200Response, SMAPICPostLoginHandle200ResponseCompanion, SMAPICPostLoginHandle200ResponseOneOf, SMAPICPostLoginHandle200ResponseOneOf1, SMAPICPostLoginHandle200ResponseOneOf1Companion, SMAPICPostLoginHandle200ResponseOneOfCompanion, SMAPICPostLoginHandle200ResponseOneOfData, SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo, SMAPICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion, SMAPICPostLoginHandle200ResponseOneOfDataCompanion, SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo, SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion, SMAPICPostLoginHandle200ResponseOneOfDataUserInfo, SMAPICPostLoginHandle200ResponseOneOfDataUserInfoCompanion, SMAPICPostLoginHandleRequest, SMAPICPostLoginHandleRequestChannel, SMAPICPostLoginHandleRequestChannelCompanion, SMAPICPostLoginHandleRequestCompanion, SMAPICPostLoginHandleRequestLoginFrom, SMAPICPostLoginHandleRequestLoginFromCompanion, SMAPICPostLoginHandleRequestOneOf, SMAPICPostLoginHandleRequestOneOfCompanion, SMAPICPostLoginHandleRequestOneOfLoginFrom, SMAPICPostLoginHandleRequestOneOfLoginFromCompanion, SMAPICPostLoginRegister200Response, SMAPICPostLoginRegister200ResponseCompanion, SMAPICPostLoginRegister200ResponseOneOf, SMAPICPostLoginRegister200ResponseOneOf1, SMAPICPostLoginRegister200ResponseOneOf1Companion, SMAPICPostLoginRegister200ResponseOneOfCompanion, SMAPICPostLoginRegister200ResponseOneOfData, SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo, SMAPICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion, SMAPICPostLoginRegister200ResponseOneOfDataCompanion, SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo, SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion, SMAPICPostLoginRegister200ResponseOneOfDataUserInfo, SMAPICPostLoginRegister200ResponseOneOfDataUserInfoCompanion, SMAPICPostLoginRegisterRequest, SMAPICPostLoginRegisterRequestChannel, SMAPICPostLoginRegisterRequestChannelCompanion, SMAPICPostLoginRegisterRequestCompanion, SMAPICPostLoginRegisterRequestOneOf, SMAPICPostLoginRegisterRequestOneOfCompanion, SMAPICPostLoginRegisterRequestOneOfRegisterFrom, SMAPICPostLoginRegisterRequestOneOfRegisterFromCompanion, SMAPICPostLoginRegisterRequestRegisterFrom, SMAPICPostLoginRegisterRequestRegisterFromCompanion, SMAPICPostMusicCreate200Response, SMAPICPostMusicCreate200ResponseCompanion, SMAPICPostMusicCreate200ResponseData, SMAPICPostMusicCreate200ResponseDataCompanion, SMAPICPostMusicCreate200ResponseDataMockData, SMAPICPostMusicCreate200ResponseDataMockDataCompanion, SMAPICPostMusicCreateRequest, SMAPICPostMusicCreateRequestCompanion, SMAPICPostMusicDelete200Response, SMAPICPostMusicDelete200ResponseCompanion, SMAPICPostMusicDelete200ResponseOneOf, SMAPICPostMusicDelete200ResponseOneOf1, SMAPICPostMusicDelete200ResponseOneOf1Companion, SMAPICPostMusicDelete200ResponseOneOfCompanion, SMAPICPostMusicDelete200ResponseOneOfData, SMAPICPostMusicDelete200ResponseOneOfDataCompanion, SMAPICPostMusicDownload200Response, SMAPICPostMusicDownload200ResponseCompanion, SMAPICPostMusicDownload200ResponseData, SMAPICPostMusicDownload200ResponseDataCompanion, SMAPICPostMusicLike200Response, SMAPICPostMusicLike200ResponseCompanion, SMAPICPostMusicLike200ResponseData, SMAPICPostMusicLike200ResponseDataCompanion, SMAPICPostMusicStatus200Response, SMAPICPostMusicStatus200ResponseCompanion, SMAPICPostMusicStatus200ResponseOneOf, SMAPICPostMusicStatus200ResponseOneOf1, SMAPICPostMusicStatus200ResponseOneOf1Companion, SMAPICPostMusicStatus200ResponseOneOfCompanion, SMAPICPostMusicStatus200ResponseOneOfData, SMAPICPostMusicStatus200ResponseOneOfDataCompanion, SMAPICPostMusicStatus200ResponseOneOfDataStatus, SMAPICPostMusicStatus200ResponseOneOfDataStatusCompanion, SMAPICPostMusicStatusRequest, SMAPICPostMusicStatusRequestCompanion, SMAPICPostMusicUnlike200Response, SMAPICPostMusicUnlike200ResponseCompanion, SMAPICPostMusicUnlike200ResponseData, SMAPICPostMusicUnlike200ResponseDataCompanion, SMAPICPostReportSubmit200Response, SMAPICPostReportSubmit200ResponseCompanion, SMAPICPostReportSubmit200ResponseData, SMAPICPostReportSubmit200ResponseDataCompanion, SMAPICPostReportSubmitRequest, SMAPICPostReportSubmitRequestCompanion, SMAPICPostReportSubmitRequestType, SMAPICPostReportSubmitRequestTypeCompanion, SMAPICPostReportSubmitRequestTypeSerializer, SMAPICPostUploadCreateMedia200Response, SMAPICPostUploadCreateMedia200ResponseCompanion, SMAPICPostUploadCreateMedia200ResponseData, SMAPICPostUploadCreateMedia200ResponseDataCompanion, SMAPICPostUploadCreateMediaRequest, SMAPICPostUploadCreateMediaRequestCompanion, SMAPICPostUploadCreateMediaRequestMediaType, SMAPICPostUploadCreateMediaRequestMediaTypeCompanion, SMAPICPostUploadPresigned200Response, SMAPICPostUploadPresigned200ResponseCompanion, SMAPICPostUploadPresignedList200Response, SMAPICPostUploadPresignedList200ResponseCompanion, SMAPICPostUploadPresignedList200ResponseUploadPresignedListData, SMAPICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion, SMAPICPostUploadPresignedRequest, SMAPICPostUploadPresignedRequestCompanion, SMAPICPostUploadPresignedRequestFlag, SMAPICPostUploadPresignedRequestFlagCompanion, SMAPICPostUploadPresignedRequestOneOf, SMAPICPostUploadPresignedRequestOneOf1, SMAPICPostUploadPresignedRequestOneOf1Companion, SMAPICPostUploadPresignedRequestOneOf1ListInner, SMAPICPostUploadPresignedRequestOneOf1ListInnerCompanion, SMAPICPostUploadPresignedRequestOneOfCompanion, SMAPICPostUploadPresignedRequestOneOfFlag, SMAPICPostUploadPresignedRequestOneOfFlagCompanion, SMAPICPostUploadPresignedRequestOneOfType, SMAPICPostUploadPresignedRequestOneOfTypeCompanion, SMAPICPostUploadPresignedRequestType, SMAPICPostUploadPresignedRequestTypeCompanion, SMAPICPostUploadPresignedRequestTypeSerializer, SMAPICPostUploadSuccess200Response, SMAPICPostUploadSuccess200ResponseCompanion, SMAPICPostUploadSuccess200ResponseOneOf, SMAPICPostUploadSuccess200ResponseOneOf1, SMAPICPostUploadSuccess200ResponseOneOf1Companion, SMAPICPostUploadSuccess200ResponseOneOfCompanion, SMAPICPostUploadSuccessRequest, SMAPICPostUploadSuccessRequestCompanion, SMAPICPostVipSubmit200Response, SMAPICPostVipSubmit200ResponseCompanion, SMAPICPostVipSubmit200ResponseOneOf, SMAPICPostVipSubmit200ResponseOneOf1, SMAPICPostVipSubmit200ResponseOneOf1Companion, SMAPICPostVipSubmit200ResponseOneOfCompanion, SMAPICPostVipSubmit200ResponseOneOfData, SMAPICPostVipSubmit200ResponseOneOfDataCompanion, SMAPICPostVipSubmit200ResponseOneOfDataUserInfo, SMAPICPostVipSubmit200ResponseOneOfDataUserInfoCompanion, SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip, SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion, SMAPICPostVipSubmitRequest, SMAPICPostVipSubmitRequestCompanion, SMAPICRequestConfig<T>, SMAPICRequestMethod, SMAPICUploadPresignedData, SMAPICUploadPresignedDataCompanion, SMAPICUploadPresignedDataCoverPresignedPost, SMAPICUploadPresignedDataCoverPresignedPostCompanion, SMAPICUploadPresignedDataCoverPresignedPostEnctype, SMAPICUploadPresignedDataCoverPresignedPostEnctypeCompanion, SMAPICUploadPresignedDataCoverPresignedPostMethod, SMAPICUploadPresignedDataCoverPresignedPostMethodCompanion, SMAPICUploadPresignedDataDir, SMAPICUploadPresignedDataDirCompanion, SMAPICUploadPresignedDataIsUpload, SMAPICUploadPresignedDataIsUploadCompanion, SMAPICUploadPresignedDataPresignedPost, SMAPICUploadPresignedDataPresignedPostCompanion, SMAPICUploadPresignedDataPresignedPostEnctype, SMAPICUploadPresignedDataPresignedPostEnctypeCompanion, SMAPICUploadPresignedDataPresignedPostFields, SMAPICUploadPresignedDataPresignedPostFieldsCompanion, SMAPICUploadPresignedDataPresignedPostMethod, SMAPICUploadPresignedDataPresignedPostMethodCompanion, SMAPICUserInfo, SMAPICUserInfoCompanion, SMAPICVIPApiChannelGetVipList, SMAPICVIPApiChannelGetVipListCompanion, SMAPICVipPackage, SMAPICVipPackageCoinsReward, SMAPICVipPackageCoinsRewardCompanion, SMAPICVipPackageCompanion, SMAPICVipPackagePeriod, SMAPICVipPackagePeriodCompanion, SMAPICVipPackageProductType, SMAPICVipPackageProductTypeCompanion;

@protocol SMAPICAuthentication, SMAPICBodyProvider, SMAPICKotlinAnnotation, SMAPICKotlinAppendable, SMAPICKotlinAutoCloseable, SMAPICKotlinComparable, SMAPICKotlinContinuation, SMAPICKotlinContinuationInterceptor, SMAPICKotlinCoroutineContext, SMAPICKotlinCoroutineContextElement, SMAPICKotlinCoroutineContextKey, SMAPICKotlinFunction, SMAPICKotlinIterator, SMAPICKotlinKAnnotatedElement, SMAPICKotlinKClass, SMAPICKotlinKClassifier, SMAPICKotlinKDeclarationContainer, SMAPICKotlinKType, SMAPICKotlinMapEntry, SMAPICKotlinSequence, SMAPICKotlinSuspendFunction2, SMAPICKotlinx_coroutines_coreChildHandle, SMAPICKotlinx_coroutines_coreChildJob, SMAPICKotlinx_coroutines_coreCoroutineScope, SMAPICKotlinx_coroutines_coreDisposableHandle, SMAPICKotlinx_coroutines_coreJob, SMAPICKotlinx_coroutines_coreParentJob, SMAPICKotlinx_coroutines_coreRunnable, SMAPICKotlinx_coroutines_coreSelectClause, SMAPICKotlinx_coroutines_coreSelectClause0, SMAPICKotlinx_coroutines_coreSelectInstance, SMAPICKotlinx_datetimeDateTimeFormat, SMAPICKotlinx_io_coreRawSink, SMAPICKotlinx_io_coreRawSource, SMAPICKotlinx_io_coreSink, SMAPICKotlinx_io_coreSource, SMAPICKotlinx_serialization_coreCompositeDecoder, SMAPICKotlinx_serialization_coreCompositeEncoder, SMAPICKotlinx_serialization_coreDecoder, SMAPICKotlinx_serialization_coreDeserializationStrategy, SMAPICKotlinx_serialization_coreEncoder, SMAPICKotlinx_serialization_coreKSerializer, SMAPICKotlinx_serialization_coreSerialDescriptor, SMAPICKotlinx_serialization_coreSerialFormat, SMAPICKotlinx_serialization_coreSerializationStrategy, SMAPICKotlinx_serialization_coreSerializersModuleCollector, SMAPICKotlinx_serialization_coreStringFormat, SMAPICKotlinx_serialization_jsonJsonNamingStrategy, SMAPICKtor_client_coreClientPlugin, SMAPICKtor_client_coreHttpClientEngine, SMAPICKtor_client_coreHttpClientEngineCapability, SMAPICKtor_client_coreHttpClientPlugin, SMAPICKtor_client_coreHttpRequest, SMAPICKtor_httpHeaders, SMAPICKtor_httpHttpMessage, SMAPICKtor_httpHttpMessageBuilder, SMAPICKtor_httpParameters, SMAPICKtor_httpParametersBuilder, SMAPICKtor_ioByteReadChannel, SMAPICKtor_ioCloseable, SMAPICKtor_ioJvmSerializable, SMAPICKtor_utilsAttributes, SMAPICKtor_utilsStringValues, SMAPICKtor_utilsStringValuesBuilder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SMAPICBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SMAPICBase (SMAPICBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SMAPICMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SMAPICMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSMAPICKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SMAPICNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SMAPICByte : SMAPICNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SMAPICUByte : SMAPICNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SMAPICShort : SMAPICNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SMAPICUShort : SMAPICNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SMAPICInt : SMAPICNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SMAPICUInt : SMAPICNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SMAPICLong : SMAPICNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SMAPICULong : SMAPICNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SMAPICFloat : SMAPICNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SMAPICDouble : SMAPICNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SMAPICBoolean : SMAPICNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HTTPClientFactory")))
@interface SMAPICHTTPClientFactory : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hTTPClientFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICHTTPClientFactory *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_client_coreHttpClient *)getClient __attribute__((swift_name("getClient()")));
- (void)initializeGetAccessToken:(NSString * _Nullable (^)(void))getAccessToken getUserAgent:(NSString *(^)(void))getUserAgent handleUnauthorized:(void (^)(void))handleUnauthorized isCarryUserAgent:(BOOL)isCarryUserAgent isDebug:(BOOL)isDebug __attribute__((swift_name("initialize(getAccessToken:getUserAgent:handleUnauthorized:isCarryUserAgent:isDebug:)")));
@property BOOL isDebug __attribute__((swift_name("isDebug")));
@property BOOL isInitialized __attribute__((swift_name("isInitialized")));
@end

__attribute__((swift_name("ApiClient")))
@interface SMAPICApiClient : SMAPICBase
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICApiClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)jsonRequestRequestConfig:(SMAPICRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(SMAPICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jsonRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)multipartFormRequestRequestConfig:(SMAPICRequestConfig<id> *)requestConfig body:(NSArray<SMAPICKtor_httpPartData *> * _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(SMAPICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("multipartFormRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)requestRequestConfig:(SMAPICRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(SMAPICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(requestConfig:body:authNames:completionHandler:)")));
- (void)setAccessTokenAccessToken:(NSString *)accessToken __attribute__((swift_name("setAccessToken(accessToken:)")));
- (void)setApiKeyApiKey:(NSString *)apiKey paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKey(apiKey:paramName:)")));
- (void)setApiKeyPrefixApiKeyPrefix:(NSString *)apiKeyPrefix paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKeyPrefix(apiKeyPrefix:paramName:)")));
- (void)setBearerTokenBearerToken:(NSString *)bearerToken __attribute__((swift_name("setBearerToken(bearerToken:)")));
- (void)setPasswordPassword:(NSString *)password __attribute__((swift_name("setPassword(password:)")));
- (void)setUsernameUsername:(NSString *)username __attribute__((swift_name("setUsername(username:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)urlEncodedFormRequestRequestConfig:(SMAPICRequestConfig<id> *)requestConfig body:(id<SMAPICKtor_httpParameters> _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(SMAPICKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("urlEncodedFormRequest(requestConfig:body:authNames:completionHandler:)")));
@end

__attribute__((swift_name("AppApi")))
@interface SMAPICAppApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppCloseWithCompletionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppClose200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppClose(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppInitWithCompletionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppInit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppInit(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppOpenWithCompletionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppOpen200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppOpen(completionHandler:)")));
@end

__attribute__((swift_name("ApplePayApi")))
@interface SMAPICApplePayApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleCancelPostAppleCancelRequest:(SMAPICPostAppleCancelRequest *)postAppleCancelRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppleCancel200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleCancel(postAppleCancelRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleCreatePostAppleCreateRequest:(SMAPICPostAppleCreateRequest *)postAppleCreateRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppleCreate200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleCreate(postAppleCreateRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleNoticePostAppleNoticeRequest:(SMAPICPostAppleNoticeRequest *)postAppleNoticeRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppleNotice200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleNotice(postAppleNoticeRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postAppleVerifyPostAppleVerifyRequest:(SMAPICPostAppleVerifyRequest *)postAppleVerifyRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostAppleVerify200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postAppleVerify(postAppleVerifyRequest:completionHandler:)")));
@end

__attribute__((swift_name("AuthenticationApi")))
@interface SMAPICAuthenticationApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailResetPasswordPostEmailResetPasswordRequest:(SMAPICPostEmailResetPasswordRequest *)postEmailResetPasswordRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostFeedbackSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailResetPassword(postEmailResetPasswordRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailSendCodePostEmailSendCodeRequest:(SMAPICPostEmailSendCodeRequest *)postEmailSendCodeRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostEmailSendCode200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailSendCode(postEmailSendCodeRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEmailVerifyCodePostEmailVerifyCodeRequest:(SMAPICPostEmailVerifyCodeRequest *)postEmailVerifyCodeRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostEmailVerifyCode200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postEmailVerifyCode(postEmailVerifyCodeRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postGoogleVerifyPostGoogleVerifyRequest:(SMAPICPostGoogleVerifyRequest *)postGoogleVerifyRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostGoogleVerify200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postGoogleVerify(postGoogleVerifyRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginCompleteProfilePostLoginCompleteProfileRequest:(SMAPICPostLoginCompleteProfileRequest *)postLoginCompleteProfileRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostLoginCompleteProfile200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginCompleteProfile(postLoginCompleteProfileRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginHandlePostLoginHandleRequest:(SMAPICPostLoginHandleRequest *)postLoginHandleRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostLoginHandle200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginHandle(postLoginHandleRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postLoginRegisterPostLoginRegisterRequest:(SMAPICPostLoginRegisterRequest *)postLoginRegisterRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostLoginRegister200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postLoginRegister(postLoginRegisterRequest:completionHandler:)")));
@end

__attribute__((swift_name("FeedbackApi")))
@interface SMAPICFeedbackApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postFeedbackSubmitPostFeedbackSubmitRequest:(SMAPICPostFeedbackSubmitRequest *)postFeedbackSubmitRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostFeedbackSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postFeedbackSubmit(postFeedbackSubmitRequest:completionHandler:)")));
@end

__attribute__((swift_name("MusicApi")))
@interface SMAPICMusicApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicCategoryListType:(SMAPICMusicApiTypeGetMusicCategoryList *)type page:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicCategoryList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicCategoryList(type:page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicDetailId:(int32_t)id targetUid:(SMAPICInt * _Nullable)targetUid completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicDetail200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicDetail(id:targetUid:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicHallPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicHall200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicHall(page:pageSize:searchText:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicListPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicList(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicMyPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicMy200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicMy(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMusicOptionsWithCompletionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetMusicOptions200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMusicOptions(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNoticePage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetNoticeList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotice(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicCreatePostMusicCreateRequest:(SMAPICPostMusicCreateRequest *)postMusicCreateRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicCreate200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicCreate(postMusicCreateRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicDeletePostMusicStatusRequest:(SMAPICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicDelete200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicDelete(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicDownloadPostMusicStatusRequest:(SMAPICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicDownload200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicDownload(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicLikePostMusicStatusRequest:(SMAPICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicLike200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicLike(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicStatusPostMusicStatusRequest:(SMAPICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicStatus200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicStatus(postMusicStatusRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMusicUnlikePostMusicStatusRequest:(SMAPICPostMusicStatusRequest *)postMusicStatusRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostMusicUnlike200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMusicUnlike(postMusicStatusRequest:completionHandler:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SMAPICKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SMAPICKotlinEnum<E> : SMAPICBase <SMAPICKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/apis/MusicApi.TypeGetMusicCategoryList.Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryList")))
@interface SMAPICMusicApiTypeGetMusicCategoryList : SMAPICKotlinEnum<SMAPICMusicApiTypeGetMusicCategoryList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICMusicApiTypeGetMusicCategoryListCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICMusicApiTypeGetMusicCategoryList *mywork __attribute__((swift_name("mywork")));
@property (class, readonly) SMAPICMusicApiTypeGetMusicCategoryList *mylike __attribute__((swift_name("mylike")));
@property (class, readonly) SMAPICMusicApiTypeGetMusicCategoryList *draft __attribute__((swift_name("draft")));
@property (class, readonly) SMAPICMusicApiTypeGetMusicCategoryList *downloaded __attribute__((swift_name("downloaded")));
+ (SMAPICKotlinArray<SMAPICMusicApiTypeGetMusicCategoryList *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICMusicApiTypeGetMusicCategoryList *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryListCompanion")))
@interface SMAPICMusicApiTypeGetMusicCategoryListCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicApiTypeGetMusicCategoryListCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SMAPICKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SMAPICKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SMAPICKotlinx_serialization_coreKSerializer <SMAPICKotlinx_serialization_coreSerializationStrategy, SMAPICKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicApi.TypeGetMusicCategoryListSerializer")))
@interface SMAPICMusicApiTypeGetMusicCategoryListSerializer : SMAPICBase <SMAPICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicApiTypeGetMusicCategoryListSerializer *shared __attribute__((swift_name("shared")));
- (SMAPICMusicApiTypeGetMusicCategoryList *)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(SMAPICMusicApiTypeGetMusicCategoryList *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("ReportApi")))
@interface SMAPICReportApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getReportTypesWithCompletionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetReportTypes200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getReportTypes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postReportSubmitPostReportSubmitRequest:(SMAPICPostReportSubmitRequest *)postReportSubmitRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostReportSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postReportSubmit(postReportSubmitRequest:completionHandler:)")));
@end

__attribute__((swift_name("UploadApi")))
@interface SMAPICUploadApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadCreateMediaPostUploadCreateMediaRequest:(SMAPICPostUploadCreateMediaRequest *)postUploadCreateMediaRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostUploadCreateMedia200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadCreateMedia(postUploadCreateMediaRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadPresignedPostUploadPresignedRequest:(SMAPICPostUploadPresignedRequest *)postUploadPresignedRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostUploadPresigned200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadPresigned(postUploadPresignedRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadPresignedListPostUploadPresignedRequest:(SMAPICPostUploadPresignedRequest *)postUploadPresignedRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostUploadPresignedList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadPresignedList(postUploadPresignedRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postUploadSuccessPostUploadSuccessRequest:(SMAPICPostUploadSuccessRequest *)postUploadSuccessRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostUploadSuccess200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postUploadSuccess(postUploadSuccessRequest:completionHandler:)")));
@end

__attribute__((swift_name("VIPApi")))
@interface SMAPICVIPApi : SMAPICApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(SMAPICKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(SMAPICKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<SMAPICKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(SMAPICKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(SMAPICKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVipListChannel:(SMAPICVIPApiChannelGetVipList * _Nullable)channel completionHandler:(void (^)(SMAPICHttpResponse<SMAPICGetVipList200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVipList(channel:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postVipSubmitPostVipSubmitRequest:(SMAPICPostVipSubmitRequest *)postVipSubmitRequest completionHandler:(void (^)(SMAPICHttpResponse<SMAPICPostVipSubmit200Response *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postVipSubmit(postVipSubmitRequest:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VIPApi.ChannelGetVipList")))
@interface SMAPICVIPApiChannelGetVipList : SMAPICKotlinEnum<SMAPICVIPApiChannelGetVipList *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICVIPApiChannelGetVipListCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICVIPApiChannelGetVipList *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICVIPApiChannelGetVipList *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICVIPApiChannelGetVipList *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICVIPApiChannelGetVipList *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VIPApi.ChannelGetVipListCompanion")))
@interface SMAPICVIPApiChannelGetVipListCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICVIPApiChannelGetVipListCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Authentication")))
@protocol SMAPICAuthentication
@required
- (void)applyQuery:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiKeyAuth")))
@interface SMAPICApiKeyAuth : SMAPICBase <SMAPICAuthentication>
- (instancetype)initWithLocation:(NSString *)location paramName:(NSString *)paramName __attribute__((swift_name("init(location:paramName:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable apiKeyPrefix __attribute__((swift_name("apiKeyPrefix")));
@property (readonly) NSString *paramName __attribute__((swift_name("paramName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBasicAuth")))
@interface SMAPICHttpBasicAuth : SMAPICBase <SMAPICAuthentication>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBearerAuth")))
@interface SMAPICHttpBearerAuth : SMAPICBase <SMAPICAuthentication>
- (instancetype)initWithScheme:(NSString * _Nullable)scheme __attribute__((swift_name("init(scheme:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable bearerToken __attribute__((swift_name("bearerToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OAuth")))
@interface SMAPICOAuth : SMAPICBase <SMAPICAuthentication>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClient.Companion")))
@interface SMAPICApiClientCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICApiClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@property (readonly) SMAPICKotlinx_serialization_jsonJson *JSON_DEFAULT __attribute__((swift_name("JSON_DEFAULT")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSArray<NSString *> *UNSAFE_HEADERS __attribute__((swift_name("UNSAFE_HEADERS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/infrastructure/Base64ByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray")))
@interface SMAPICBase64ByteArray : SMAPICBase
- (instancetype)initWithValue:(SMAPICKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICBase64ByteArrayCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray.Companion")))
@interface SMAPICBase64ByteArrayCompanion : SMAPICBase <SMAPICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICBase64ByteArrayCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICBase64ByteArray *)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(SMAPICBase64ByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BodyProvider")))
@protocol SMAPICBodyProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(SMAPICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(SMAPICKtor_client_coreHttpResponse *)response type:(SMAPICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end

__attribute__((swift_name("HttpResponse")))
@interface SMAPICHttpResponse<T> : SMAPICBase
- (instancetype)initWithResponse:(SMAPICKtor_client_coreHttpResponse *)response provider:(id<SMAPICBodyProvider>)provider __attribute__((swift_name("init(response:provider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICHttpResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyWithCompletionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyType:(SMAPICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(type:completionHandler:)")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) id<SMAPICBodyProvider> provider __attribute__((swift_name("provider")));
@property (readonly) SMAPICKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpResponseCompanion")))
@interface SMAPICHttpResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICHttpResponseCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MappedBodyProvider")))
@interface SMAPICMappedBodyProvider<S, T> : SMAPICBase <SMAPICBodyProvider>
- (instancetype)initWithProvider:(id<SMAPICBodyProvider>)provider block:(T (^)(S))block __attribute__((swift_name("init(provider:block:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(SMAPICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(SMAPICKtor_client_coreHttpResponse *)response type:(SMAPICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/infrastructure/OctetByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray")))
@interface SMAPICOctetByteArray : SMAPICBase
- (instancetype)initWithValue:(SMAPICKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICOctetByteArrayCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKotlinByteArray *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray.Companion")))
@interface SMAPICOctetByteArrayCompanion : SMAPICBase <SMAPICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICOctetByteArrayCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICOctetByteArray *)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(SMAPICOctetByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartConfig")))
@interface SMAPICPartConfig<T> : SMAPICBase
- (instancetype)initWithHeaders:(SMAPICMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("init(headers:body:)"))) __attribute__((objc_designated_initializer));
- (SMAPICPartConfig<T> *)doCopyHeaders:(SMAPICMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("doCopy(headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) SMAPICMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestConfig")))
@interface SMAPICRequestConfig<T> : SMAPICBase
- (instancetype)initWithMethod:(SMAPICRequestMethod *)method path:(NSString *)path headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers params:(SMAPICMutableDictionary<NSString *, id> *)params query:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("init(method:path:headers:params:query:requiresAuthentication:body:)"))) __attribute__((objc_designated_initializer));
- (SMAPICRequestConfig<T> *)doCopyMethod:(SMAPICRequestMethod *)method path:(NSString *)path headers:(SMAPICMutableDictionary<NSString *, NSString *> *)headers params:(SMAPICMutableDictionary<NSString *, id> *)params query:(SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("doCopy(method:path:headers:params:query:requiresAuthentication:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) SMAPICMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) SMAPICRequestMethod *method __attribute__((swift_name("method")));
@property (readonly) SMAPICMutableDictionary<NSString *, id> *params __attribute__((swift_name("params")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) SMAPICMutableDictionary<NSString *, NSArray<NSString *> *> *query __attribute__((swift_name("query")));
@property (readonly) BOOL requiresAuthentication __attribute__((swift_name("requiresAuthentication")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod")))
@interface SMAPICRequestMethod : SMAPICKotlinEnum<SMAPICRequestMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SMAPICRequestMethod *get __attribute__((swift_name("get")));
@property (class, readonly) SMAPICRequestMethod *delete_ __attribute__((swift_name("delete_")));
@property (class, readonly) SMAPICRequestMethod *head __attribute__((swift_name("head")));
@property (class, readonly) SMAPICRequestMethod *options __attribute__((swift_name("options")));
@property (class, readonly) SMAPICRequestMethod *patch __attribute__((swift_name("patch")));
@property (class, readonly) SMAPICRequestMethod *post __attribute__((swift_name("post")));
@property (class, readonly) SMAPICRequestMethod *put __attribute__((swift_name("put")));
+ (SMAPICKotlinArray<SMAPICRequestMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICRequestMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedBodyProvider")))
@interface SMAPICTypedBodyProvider<T> : SMAPICBase <SMAPICBodyProvider>
- (instancetype)initWithType:(SMAPICKtor_utilsTypeInfo *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(SMAPICKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(SMAPICKtor_client_coreHttpResponse *)response type:(SMAPICKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple")))
@interface SMAPICApple : SMAPICBase
- (instancetype)initWithLoginFrom:(SMAPICAppleLoginFrom *)loginFrom appleUserId:(NSString *)appleUserId userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(loginFrom:appleUserId:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICAppleCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICApple *)doCopyLoginFrom:(SMAPICAppleLoginFrom *)loginFrom appleUserId:(NSString *)appleUserId userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(loginFrom:appleUserId:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICAppleLoginFrom *loginFrom __attribute__((swift_name("loginFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.Companion")))
@interface SMAPICAppleCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICAppleCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.LoginFrom")))
@interface SMAPICAppleLoginFrom : SMAPICKotlinEnum<SMAPICAppleLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICAppleLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICAppleLoginFrom *_6 __attribute__((swift_name("_6")));
+ (SMAPICKotlinArray<SMAPICAppleLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICAppleLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple.LoginFromCompanion")))
@interface SMAPICAppleLoginFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICAppleLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1")))
@interface SMAPICApple1 : SMAPICBase
- (instancetype)initWithAppleUserId:(NSString *)appleUserId registerFrom:(SMAPICApple1RegisterFrom *)registerFrom userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(appleUserId:registerFrom:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICApple1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICApple1 *)doCopyAppleUserId:(NSString *)appleUserId registerFrom:(SMAPICApple1RegisterFrom *)registerFrom userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(appleUserId:registerFrom:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICApple1RegisterFrom *registerFrom __attribute__((swift_name("registerFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.Companion")))
@interface SMAPICApple1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICApple1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.RegisterFrom")))
@interface SMAPICApple1RegisterFrom : SMAPICKotlinEnum<SMAPICApple1RegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICApple1RegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICApple1RegisterFrom *_6 __attribute__((swift_name("_6")));
+ (SMAPICKotlinArray<SMAPICApple1RegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICApple1RegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apple1.RegisterFromCompanion")))
@interface SMAPICApple1RegisterFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICApple1RegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleUserInfo")))
@interface SMAPICAppleUserInfo : SMAPICBase
- (instancetype)initWithIdentityToken:(NSString *)identityToken appleUserId:(NSString *)appleUserId __attribute__((swift_name("init(identityToken:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICAppleUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICAppleUserInfo *)doCopyIdentityToken:(NSString *)identityToken appleUserId:(NSString *)appleUserId __attribute__((swift_name("doCopy(identityToken:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="openId")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identityToken")
*/
@property (readonly) NSString *identityToken __attribute__((swift_name("identityToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppleUserInfo.Companion")))
@interface SMAPICAppleUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICAppleUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse")))
@interface SMAPICErrorResponse : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICErrorResponse *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponse.Companion")))
@interface SMAPICErrorResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback")))
@interface SMAPICFeedback : SMAPICBase
- (instancetype)initWithId:(SMAPICInt * _Nullable)id uid:(SMAPICInt * _Nullable)uid url:(NSString * _Nullable)url images:(NSArray<SMAPICFeedbackImagesInner *> * _Nullable)images checker:(NSString * _Nullable)checker content:(NSString * _Nullable)content addTime:(SMAPICKotlinx_datetimeInstant * _Nullable)addTime statusText:(NSString * _Nullable)statusText checkStatus:(SMAPICInt * _Nullable)checkStatus checkedTime:(SMAPICKotlinx_datetimeInstant * _Nullable)checkedTime refuseReason:(NSString * _Nullable)refuseReason __attribute__((swift_name("init(id:uid:url:images:checker:content:addTime:statusText:checkStatus:checkedTime:refuseReason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICFeedbackCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICFeedback *)doCopyId:(SMAPICInt * _Nullable)id uid:(SMAPICInt * _Nullable)uid url:(NSString * _Nullable)url images:(NSArray<SMAPICFeedbackImagesInner *> * _Nullable)images checker:(NSString * _Nullable)checker content:(NSString * _Nullable)content addTime:(SMAPICKotlinx_datetimeInstant * _Nullable)addTime statusText:(NSString * _Nullable)statusText checkStatus:(SMAPICInt * _Nullable)checkStatus checkedTime:(SMAPICKotlinx_datetimeInstant * _Nullable)checkedTime refuseReason:(NSString * _Nullable)refuseReason __attribute__((swift_name("doCopy(id:uid:url:images:checker:content:addTime:statusText:checkStatus:checkedTime:refuseReason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="add_time")
*/
@property (readonly) SMAPICKotlinx_datetimeInstant * _Nullable addTime __attribute__((swift_name("addTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="check_status")
*/
@property (readonly) SMAPICInt * _Nullable checkStatus __attribute__((swift_name("checkStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checked_time")
*/
@property (readonly) SMAPICKotlinx_datetimeInstant * _Nullable checkedTime __attribute__((swift_name("checkedTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checker")
*/
@property (readonly) NSString * _Nullable checker __attribute__((swift_name("checker")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) SMAPICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="images")
*/
@property (readonly) NSArray<SMAPICFeedbackImagesInner *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refuse_reason")
*/
@property (readonly) NSString * _Nullable refuseReason __attribute__((swift_name("refuseReason")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_text")
*/
@property (readonly) NSString * _Nullable statusText __attribute__((swift_name("statusText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feedback.Companion")))
@interface SMAPICFeedbackCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICFeedbackCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackImagesInner")))
@interface SMAPICFeedbackImagesInner : SMAPICBase
- (instancetype)initWithUrl:(NSString * _Nullable)url width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICFeedbackImagesInnerCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICFeedbackImagesInner *)doCopyUrl:(NSString * _Nullable)url width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height __attribute__((swift_name("doCopy(url:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) SMAPICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) SMAPICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeedbackImagesInner.Companion")))
@interface SMAPICFeedbackImagesInnerCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICFeedbackImagesInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200Response")))
@interface SMAPICGetMusicCategoryList200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicCategoryList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicCategoryList200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetMusicCategoryList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200Response.Companion")))
@interface SMAPICGetMusicCategoryList200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicCategoryList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200ResponseData")))
@interface SMAPICGetMusicCategoryList200ResponseData : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICMusicListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicCategoryList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicCategoryList200ResponseData *)doCopyList:(NSArray<SMAPICMusicListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) SMAPICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<SMAPICMusicListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryList200ResponseData.Companion")))
@interface SMAPICGetMusicCategoryList200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicCategoryList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryListRequest")))
@interface SMAPICGetMusicCategoryListRequest : SMAPICBase
- (instancetype)initWithType:(SMAPICMusicApiTypeGetMusicCategoryList *)type page:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("init(type:page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicCategoryListRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicCategoryListRequest *)doCopyType:(SMAPICMusicApiTypeGetMusicCategoryList *)type page:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(type:page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) SMAPICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@property (readonly) SMAPICMusicApiTypeGetMusicCategoryList *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicCategoryListRequest.Companion")))
@interface SMAPICGetMusicCategoryListRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicCategoryListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetail200Response")))
@interface SMAPICGetMusicDetail200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICMusicDetail * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicDetail200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicDetail200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICMusicDetail * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICMusicDetail * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetail200Response.Companion")))
@interface SMAPICGetMusicDetail200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicDetail200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetailRequest")))
@interface SMAPICGetMusicDetailRequest : SMAPICBase
- (instancetype)initWithId:(int32_t)id targetUID:(SMAPICInt * _Nullable)targetUID __attribute__((swift_name("init(id:targetUID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicDetailRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicDetailRequest *)doCopyId:(int32_t)id targetUID:(SMAPICInt * _Nullable)targetUID __attribute__((swift_name("doCopy(id:targetUID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_uid")
*/
@property (readonly) SMAPICInt * _Nullable targetUID __attribute__((swift_name("targetUID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicDetailRequest.Companion")))
@interface SMAPICGetMusicDetailRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicDetailRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200Response")))
@interface SMAPICGetMusicHall200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicHall200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicHall200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicHall200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicHall200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetMusicHall200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200Response.Companion")))
@interface SMAPICGetMusicHall200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicHall200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData")))
@interface SMAPICGetMusicHall200ResponseData : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICMusicHallItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean userInfos:(NSDictionary<NSString *, SMAPICUserInfo *> * _Nullable)userInfos __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:userInfos:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicHall200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicHall200ResponseData *)doCopyList:(NSArray<SMAPICMusicHallItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean userInfos:(NSDictionary<NSString *, SMAPICUserInfo *> * _Nullable)userInfos __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:userInfos:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) SMAPICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<SMAPICMusicHallItem *> * _Nullable list __attribute__((swift_name("list")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_infos")
*/
@property (readonly) NSDictionary<NSString *, SMAPICUserInfo *> * _Nullable userInfos __attribute__((swift_name("userInfos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.Companion")))
@interface SMAPICGetMusicHall200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicHall200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.HasMore")))
@interface SMAPICGetMusicHall200ResponseDataHasMore : SMAPICKotlinEnum<SMAPICGetMusicHall200ResponseDataHasMore *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGetMusicHall200ResponseDataHasMoreCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGetMusicHall200ResponseDataHasMore *no __attribute__((swift_name("no")));
@property (class, readonly) SMAPICGetMusicHall200ResponseDataHasMore *yes __attribute__((swift_name("yes")));
+ (SMAPICKotlinArray<SMAPICGetMusicHall200ResponseDataHasMore *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGetMusicHall200ResponseDataHasMore *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHall200ResponseData.HasMoreCompanion")))
@interface SMAPICGetMusicHall200ResponseDataHasMoreCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicHall200ResponseDataHasMoreCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHallRequest")))
@interface SMAPICGetMusicHallRequest : SMAPICBase
- (instancetype)initWithPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText __attribute__((swift_name("init(page:pageSize:searchText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicHallRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicHallRequest *)doCopyPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize searchText:(NSString * _Nullable)searchText __attribute__((swift_name("doCopy(page:pageSize:searchText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) SMAPICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="search_text")
*/
@property (readonly) NSString * _Nullable searchText __attribute__((swift_name("searchText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicHallRequest.Companion")))
@interface SMAPICGetMusicHallRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicHallRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicList200Response")))
@interface SMAPICGetMusicList200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicList200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicCategoryList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetMusicCategoryList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicList200Response.Companion")))
@interface SMAPICGetMusicList200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicListRequest")))
@interface SMAPICGetMusicListRequest : SMAPICBase
- (instancetype)initWithPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicListRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicListRequest *)doCopyPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) SMAPICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicListRequest.Companion")))
@interface SMAPICGetMusicListRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200Response")))
@interface SMAPICGetMusicMy200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicMy200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicMy200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicMy200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicMy200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetMusicMy200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200Response.Companion")))
@interface SMAPICGetMusicMy200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicMy200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseData")))
@interface SMAPICGetMusicMy200ResponseData : SMAPICBase
- (instancetype)initWithMyWorks:(SMAPICGetMusicMy200ResponseDataMyWorks * _Nullable)myWorks userInfo:(SMAPICGetMusicMy200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(myWorks:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicMy200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicMy200ResponseData *)doCopyMyWorks:(SMAPICGetMusicMy200ResponseDataMyWorks * _Nullable)myWorks userInfo:(SMAPICGetMusicMy200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(myWorks:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="my_works")
*/
@property (readonly) SMAPICGetMusicMy200ResponseDataMyWorks * _Nullable myWorks __attribute__((swift_name("myWorks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICGetMusicMy200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseData.Companion")))
@interface SMAPICGetMusicMy200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicMy200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataMyWorks")))
@interface SMAPICGetMusicMy200ResponseDataMyWorks : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICMusicListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicMy200ResponseDataMyWorksCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicMy200ResponseDataMyWorks *)doCopyList:(NSArray<SMAPICMusicListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) SMAPICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<SMAPICMusicListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataMyWorks.Companion")))
@interface SMAPICGetMusicMy200ResponseDataMyWorksCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicMy200ResponseDataMyWorksCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataUserInfo")))
@interface SMAPICGetMusicMy200ResponseDataUserInfo : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(SMAPICInt * _Nullable)isVip isVipBool:(BOOL)isVipBool credits:(SMAPICInt * _Nullable)credits nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:avatar:isVip:isVipBool:credits:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicMy200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicMy200ResponseDataUserInfo *)doCopyUid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(SMAPICInt * _Nullable)isVip isVipBool:(BOOL)isVipBool credits:(SMAPICInt * _Nullable)credits nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:avatar:isVip:isVipBool:credits:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="credits")
*/
@property (readonly) SMAPICInt * _Nullable credits __attribute__((swift_name("credits")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) SMAPICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isVipBool __attribute__((swift_name("isVipBool")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMy200ResponseDataUserInfo.Companion")))
@interface SMAPICGetMusicMy200ResponseDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicMy200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMyRequest")))
@interface SMAPICGetMusicMyRequest : SMAPICBase
- (instancetype)initWithPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicMyRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicMyRequest *)doCopyPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) SMAPICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicMyRequest.Companion")))
@interface SMAPICGetMusicMyRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicMyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200Response")))
@interface SMAPICGetMusicOptions200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicOptions200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicOptions200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicOptions200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetMusicOptions200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetMusicOptions200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200Response.Companion")))
@interface SMAPICGetMusicOptions200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicOptions200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200ResponseData")))
@interface SMAPICGetMusicOptions200ResponseData : SMAPICBase
- (instancetype)initWithMoods:(NSArray<SMAPICMusicOption *> * _Nullable)moods styles:(NSArray<SMAPICMusicOption *> * _Nullable)styles languages:(NSArray<SMAPICMusicOption *> * _Nullable)languages instruments:(NSArray<SMAPICMusicOption *> * _Nullable)instruments __attribute__((swift_name("init(moods:styles:languages:instruments:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetMusicOptions200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetMusicOptions200ResponseData *)doCopyMoods:(NSArray<SMAPICMusicOption *> * _Nullable)moods styles:(NSArray<SMAPICMusicOption *> * _Nullable)styles languages:(NSArray<SMAPICMusicOption *> * _Nullable)languages instruments:(NSArray<SMAPICMusicOption *> * _Nullable)instruments __attribute__((swift_name("doCopy(moods:styles:languages:instruments:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instruments")
*/
@property (readonly) NSArray<SMAPICMusicOption *> * _Nullable instruments __attribute__((swift_name("instruments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property (readonly) NSArray<SMAPICMusicOption *> * _Nullable languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="moods")
*/
@property (readonly) NSArray<SMAPICMusicOption *> * _Nullable moods __attribute__((swift_name("moods")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="styles")
*/
@property (readonly) NSArray<SMAPICMusicOption *> * _Nullable styles __attribute__((swift_name("styles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetMusicOptions200ResponseData.Companion")))
@interface SMAPICGetMusicOptions200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetMusicOptions200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200Response")))
@interface SMAPICGetNoticeList200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICGetNoticeList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetNoticeList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetNoticeList200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICGetNoticeList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetNoticeList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200Response.Companion")))
@interface SMAPICGetNoticeList200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetNoticeList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200ResponseData")))
@interface SMAPICGetNoticeList200ResponseData : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICNoticeListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("init(list:hasMore:hasMoreBoolean:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetNoticeList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetNoticeList200ResponseData *)doCopyList:(NSArray<SMAPICNoticeListItem *> * _Nullable)list hasMore:(SMAPICInt * _Nullable)hasMore hasMoreBoolean:(BOOL)hasMoreBoolean __attribute__((swift_name("doCopy(list:hasMore:hasMoreBoolean:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_more")
*/
@property (readonly) SMAPICInt * _Nullable hasMore __attribute__((swift_name("hasMore")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL hasMoreBoolean __attribute__((swift_name("hasMoreBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<SMAPICNoticeListItem *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeList200ResponseData.Companion")))
@interface SMAPICGetNoticeList200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetNoticeList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeRequest")))
@interface SMAPICGetNoticeRequest : SMAPICBase
- (instancetype)initWithPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("init(page:pageSize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetNoticeRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetNoticeRequest *)doCopyPage:(SMAPICInt * _Nullable)page pageSize:(SMAPICInt * _Nullable)pageSize __attribute__((swift_name("doCopy(page:pageSize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICInt * _Nullable page __attribute__((swift_name("page")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="page_size")
*/
@property (readonly) SMAPICInt * _Nullable pageSize __attribute__((swift_name("pageSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetNoticeRequest.Companion")))
@interface SMAPICGetNoticeRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetNoticeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200Response")))
@interface SMAPICGetReportTypes200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetReportTypes200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetReportTypes200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetReportTypes200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetReportTypes200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetReportTypes200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200Response.Companion")))
@interface SMAPICGetReportTypes200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetReportTypes200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOf")))
@interface SMAPICGetReportTypes200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetReportTypes200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetReportTypes200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetReportTypes200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetReportTypes200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetReportTypes200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOf.Companion")))
@interface SMAPICGetReportTypes200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetReportTypes200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOf1")))
@interface SMAPICGetReportTypes200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetReportTypes200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICGetReportTypes200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOf1.Companion")))
@interface SMAPICGetReportTypes200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetReportTypes200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfData")))
@interface SMAPICGetReportTypes200ResponseOneOfData : SMAPICBase
- (instancetype)initWithTypes:(NSArray<SMAPICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable)types __attribute__((swift_name("init(types:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetReportTypes200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetReportTypes200ResponseOneOfData *)doCopyTypes:(NSArray<SMAPICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable)types __attribute__((swift_name("doCopy(types:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="types")
*/
@property (readonly) NSArray<SMAPICGetReportTypes200ResponseOneOfDataTypesInner *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfData.Companion")))
@interface SMAPICGetReportTypes200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetReportTypes200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfDataTypesInner")))
@interface SMAPICGetReportTypes200ResponseOneOfDataTypesInner : SMAPICBase
- (instancetype)initWithId:(SMAPICInt * _Nullable)id type:(NSString * _Nullable)type __attribute__((swift_name("init(id:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetReportTypes200ResponseOneOfDataTypesInnerCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetReportTypes200ResponseOneOfDataTypesInner *)doCopyId:(SMAPICInt * _Nullable)id type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(id:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) SMAPICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetReportTypes200ResponseOneOfDataTypesInner.Companion")))
@interface SMAPICGetReportTypes200ResponseOneOfDataTypesInnerCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetReportTypes200ResponseOneOfDataTypesInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200Response")))
@interface SMAPICGetVipList200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetVipList200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetVipList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetVipList200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICGetVipList200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICGetVipList200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200Response.Companion")))
@interface SMAPICGetVipList200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetVipList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseData")))
@interface SMAPICGetVipList200ResponseData : SMAPICBase
- (instancetype)initWithVipList:(NSArray<SMAPICVipPackage *> * _Nullable)vipList userVipStatus:(SMAPICGetVipList200ResponseDataUserVipStatus * _Nullable)userVipStatus __attribute__((swift_name("init(vipList:userVipStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetVipList200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetVipList200ResponseData *)doCopyVipList:(NSArray<SMAPICVipPackage *> * _Nullable)vipList userVipStatus:(SMAPICGetVipList200ResponseDataUserVipStatus * _Nullable)userVipStatus __attribute__((swift_name("doCopy(vipList:userVipStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_vip_status")
*/
@property (readonly) SMAPICGetVipList200ResponseDataUserVipStatus * _Nullable userVipStatus __attribute__((swift_name("userVipStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_list")
*/
@property (readonly) NSArray<SMAPICVipPackage *> * _Nullable vipList __attribute__((swift_name("vipList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseData.Companion")))
@interface SMAPICGetVipList200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetVipList200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus")))
@interface SMAPICGetVipList200ResponseDataUserVipStatus : SMAPICBase
- (instancetype)initWithIsVip:(SMAPICGetVipList200ResponseDataUserVipStatusIsVip * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp remainingDays:(SMAPICInt * _Nullable)remainingDays __attribute__((swift_name("init(isVip:vipExp:remainingDays:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetVipList200ResponseDataUserVipStatusCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetVipList200ResponseDataUserVipStatus *)doCopyIsVip:(SMAPICGetVipList200ResponseDataUserVipStatusIsVip * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp remainingDays:(SMAPICInt * _Nullable)remainingDays __attribute__((swift_name("doCopy(isVip:vipExp:remainingDays:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) SMAPICGetVipList200ResponseDataUserVipStatusIsVip * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="remaining_days")
*/
@property (readonly) SMAPICInt * _Nullable remainingDays __attribute__((swift_name("remainingDays")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) NSString * _Nullable vipExp __attribute__((swift_name("vipExp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus.Companion")))
@interface SMAPICGetVipList200ResponseDataUserVipStatusCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetVipList200ResponseDataUserVipStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus.IsVip")))
@interface SMAPICGetVipList200ResponseDataUserVipStatusIsVip : SMAPICKotlinEnum<SMAPICGetVipList200ResponseDataUserVipStatusIsVip *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGetVipList200ResponseDataUserVipStatusIsVipCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGetVipList200ResponseDataUserVipStatusIsVip *no __attribute__((swift_name("no")));
@property (class, readonly) SMAPICGetVipList200ResponseDataUserVipStatusIsVip *yes __attribute__((swift_name("yes")));
+ (SMAPICKotlinArray<SMAPICGetVipList200ResponseDataUserVipStatusIsVip *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGetVipList200ResponseDataUserVipStatusIsVip *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipList200ResponseDataUserVipStatus.IsVipCompanion")))
@interface SMAPICGetVipList200ResponseDataUserVipStatusIsVipCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetVipList200ResponseDataUserVipStatusIsVipCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipListRequest")))
@interface SMAPICGetVipListRequest : SMAPICBase
- (instancetype)initWithChannel:(SMAPICVIPApiChannelGetVipList * _Nullable)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGetVipListRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGetVipListRequest *)doCopyChannel:(SMAPICVIPApiChannelGetVipList * _Nullable)channel __attribute__((swift_name("doCopy(channel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICVIPApiChannelGetVipList * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVipListRequest.Companion")))
@interface SMAPICGetVipListRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGetVipListRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google")))
@interface SMAPICGoogle : SMAPICBase
- (instancetype)initWithChannel:(SMAPICGoogleChannel *)channel idToken:(NSString *)idToken loginFrom:(SMAPICGoogleLoginFrom *)loginFrom __attribute__((swift_name("init(channel:idToken:loginFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGoogleCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICGoogle *)doCopyChannel:(SMAPICGoogleChannel *)channel idToken:(NSString *)idToken loginFrom:(SMAPICGoogleLoginFrom *)loginFrom __attribute__((swift_name("doCopy(channel:idToken:loginFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICGoogleChannel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICGoogleLoginFrom *loginFrom __attribute__((swift_name("loginFrom")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.Channel")))
@interface SMAPICGoogleChannel : SMAPICKotlinEnum<SMAPICGoogleChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGoogleChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGoogleChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICGoogleChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICGoogleChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGoogleChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.ChannelCompanion")))
@interface SMAPICGoogleChannelCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogleChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.Companion")))
@interface SMAPICGoogleCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogleCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.LoginFrom")))
@interface SMAPICGoogleLoginFrom : SMAPICKotlinEnum<SMAPICGoogleLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGoogleLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGoogleLoginFrom *_3 __attribute__((swift_name("_3")));
+ (SMAPICKotlinArray<SMAPICGoogleLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGoogleLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google.LoginFromCompanion")))
@interface SMAPICGoogleLoginFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogleLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1")))
@interface SMAPICGoogle1 : SMAPICBase
- (instancetype)initWithChannel:(SMAPICGoogle1Channel *)channel idToken:(NSString *)idToken registerFrom:(SMAPICGoogle1RegisterFrom *)registerFrom __attribute__((swift_name("init(channel:idToken:registerFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICGoogle1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICGoogle1 *)doCopyChannel:(SMAPICGoogle1Channel *)channel idToken:(NSString *)idToken registerFrom:(SMAPICGoogle1RegisterFrom *)registerFrom __attribute__((swift_name("doCopy(channel:idToken:registerFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICGoogle1Channel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICGoogle1RegisterFrom *registerFrom __attribute__((swift_name("registerFrom")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.Channel")))
@interface SMAPICGoogle1Channel : SMAPICKotlinEnum<SMAPICGoogle1Channel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGoogle1ChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGoogle1Channel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICGoogle1Channel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICGoogle1Channel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGoogle1Channel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.ChannelCompanion")))
@interface SMAPICGoogle1ChannelCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogle1ChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.Companion")))
@interface SMAPICGoogle1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogle1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.RegisterFrom")))
@interface SMAPICGoogle1RegisterFrom : SMAPICKotlinEnum<SMAPICGoogle1RegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICGoogle1RegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICGoogle1RegisterFrom *_3 __attribute__((swift_name("_3")));
+ (SMAPICKotlinArray<SMAPICGoogle1RegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICGoogle1RegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Google1.RegisterFromCompanion")))
@interface SMAPICGoogle1RegisterFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICGoogle1RegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicDetail")))
@interface SMAPICMusicDetail : SMAPICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like mood:(NSString * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSString * _Nullable)style lyrics:(NSString * _Nullable)lyrics status:(SMAPICInt * _Nullable)status duration:(NSString * _Nullable)duration isLiked:(SMAPICBoolean * _Nullable)isLiked language:(NSString * _Nullable)language mediaId:(NSString * _Nullable)mediaId audioUrl:(NSString * _Nullable)audioUrl instrument:(NSString * _Nullable)instrument moodNames:(NSArray<NSString *> * _Nullable)moodNames createTime:(NSString * _Nullable)createTime styleNames:(NSArray<NSString *> * _Nullable)styleNames updateTime:(NSString * _Nullable)updateTime audioDuration:(NSString * _Nullable)audioDuration coverMediaId:(NSString * _Nullable)coverMediaId languageNames:(NSArray<NSString *> * _Nullable)languageNames coverMediaUrl:(NSString * _Nullable)coverMediaUrl generatedLyrics:(NSString * _Nullable)generatedLyrics instrumentNames:(NSArray<NSString *> * _Nullable)instrumentNames introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId userInfo:(SMAPICUserInfo * _Nullable)userInfo title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental promptTitle:(NSString * _Nullable)promptTitle __attribute__((swift_name("init(id:uid:like:mood:intro:style:lyrics:status:duration:isLiked:language:mediaId:audioUrl:instrument:moodNames:createTime:styleNames:updateTime:audioDuration:coverMediaId:languageNames:coverMediaUrl:generatedLyrics:instrumentNames:introPicMediaId:introVoiceMediaId:userInfo:title:isInstrumental:promptTitle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICMusicDetailCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICMusicDetail *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like mood:(NSString * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSString * _Nullable)style lyrics:(NSString * _Nullable)lyrics status:(SMAPICInt * _Nullable)status duration:(NSString * _Nullable)duration isLiked:(SMAPICBoolean * _Nullable)isLiked language:(NSString * _Nullable)language mediaId:(NSString * _Nullable)mediaId audioUrl:(NSString * _Nullable)audioUrl instrument:(NSString * _Nullable)instrument moodNames:(NSArray<NSString *> * _Nullable)moodNames createTime:(NSString * _Nullable)createTime styleNames:(NSArray<NSString *> * _Nullable)styleNames updateTime:(NSString * _Nullable)updateTime audioDuration:(NSString * _Nullable)audioDuration coverMediaId:(NSString * _Nullable)coverMediaId languageNames:(NSArray<NSString *> * _Nullable)languageNames coverMediaUrl:(NSString * _Nullable)coverMediaUrl generatedLyrics:(NSString * _Nullable)generatedLyrics instrumentNames:(NSArray<NSString *> * _Nullable)instrumentNames introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId userInfo:(SMAPICUserInfo * _Nullable)userInfo title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental promptTitle:(NSString * _Nullable)promptTitle __attribute__((swift_name("doCopy(id:uid:like:mood:intro:style:lyrics:status:duration:isLiked:language:mediaId:audioUrl:instrument:moodNames:createTime:styleNames:updateTime:audioDuration:coverMediaId:languageNames:coverMediaUrl:generatedLyrics:instrumentNames:introPicMediaId:introVoiceMediaId:userInfo:title:isInstrumental:promptTitle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_duration")
*/
@property (readonly) NSString * _Nullable audioDuration __attribute__((swift_name("audioDuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_url")
*/
@property (readonly) NSString * _Nullable audioUrl __attribute__((swift_name("audioUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_id")
*/
@property (readonly) NSString * _Nullable coverMediaId __attribute__((swift_name("coverMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="generated_lyrics")
*/
@property (readonly) NSString * _Nullable generatedLyrics __attribute__((swift_name("generatedLyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSString * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable instrumentNames __attribute__((swift_name("instrumentNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) NSString * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) NSString * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) NSString * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) SMAPICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable languageNames __attribute__((swift_name("languageNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSString * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable moodNames __attribute__((swift_name("moodNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prompt_title")
*/
@property (readonly) NSString * _Nullable promptTitle __attribute__((swift_name("promptTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) SMAPICInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style_names")
*/
@property (readonly) NSArray<NSString *> * _Nullable styleNames __attribute__((swift_name("styleNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="update_time")
*/
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicDetail.Companion")))
@interface SMAPICMusicDetailCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem")))
@interface SMAPICMusicHallItem : SMAPICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like title:(NSString * _Nullable)title isLike:(SMAPICMusicHallItemIsLike * _Nullable)isLike duration:(NSString * _Nullable)duration createTime:(NSString * _Nullable)createTime coverMediaUrl:(NSString * _Nullable)coverMediaUrl __attribute__((swift_name("init(id:uid:like:title:isLike:duration:createTime:coverMediaUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICMusicHallItemCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICMusicHallItem *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid like:(NSString * _Nullable)like title:(NSString * _Nullable)title isLike:(SMAPICMusicHallItemIsLike * _Nullable)isLike duration:(NSString * _Nullable)duration createTime:(NSString * _Nullable)createTime coverMediaUrl:(NSString * _Nullable)coverMediaUrl __attribute__((swift_name("doCopy(id:uid:like:title:isLike:duration:createTime:coverMediaUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_like")
*/
@property (readonly) SMAPICMusicHallItemIsLike * _Nullable isLike __attribute__((swift_name("isLike")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.Companion")))
@interface SMAPICMusicHallItemCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicHallItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.IsLike")))
@interface SMAPICMusicHallItemIsLike : SMAPICKotlinEnum<SMAPICMusicHallItemIsLike *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICMusicHallItemIsLikeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICMusicHallItemIsLike *no __attribute__((swift_name("no")));
@property (class, readonly) SMAPICMusicHallItemIsLike *yes __attribute__((swift_name("yes")));
+ (SMAPICKotlinArray<SMAPICMusicHallItemIsLike *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICMusicHallItemIsLike *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicHallItem.IsLikeCompanion")))
@interface SMAPICMusicHallItemIsLikeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicHallItemIsLikeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicListItem")))
@interface SMAPICMusicListItem : SMAPICBase
- (instancetype)initWithId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid mediaID:(NSString * _Nullable)mediaID status:(NSString * _Nullable)status style:(NSString * _Nullable)style mood:(NSString * _Nullable)mood language:(NSString * _Nullable)language instrument:(NSString * _Nullable)instrument lyrics:(NSString * _Nullable)lyrics like:(NSString * _Nullable)like isLike:(SMAPICInt * _Nullable)isLike isLikeBoolean:(BOOL)isLikeBoolean duration:(NSString * _Nullable)duration title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental isInstrumentalBoolean:(BOOL)isInstrumentalBoolean promptTitle:(NSString * _Nullable)promptTitle coverMediaId:(NSString * _Nullable)coverMediaId coverMediaUrl:(NSString * _Nullable)coverMediaUrl intro:(NSString * _Nullable)intro introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("init(id:uid:mediaID:status:style:mood:language:instrument:lyrics:like:isLike:isLikeBoolean:duration:title:isInstrumental:isInstrumentalBoolean:promptTitle:coverMediaId:coverMediaUrl:intro:introPicMediaId:introVoiceMediaId:createTime:updateTime:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICMusicListItemCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICMusicListItem *)doCopyId:(NSString * _Nullable)id uid:(NSString * _Nullable)uid mediaID:(NSString * _Nullable)mediaID status:(NSString * _Nullable)status style:(NSString * _Nullable)style mood:(NSString * _Nullable)mood language:(NSString * _Nullable)language instrument:(NSString * _Nullable)instrument lyrics:(NSString * _Nullable)lyrics like:(NSString * _Nullable)like isLike:(SMAPICInt * _Nullable)isLike isLikeBoolean:(BOOL)isLikeBoolean duration:(NSString * _Nullable)duration title:(NSString * _Nullable)title isInstrumental:(NSString * _Nullable)isInstrumental isInstrumentalBoolean:(BOOL)isInstrumentalBoolean promptTitle:(NSString * _Nullable)promptTitle coverMediaId:(NSString * _Nullable)coverMediaId coverMediaUrl:(NSString * _Nullable)coverMediaUrl intro:(NSString * _Nullable)intro introPicMediaId:(NSString * _Nullable)introPicMediaId introVoiceMediaId:(NSString * _Nullable)introVoiceMediaId createTime:(NSString * _Nullable)createTime updateTime:(NSString * _Nullable)updateTime __attribute__((swift_name("doCopy(id:uid:mediaID:status:style:mood:language:instrument:lyrics:like:isLike:isLikeBoolean:duration:title:isInstrumental:isInstrumentalBoolean:promptTitle:coverMediaId:coverMediaUrl:intro:introPicMediaId:introVoiceMediaId:createTime:updateTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_id")
*/
@property (readonly) NSString * _Nullable coverMediaId __attribute__((swift_name("coverMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_media_url")
*/
@property (readonly) NSString * _Nullable coverMediaUrl __attribute__((swift_name("coverMediaUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="create_time")
*/
@property (readonly) NSString * _Nullable createTime __attribute__((swift_name("createTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) NSString * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSString * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) NSString * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) NSString * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) NSString * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isInstrumentalBoolean __attribute__((swift_name("isInstrumentalBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_like")
*/
@property (readonly) SMAPICInt * _Nullable isLike __attribute__((swift_name("isLike")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) BOOL isLikeBoolean __attribute__((swift_name("isLikeBoolean")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like")
*/
@property (readonly) NSString * _Nullable like __attribute__((swift_name("like")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) NSString * _Nullable mediaID __attribute__((swift_name("mediaID")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSString * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prompt_title")
*/
@property (readonly) NSString * _Nullable promptTitle __attribute__((swift_name("promptTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="update_time")
*/
@property (readonly) NSString * _Nullable updateTime __attribute__((swift_name("updateTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicListItem.Companion")))
@interface SMAPICMusicListItemCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicListItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicOption")))
@interface SMAPICMusicOption : SMAPICBase
- (instancetype)initWithId:(SMAPICInt * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("init(id:title:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICMusicOptionCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICMusicOption *)doCopyId:(SMAPICInt * _Nullable)id title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(id:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) SMAPICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicOption.Companion")))
@interface SMAPICMusicOptionCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICMusicOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem")))
@interface SMAPICNoticeListItem : SMAPICBase
- (instancetype)initWithId:(NSString *)id uid:(NSString *)uid noticeTime:(NSString * _Nullable)noticeTime chatType:(NSString * _Nullable)chatType msgType:(NSString * _Nullable)msgType subMsgType:(NSString * _Nullable)subMsgType __attribute__((swift_name("init(id:uid:noticeTime:chatType:msgType:subMsgType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICNoticeListItemCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICNoticeListItem *)doCopyId:(NSString *)id uid:(NSString *)uid noticeTime:(NSString * _Nullable)noticeTime chatType:(NSString * _Nullable)chatType msgType:(NSString * _Nullable)msgType subMsgType:(NSString * _Nullable)subMsgType __attribute__((swift_name("doCopy(id:uid:noticeTime:chatType:msgType:subMsgType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chat_type")
*/
@property (readonly) NSString * _Nullable chatType __attribute__((swift_name("chatType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg_type")
*/
@property (readonly) NSString * _Nullable msgType __attribute__((swift_name("msgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mtime")
*/
@property (readonly) NSString * _Nullable noticeTime __attribute__((swift_name("noticeTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sub_msg_type")
*/
@property (readonly) NSString * _Nullable subMsgType __attribute__((swift_name("subMsgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.ChatType")))
@interface SMAPICNoticeListItemChatType : SMAPICKotlinEnum<SMAPICNoticeListItemChatType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICNoticeListItemChatTypeCompanion *companion __attribute__((swift_name("companion")));
+ (SMAPICKotlinArray<SMAPICNoticeListItemChatType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICNoticeListItemChatType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.ChatTypeCompanion")))
@interface SMAPICNoticeListItemChatTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICNoticeListItemChatTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.Companion")))
@interface SMAPICNoticeListItemCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICNoticeListItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.MessageType")))
@interface SMAPICNoticeListItemMessageType : SMAPICKotlinEnum<SMAPICNoticeListItemMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICNoticeListItemMessageTypeCompanion *companion __attribute__((swift_name("companion")));
+ (SMAPICKotlinArray<SMAPICNoticeListItemMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICNoticeListItemMessageType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.MessageTypeCompanion")))
@interface SMAPICNoticeListItemMessageTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICNoticeListItemMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.SubMessageType")))
@interface SMAPICNoticeListItemSubMessageType : SMAPICKotlinEnum<SMAPICNoticeListItemSubMessageType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICNoticeListItemSubMessageTypeCompanion *companion __attribute__((swift_name("companion")));
+ (SMAPICKotlinArray<SMAPICNoticeListItemSubMessageType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICNoticeListItemSubMessageType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoticeListItem.SubMessageTypeCompanion")))
@interface SMAPICNoticeListItemSubMessageTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICNoticeListItemSubMessageTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppClose200Response")))
@interface SMAPICPostAppClose200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppClose200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppClose200Response *)doCopyOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppClose200Response.Companion")))
@interface SMAPICPostAppClose200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppClose200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200Response")))
@interface SMAPICPostAppInit200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppInit200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppInit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppInit200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppInit200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostAppInit200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200Response.Companion")))
@interface SMAPICPostAppInit200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppInit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseData")))
@interface SMAPICPostAppInit200ResponseData : SMAPICBase
- (instancetype)initWithUserInfo:(SMAPICPostAppInit200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppInit200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppInit200ResponseData *)doCopyUserInfo:(SMAPICPostAppInit200ResponseDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostAppInit200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseData.Companion")))
@interface SMAPICPostAppInit200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppInit200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseDataUserInfo")))
@interface SMAPICPostAppInit200ResponseDataUserInfo : SMAPICBase
- (instancetype)initWithSex:(SMAPICInt * _Nullable)sex uid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(SMAPICInt * _Nullable)isVip nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(sex:uid:avatar:isVip:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppInit200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppInit200ResponseDataUserInfo *)doCopySex:(SMAPICInt * _Nullable)sex uid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar isVip:(SMAPICInt * _Nullable)isVip nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(sex:uid:avatar:isVip:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) SMAPICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sex")
*/
@property (readonly) SMAPICInt * _Nullable sex __attribute__((swift_name("sex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppInit200ResponseDataUserInfo.Companion")))
@interface SMAPICPostAppInit200ResponseDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppInit200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppOpen200Response")))
@interface SMAPICPostAppOpen200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppOpen200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppOpen200Response *)doCopyOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppOpen200Response.Companion")))
@interface SMAPICPostAppOpen200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppOpen200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancel200Response")))
@interface SMAPICPostAppleCancel200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("init(ok:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCancel200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCancel200Response *)doCopyOk:(SMAPICInt * _Nullable)ok __attribute__((swift_name("doCopy(ok:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancel200Response.Companion")))
@interface SMAPICPostAppleCancel200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCancel200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancelRequest")))
@interface SMAPICPostAppleCancelRequest : SMAPICBase
- (instancetype)initWithTranNo:(NSString *)tranNo status:(SMAPICInt * _Nullable)status errorCode:(SMAPICInt * _Nullable)errorCode __attribute__((swift_name("init(tranNo:status:errorCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCancelRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCancelRequest *)doCopyTranNo:(NSString *)tranNo status:(SMAPICInt * _Nullable)status errorCode:(SMAPICInt * _Nullable)errorCode __attribute__((swift_name("doCopy(tranNo:status:errorCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="errorCode")
*/
@property (readonly) SMAPICInt * _Nullable errorCode __attribute__((swift_name("errorCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) SMAPICInt * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *tranNo __attribute__((swift_name("tranNo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCancelRequest.Companion")))
@interface SMAPICPostAppleCancelRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCancelRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200Response")))
@interface SMAPICPostAppleCreate200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppleCreate200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCreate200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCreate200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppleCreate200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostAppleCreate200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200Response.Companion")))
@interface SMAPICPostAppleCreate200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCreate200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseData")))
@interface SMAPICPostAppleCreate200ResponseData : SMAPICBase
- (instancetype)initWithTranNo:(NSString * _Nullable)tranNo payItem:(SMAPICPostAppleCreate200ResponseDataPayItem * _Nullable)payItem productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("init(tranNo:payItem:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCreate200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCreate200ResponseData *)doCopyTranNo:(NSString * _Nullable)tranNo payItem:(SMAPICPostAppleCreate200ResponseDataPayItem * _Nullable)payItem productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("doCopy(tranNo:payItem:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pay_item")
*/
@property (readonly) SMAPICPostAppleCreate200ResponseDataPayItem * _Nullable payItem __attribute__((swift_name("payItem")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) SMAPICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
*/
@property (readonly) NSString * _Nullable tranNo __attribute__((swift_name("tranNo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseData.Companion")))
@interface SMAPICPostAppleCreate200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCreate200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseDataPayItem")))
@interface SMAPICPostAppleCreate200ResponseDataPayItem : SMAPICBase
- (instancetype)initWithId:(SMAPICInt * _Nullable)id sku:(NSString * _Nullable)sku days:(SMAPICInt * _Nullable)days money:(NSString * _Nullable)money title:(NSString * _Nullable)title productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("init(id:sku:days:money:title:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCreate200ResponseDataPayItemCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCreate200ResponseDataPayItem *)doCopyId:(SMAPICInt * _Nullable)id sku:(NSString * _Nullable)sku days:(SMAPICInt * _Nullable)days money:(NSString * _Nullable)money title:(NSString * _Nullable)title productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("doCopy(id:sku:days:money:title:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="days")
*/
@property (readonly) SMAPICInt * _Nullable days __attribute__((swift_name("days")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property (readonly) SMAPICInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) NSString * _Nullable money __attribute__((swift_name("money")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) SMAPICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
*/
@property (readonly) NSString * _Nullable sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreate200ResponseDataPayItem.Companion")))
@interface SMAPICPostAppleCreate200ResponseDataPayItemCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCreate200ResponseDataPayItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest")))
@interface SMAPICPostAppleCreateRequest : SMAPICBase
- (instancetype)initWithGoodsId:(int32_t)goodsId productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("init(goodsId:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleCreateRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleCreateRequest *)doCopyGoodsId:(int32_t)goodsId productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("doCopy(goodsId:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t goodsId __attribute__((swift_name("goodsId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) SMAPICInt * _Nullable productType __attribute__((swift_name("productType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.Companion")))
@interface SMAPICPostAppleCreateRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.ProductType")))
@interface SMAPICPostAppleCreateRequestProductType : SMAPICKotlinEnum<SMAPICPostAppleCreateRequestProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostAppleCreateRequestProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostAppleCreateRequestProductType *golden __attribute__((swift_name("golden")));
@property (class, readonly) SMAPICPostAppleCreateRequestProductType *vip __attribute__((swift_name("vip")));
+ (SMAPICKotlinArray<SMAPICPostAppleCreateRequestProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostAppleCreateRequestProductType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleCreateRequest.ProductTypeCompanion")))
@interface SMAPICPostAppleCreateRequestProductTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleCreateRequestProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNotice200Response")))
@interface SMAPICPostAppleNotice200Response : SMAPICBase
- (instancetype)initWithStatus:(NSString * _Nullable)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleNotice200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleNotice200Response *)doCopyStatus:(NSString * _Nullable)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNotice200Response.Companion")))
@interface SMAPICPostAppleNotice200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleNotice200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest")))
@interface SMAPICPostAppleNoticeRequest : SMAPICBase
- (instancetype)initWithEnvironment:(SMAPICPostAppleNoticeRequestEnvironment * _Nullable)environment transactionId:(NSString * _Nullable)transactionId notificationType:(SMAPICPostAppleNoticeRequestNotificationType * _Nullable)notificationType notificationUuid:(NSString * _Nullable)notificationUuid __attribute__((swift_name("init(environment:transactionId:notificationType:notificationUuid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleNoticeRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleNoticeRequest *)doCopyEnvironment:(SMAPICPostAppleNoticeRequestEnvironment * _Nullable)environment transactionId:(NSString * _Nullable)transactionId notificationType:(SMAPICPostAppleNoticeRequestNotificationType * _Nullable)notificationType notificationUuid:(NSString * _Nullable)notificationUuid __attribute__((swift_name("doCopy(environment:transactionId:notificationType:notificationUuid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="environment")
*/
@property (readonly) SMAPICPostAppleNoticeRequestEnvironment * _Nullable environment __attribute__((swift_name("environment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notification_type")
*/
@property (readonly) SMAPICPostAppleNoticeRequestNotificationType * _Nullable notificationType __attribute__((swift_name("notificationType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notification_uuid")
*/
@property (readonly) NSString * _Nullable notificationUuid __attribute__((swift_name("notificationUuid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transaction_id")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest.Companion")))
@interface SMAPICPostAppleNoticeRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleNoticeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest.Environment")))
@interface SMAPICPostAppleNoticeRequestEnvironment : SMAPICKotlinEnum<SMAPICPostAppleNoticeRequestEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostAppleNoticeRequestEnvironmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostAppleNoticeRequestEnvironment *sandbox __attribute__((swift_name("sandbox")));
@property (class, readonly) SMAPICPostAppleNoticeRequestEnvironment *production __attribute__((swift_name("production")));
+ (SMAPICKotlinArray<SMAPICPostAppleNoticeRequestEnvironment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostAppleNoticeRequestEnvironment *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest.EnvironmentCompanion")))
@interface SMAPICPostAppleNoticeRequestEnvironmentCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleNoticeRequestEnvironmentCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest.NotificationType")))
@interface SMAPICPostAppleNoticeRequestNotificationType : SMAPICKotlinEnum<SMAPICPostAppleNoticeRequestNotificationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostAppleNoticeRequestNotificationTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostAppleNoticeRequestNotificationType *subscribed __attribute__((swift_name("subscribed")));
@property (class, readonly) SMAPICPostAppleNoticeRequestNotificationType *didRenew __attribute__((swift_name("didRenew")));
@property (class, readonly) SMAPICPostAppleNoticeRequestNotificationType *expired __attribute__((swift_name("expired")));
@property (class, readonly) SMAPICPostAppleNoticeRequestNotificationType *didFailToRenew __attribute__((swift_name("didFailToRenew")));
@property (class, readonly) SMAPICPostAppleNoticeRequestNotificationType *refund __attribute__((swift_name("refund")));
+ (SMAPICKotlinArray<SMAPICPostAppleNoticeRequestNotificationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostAppleNoticeRequestNotificationType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleNoticeRequest.NotificationTypeCompanion")))
@interface SMAPICPostAppleNoticeRequestNotificationTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleNoticeRequestNotificationTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200Response")))
@interface SMAPICPostAppleVerify200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppleVerify200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleVerify200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleVerify200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostAppleVerify200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostAppleVerify200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200Response.Companion")))
@interface SMAPICPostAppleVerify200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerify200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseData")))
@interface SMAPICPostAppleVerify200ResponseData : SMAPICBase
- (instancetype)initWithMoney:(NSString * _Nullable)money goodsId:(SMAPICInt * _Nullable)goodsId userInfo:(SMAPICPostAppleVerify200ResponseDataUserInfo * _Nullable)userInfo isSandbox:(SMAPICBoolean * _Nullable)isSandbox accountInfo:(SMAPICPostAppleVerify200ResponseDataAccountInfo * _Nullable)accountInfo productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("init(money:goodsId:userInfo:isSandbox:accountInfo:productType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleVerify200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleVerify200ResponseData *)doCopyMoney:(NSString * _Nullable)money goodsId:(SMAPICInt * _Nullable)goodsId userInfo:(SMAPICPostAppleVerify200ResponseDataUserInfo * _Nullable)userInfo isSandbox:(SMAPICBoolean * _Nullable)isSandbox accountInfo:(SMAPICPostAppleVerify200ResponseDataAccountInfo * _Nullable)accountInfo productType:(SMAPICInt * _Nullable)productType __attribute__((swift_name("doCopy(money:goodsId:userInfo:isSandbox:accountInfo:productType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_info")
*/
@property (readonly) SMAPICPostAppleVerify200ResponseDataAccountInfo * _Nullable accountInfo __attribute__((swift_name("accountInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
*/
@property (readonly) SMAPICInt * _Nullable goodsId __attribute__((swift_name("goodsId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_sandbox")
*/
@property (readonly) SMAPICBoolean * _Nullable isSandbox __attribute__((swift_name("isSandbox")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) NSString * _Nullable money __attribute__((swift_name("money")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) SMAPICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostAppleVerify200ResponseDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseData.Companion")))
@interface SMAPICPostAppleVerify200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerify200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataAccountInfo")))
@interface SMAPICPostAppleVerify200ResponseDataAccountInfo : SMAPICBase
- (instancetype)initWithMoney:(SMAPICInt * _Nullable)money __attribute__((swift_name("init(money:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleVerify200ResponseDataAccountInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleVerify200ResponseDataAccountInfo *)doCopyMoney:(SMAPICInt * _Nullable)money __attribute__((swift_name("doCopy(money:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="money")
*/
@property (readonly) SMAPICInt * _Nullable money __attribute__((swift_name("money")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataAccountInfo.Companion")))
@interface SMAPICPostAppleVerify200ResponseDataAccountInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerify200ResponseDataAccountInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataUserInfo")))
@interface SMAPICPostAppleVerify200ResponseDataUserInfo : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid isVip:(SMAPICInt * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:isVip:vipExp:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleVerify200ResponseDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleVerify200ResponseDataUserInfo *)doCopyUid:(SMAPICInt * _Nullable)uid isVip:(SMAPICInt * _Nullable)isVip vipExp:(NSString * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:isVip:vipExp:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) SMAPICInt * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) NSString * _Nullable vipExp __attribute__((swift_name("vipExp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerify200ResponseDataUserInfo.Companion")))
@interface SMAPICPostAppleVerify200ResponseDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerify200ResponseDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest")))
@interface SMAPICPostAppleVerifyRequest : SMAPICBase
- (instancetype)initWithTranNo:(NSString *)tranNo productId:(NSString * _Nullable)productId productType:(SMAPICInt * _Nullable)productType receiptData:(NSString * _Nullable)receiptData transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("init(tranNo:productId:productType:receiptData:transactionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostAppleVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostAppleVerifyRequest *)doCopyTranNo:(NSString *)tranNo productId:(NSString * _Nullable)productId productType:(SMAPICInt * _Nullable)productType receiptData:(NSString * _Nullable)receiptData transactionId:(NSString * _Nullable)transactionId __attribute__((swift_name("doCopy(tranNo:productId:productType:receiptData:transactionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_id")
*/
@property (readonly) NSString * _Nullable productId __attribute__((swift_name("productId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
*/
@property (readonly) SMAPICInt * _Nullable productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="receipt_data")
*/
@property (readonly) NSString * _Nullable receiptData __attribute__((swift_name("receiptData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tran_no")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *tranNo __attribute__((swift_name("tranNo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transaction_id")
*/
@property (readonly) NSString * _Nullable transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.Companion")))
@interface SMAPICPostAppleVerifyRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.ProductType")))
@interface SMAPICPostAppleVerifyRequestProductType : SMAPICKotlinEnum<SMAPICPostAppleVerifyRequestProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostAppleVerifyRequestProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostAppleVerifyRequestProductType *golden __attribute__((swift_name("golden")));
@property (class, readonly) SMAPICPostAppleVerifyRequestProductType *vip __attribute__((swift_name("vip")));
+ (SMAPICKotlinArray<SMAPICPostAppleVerifyRequestProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostAppleVerifyRequestProductType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostAppleVerifyRequest.ProductTypeCompanion")))
@interface SMAPICPostAppleVerifyRequestProductTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostAppleVerifyRequestProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailResetPasswordRequest")))
@interface SMAPICPostEmailResetPasswordRequest : SMAPICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostEmailResetPasswordRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostEmailResetPasswordRequest *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailResetPasswordRequest.Companion")))
@interface SMAPICPostEmailResetPasswordRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailResetPasswordRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCode200Response")))
@interface SMAPICPostEmailSendCode200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostEmailSendCode200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostEmailSendCode200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCode200Response.Companion")))
@interface SMAPICPostEmailSendCode200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailSendCode200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest")))
@interface SMAPICPostEmailSendCodeRequest : SMAPICBase
- (instancetype)initWithType:(int32_t)type email:(NSString *)email __attribute__((swift_name("init(type:email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostEmailSendCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostEmailSendCodeRequest *)doCopyType:(int32_t)type email:(NSString *)email __attribute__((swift_name("doCopy(type:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Companion")))
@interface SMAPICPostEmailSendCodeRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailSendCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Type_")))
@interface SMAPICPostEmailSendCodeRequestType : SMAPICKotlinEnum<SMAPICPostEmailSendCodeRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostEmailSendCodeRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostEmailSendCodeRequestType *registerverify __attribute__((swift_name("registerverify")));
@property (class, readonly) SMAPICPostEmailSendCodeRequestType *forgetpassword __attribute__((swift_name("forgetpassword")));
@property (class, readonly) SMAPICPostEmailSendCodeRequestType *bindemail __attribute__((swift_name("bindemail")));
+ (SMAPICKotlinArray<SMAPICPostEmailSendCodeRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostEmailSendCodeRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailSendCodeRequest.Type_Companion")))
@interface SMAPICPostEmailSendCodeRequestTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailSendCodeRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCode200Response")))
@interface SMAPICPostEmailVerifyCode200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostEmailVerifyCode200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostEmailVerifyCode200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCode200Response.Companion")))
@interface SMAPICPostEmailVerifyCode200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailVerifyCode200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest")))
@interface SMAPICPostEmailVerifyCodeRequest : SMAPICBase
- (instancetype)initWithCode:(NSString *)code email:(NSString *)email fromType:(int32_t)fromType __attribute__((swift_name("init(code:email:fromType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostEmailVerifyCodeRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostEmailVerifyCodeRequest *)doCopyCode:(NSString *)code email:(NSString *)email fromType:(int32_t)fromType __attribute__((swift_name("doCopy(code:email:fromType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *code __attribute__((swift_name("code")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="from_type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t fromType __attribute__((swift_name("fromType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.Companion")))
@interface SMAPICPostEmailVerifyCodeRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailVerifyCodeRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.FromType")))
@interface SMAPICPostEmailVerifyCodeRequestFromType : SMAPICKotlinEnum<SMAPICPostEmailVerifyCodeRequestFromType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostEmailVerifyCodeRequestFromTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostEmailVerifyCodeRequestFromType *registerverify __attribute__((swift_name("registerverify")));
@property (class, readonly) SMAPICPostEmailVerifyCodeRequestFromType *forgetpassword __attribute__((swift_name("forgetpassword")));
@property (class, readonly) SMAPICPostEmailVerifyCodeRequestFromType *bindemail __attribute__((swift_name("bindemail")));
+ (SMAPICKotlinArray<SMAPICPostEmailVerifyCodeRequestFromType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostEmailVerifyCodeRequestFromType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostEmailVerifyCodeRequest.FromTypeCompanion")))
@interface SMAPICPostEmailVerifyCodeRequestFromTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostEmailVerifyCodeRequestFromTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmit200Response")))
@interface SMAPICPostFeedbackSubmit200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostFeedbackSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostFeedbackSubmit200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmit200Response.Companion")))
@interface SMAPICPostFeedbackSubmit200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostFeedbackSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequest")))
@interface SMAPICPostFeedbackSubmitRequest : SMAPICBase
- (instancetype)initWithPhotos:(NSArray<SMAPICPostFeedbackSubmitRequestPhotosInner *> * _Nullable)photos content:(NSString * _Nullable)content __attribute__((swift_name("init(photos:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostFeedbackSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostFeedbackSubmitRequest *)doCopyPhotos:(NSArray<SMAPICPostFeedbackSubmitRequestPhotosInner *> * _Nullable)photos content:(NSString * _Nullable)content __attribute__((swift_name("doCopy(photos:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="photos")
*/
@property (readonly) NSArray<SMAPICPostFeedbackSubmitRequestPhotosInner *> * _Nullable photos __attribute__((swift_name("photos")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequest.Companion")))
@interface SMAPICPostFeedbackSubmitRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostFeedbackSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequestPhotosInner")))
@interface SMAPICPostFeedbackSubmitRequestPhotosInner : SMAPICBase
- (instancetype)initWithUrl:(NSString *)url width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height __attribute__((swift_name("init(url:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostFeedbackSubmitRequestPhotosInnerCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostFeedbackSubmitRequestPhotosInner *)doCopyUrl:(NSString *)url width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height __attribute__((swift_name("doCopy(url:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) SMAPICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) SMAPICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostFeedbackSubmitRequestPhotosInner.Companion")))
@interface SMAPICPostFeedbackSubmitRequestPhotosInnerCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostFeedbackSubmitRequestPhotosInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200Response")))
@interface SMAPICPostGoogleVerify200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerify200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostGoogleVerify200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200Response.Companion")))
@interface SMAPICPostGoogleVerify200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerify200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf")))
@interface SMAPICPostGoogleVerify200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostGoogleVerify200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerify200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostGoogleVerify200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostGoogleVerify200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostGoogleVerify200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf.Companion")))
@interface SMAPICPostGoogleVerify200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerify200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf1")))
@interface SMAPICPostGoogleVerify200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerify200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostGoogleVerify200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOf1.Companion")))
@interface SMAPICPostGoogleVerify200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerify200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOfData")))
@interface SMAPICPostGoogleVerify200ResponseOneOfData : SMAPICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email channel:(NSString * _Nullable)channel picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:channel:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerify200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostGoogleVerify200ResponseOneOfData *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email channel:(NSString * _Nullable)channel picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:channel:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
*/
@property (readonly) NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerify200ResponseOneOfData.Companion")))
@interface SMAPICPostGoogleVerify200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerify200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest")))
@interface SMAPICPostGoogleVerifyRequest : SMAPICBase
- (instancetype)initWithChannel:(SMAPICPostGoogleVerifyRequestChannel *)channel idToken:(NSString *)idToken __attribute__((swift_name("init(channel:idToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerifyRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostGoogleVerifyRequest *)doCopyChannel:(SMAPICPostGoogleVerifyRequestChannel *)channel idToken:(NSString *)idToken __attribute__((swift_name("doCopy(channel:idToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostGoogleVerifyRequestChannel *channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *idToken __attribute__((swift_name("idToken")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.Channel")))
@interface SMAPICPostGoogleVerifyRequestChannel : SMAPICKotlinEnum<SMAPICPostGoogleVerifyRequestChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostGoogleVerifyRequestChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostGoogleVerifyRequestChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICPostGoogleVerifyRequestChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICPostGoogleVerifyRequestChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostGoogleVerifyRequestChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.ChannelCompanion")))
@interface SMAPICPostGoogleVerifyRequestChannelCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerifyRequestChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostGoogleVerifyRequest.Companion")))
@interface SMAPICPostGoogleVerifyRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostGoogleVerifyRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200Response")))
@interface SMAPICPostLoginCompleteProfile200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostLoginCompleteProfile200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginCompleteProfile200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginCompleteProfile200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostLoginCompleteProfile200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostLoginCompleteProfile200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200Response.Companion")))
@interface SMAPICPostLoginCompleteProfile200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginCompleteProfile200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200ResponseData")))
@interface SMAPICPostLoginCompleteProfile200ResponseData : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid step:(SMAPICInt * _Nullable)step userInfo:(SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(uid:step:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginCompleteProfile200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginCompleteProfile200ResponseData *)doCopyUid:(SMAPICInt * _Nullable)uid step:(SMAPICInt * _Nullable)step userInfo:(SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(uid:step:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="step")
*/
@property (readonly) SMAPICInt * _Nullable step __attribute__((swift_name("step")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfile200ResponseData.Companion")))
@interface SMAPICPostLoginCompleteProfile200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginCompleteProfile200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfileRequest")))
@interface SMAPICPostLoginCompleteProfileRequest : SMAPICBase
- (instancetype)initWithNickname:(NSString *)nickname avatar:(NSString * _Nullable)avatar __attribute__((swift_name("init(nickname:avatar:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginCompleteProfileRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginCompleteProfileRequest *)doCopyNickname:(NSString *)nickname avatar:(NSString * _Nullable)avatar __attribute__((swift_name("doCopy(nickname:avatar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *nickname __attribute__((swift_name("nickname")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginCompleteProfileRequest.Companion")))
@interface SMAPICPostLoginCompleteProfileRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginCompleteProfileRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200Response")))
@interface SMAPICPostLoginHandle200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginHandle200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginHandle200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200Response.Companion")))
@interface SMAPICPostLoginHandle200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOf")))
@interface SMAPICPostLoginHandle200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginHandle200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginHandle200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOf.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOf1")))
@interface SMAPICPostLoginHandle200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOf1.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfData")))
@interface SMAPICPostLoginHandle200ResponseOneOfData : SMAPICBase
- (instancetype)initWithStep:(SMAPICInt * _Nullable)step token:(NSString * _Nullable)token userInfo:(SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo __attribute__((swift_name("init(step:token:userInfo:appleInfo:googleInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOfData *)doCopyStep:(SMAPICInt * _Nullable)step token:(NSString * _Nullable)token userInfo:(SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo __attribute__((swift_name("doCopy(step:token:userInfo:appleInfo:googleInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_info")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo * _Nullable appleInfo __attribute__((swift_name("appleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_info")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo * _Nullable googleInfo __attribute__((swift_name("googleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="step")
*/
@property (readonly) SMAPICInt * _Nullable step __attribute__((swift_name("step")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostLoginHandle200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfData.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataAppleInfo")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo : SMAPICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("init(email:fullName:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOfDataAppleInfo *)doCopyEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("doCopy(email:fullName:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="full_name")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataAppleInfo.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOfDataAppleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataGoogleInfo")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo : SMAPICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfo *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataGoogleInfo.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOfDataGoogleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataUserInfo")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataUserInfo : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:email:avatar:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandle200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandle200ResponseOneOfDataUserInfo *)doCopyUid:(SMAPICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:email:avatar:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandle200ResponseOneOfDataUserInfo.Companion")))
@interface SMAPICPostLoginHandle200ResponseOneOfDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandle200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest")))
@interface SMAPICPostLoginHandleRequest : SMAPICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password loginFrom:(int32_t)loginFrom userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo __attribute__((swift_name("init(email:password:loginFrom:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandleRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandleRequest *)doCopyEmail:(NSString *)email password:(NSString *)password loginFrom:(int32_t)loginFrom userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(email:password:loginFrom:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t loginFrom __attribute__((swift_name("loginFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.Channel")))
@interface SMAPICPostLoginHandleRequestChannel : SMAPICKotlinEnum<SMAPICPostLoginHandleRequestChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginHandleRequestChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginHandleRequestChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICPostLoginHandleRequestChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICPostLoginHandleRequestChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginHandleRequestChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.ChannelCompanion")))
@interface SMAPICPostLoginHandleRequestChannelCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandleRequestChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.Companion")))
@interface SMAPICPostLoginHandleRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandleRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.LoginFrom")))
@interface SMAPICPostLoginHandleRequestLoginFrom : SMAPICKotlinEnum<SMAPICPostLoginHandleRequestLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginHandleRequestLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginHandleRequestLoginFrom *email __attribute__((swift_name("email")));
@property (class, readonly) SMAPICPostLoginHandleRequestLoginFrom *apple __attribute__((swift_name("apple")));
+ (SMAPICKotlinArray<SMAPICPostLoginHandleRequestLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginHandleRequestLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequest.LoginFromCompanion")))
@interface SMAPICPostLoginHandleRequestLoginFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandleRequestLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequestOneOf")))
@interface SMAPICPostLoginHandleRequestOneOf : SMAPICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password loginFrom:(SMAPICPostLoginHandleRequestOneOfLoginFrom *)loginFrom __attribute__((swift_name("init(email:password:loginFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginHandleRequestOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginHandleRequestOneOf *)doCopyEmail:(NSString *)email password:(NSString *)password loginFrom:(SMAPICPostLoginHandleRequestOneOfLoginFrom *)loginFrom __attribute__((swift_name("doCopy(email:password:loginFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="login_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostLoginHandleRequestOneOfLoginFrom *loginFrom __attribute__((swift_name("loginFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequestOneOf.Companion")))
@interface SMAPICPostLoginHandleRequestOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandleRequestOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequestOneOf.LoginFrom")))
@interface SMAPICPostLoginHandleRequestOneOfLoginFrom : SMAPICKotlinEnum<SMAPICPostLoginHandleRequestOneOfLoginFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginHandleRequestOneOfLoginFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginHandleRequestOneOfLoginFrom *email __attribute__((swift_name("email")));
+ (SMAPICKotlinArray<SMAPICPostLoginHandleRequestOneOfLoginFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginHandleRequestOneOfLoginFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginHandleRequestOneOf.LoginFromCompanion")))
@interface SMAPICPostLoginHandleRequestOneOfLoginFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginHandleRequestOneOfLoginFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200Response")))
@interface SMAPICPostLoginRegister200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginRegister200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginRegister200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostLoginRegister200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200Response.Companion")))
@interface SMAPICPostLoginRegister200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOf")))
@interface SMAPICPostLoginRegister200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginRegister200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostLoginRegister200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostLoginRegister200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOf.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOf1")))
@interface SMAPICPostLoginRegister200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOf1.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfData")))
@interface SMAPICPostLoginRegister200ResponseOneOfData : SMAPICBase
- (instancetype)initWithToken:(NSString * _Nullable)token userInfo:(SMAPICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo ipCountryCode:(NSString * _Nullable)ipCountryCode __attribute__((swift_name("init(token:userInfo:appleInfo:googleInfo:ipCountryCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOfData *)doCopyToken:(NSString * _Nullable)token userInfo:(SMAPICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable)userInfo appleInfo:(SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable)appleInfo googleInfo:(SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable)googleInfo ipCountryCode:(NSString * _Nullable)ipCountryCode __attribute__((swift_name("doCopy(token:userInfo:appleInfo:googleInfo:ipCountryCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_info")
*/
@property (readonly) SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo * _Nullable appleInfo __attribute__((swift_name("appleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_info")
*/
@property (readonly) SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo * _Nullable googleInfo __attribute__((swift_name("googleInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ip_country_code")
*/
@property (readonly) NSString * _Nullable ipCountryCode __attribute__((swift_name("ipCountryCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostLoginRegister200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfData.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataAppleInfo")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo : SMAPICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("init(email:fullName:appleUserId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOfDataAppleInfo *)doCopyEmail:(NSString * _Nullable)email fullName:(NSString * _Nullable)fullName appleUserId:(NSString * _Nullable)appleUserId __attribute__((swift_name("doCopy(email:fullName:appleUserId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="full_name")
*/
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataAppleInfo.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOfDataAppleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataGoogleInfo")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo : SMAPICBase
- (instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("init(name:email:picture:googleId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfo *)doCopyName:(NSString * _Nullable)name email:(NSString * _Nullable)email picture:(NSString * _Nullable)picture googleId:(NSString * _Nullable)googleId __attribute__((swift_name("doCopy(name:email:picture:googleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="google_id")
*/
@property (readonly) NSString * _Nullable googleId __attribute__((swift_name("googleId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="picture")
*/
@property (readonly) NSString * _Nullable picture __attribute__((swift_name("picture")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataGoogleInfo.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOfDataGoogleInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataUserInfo")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataUserInfo : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(uid:email:avatar:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegister200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegister200ResponseOneOfDataUserInfo *)doCopyUid:(SMAPICInt * _Nullable)uid email:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(uid:email:avatar:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegister200ResponseOneOfDataUserInfo.Companion")))
@interface SMAPICPostLoginRegister200ResponseOneOfDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegister200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest")))
@interface SMAPICPostLoginRegisterRequest : SMAPICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password registerFrom:(int32_t)registerFrom channel:(SMAPICPostLoginRegisterRequestChannel * _Nullable)channel idToken:(NSString * _Nullable)idToken appleUserId:(NSString * _Nullable)appleUserId userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("init(email:password:registerFrom:channel:idToken:appleUserId:userInfo:identityToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegisterRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegisterRequest *)doCopyEmail:(NSString *)email password:(NSString *)password registerFrom:(int32_t)registerFrom channel:(SMAPICPostLoginRegisterRequestChannel * _Nullable)channel idToken:(NSString * _Nullable)idToken appleUserId:(NSString * _Nullable)appleUserId userInfo:(SMAPICAppleUserInfo * _Nullable)userInfo identityToken:(NSString * _Nullable)identityToken __attribute__((swift_name("doCopy(email:password:registerFrom:channel:idToken:appleUserId:userInfo:identityToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="apple_user_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString * _Nullable appleUserId __attribute__((swift_name("appleUserId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostLoginRegisterRequestChannel * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="identity_token")
*/
@property (readonly) NSString * _Nullable identityToken __attribute__((swift_name("identityToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t registerFrom __attribute__((swift_name("registerFrom")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICAppleUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.Channel")))
@interface SMAPICPostLoginRegisterRequestChannel : SMAPICKotlinEnum<SMAPICPostLoginRegisterRequestChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginRegisterRequestChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginRegisterRequestChannel *comperiodaimusicperiodhomeperioda __attribute__((swift_name("comperiodaimusicperiodhomeperioda")));
@property (class, readonly) SMAPICPostLoginRegisterRequestChannel *comperiodaimusicperiodhome __attribute__((swift_name("comperiodaimusicperiodhome")));
+ (SMAPICKotlinArray<SMAPICPostLoginRegisterRequestChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginRegisterRequestChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.ChannelCompanion")))
@interface SMAPICPostLoginRegisterRequestChannelCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegisterRequestChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.Companion")))
@interface SMAPICPostLoginRegisterRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegisterRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.RegisterFrom")))
@interface SMAPICPostLoginRegisterRequestRegisterFrom : SMAPICKotlinEnum<SMAPICPostLoginRegisterRequestRegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginRegisterRequestRegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginRegisterRequestRegisterFrom *email __attribute__((swift_name("email")));
@property (class, readonly) SMAPICPostLoginRegisterRequestRegisterFrom *google __attribute__((swift_name("google")));
@property (class, readonly) SMAPICPostLoginRegisterRequestRegisterFrom *apple __attribute__((swift_name("apple")));
+ (SMAPICKotlinArray<SMAPICPostLoginRegisterRequestRegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginRegisterRequestRegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequest.RegisterFromCompanion")))
@interface SMAPICPostLoginRegisterRequestRegisterFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegisterRequestRegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf")))
@interface SMAPICPostLoginRegisterRequestOneOf : SMAPICBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password registerFrom:(SMAPICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable)registerFrom __attribute__((swift_name("init(email:password:registerFrom:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostLoginRegisterRequestOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostLoginRegisterRequestOneOf *)doCopyEmail:(NSString *)email password:(NSString *)password registerFrom:(SMAPICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable)registerFrom __attribute__((swift_name("doCopy(email:password:registerFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="register_from")
*/
@property (readonly) SMAPICPostLoginRegisterRequestOneOfRegisterFrom * _Nullable registerFrom __attribute__((swift_name("registerFrom")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.Companion")))
@interface SMAPICPostLoginRegisterRequestOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegisterRequestOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.RegisterFrom")))
@interface SMAPICPostLoginRegisterRequestOneOfRegisterFrom : SMAPICKotlinEnum<SMAPICPostLoginRegisterRequestOneOfRegisterFrom *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostLoginRegisterRequestOneOfRegisterFromCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostLoginRegisterRequestOneOfRegisterFrom *email __attribute__((swift_name("email")));
+ (SMAPICKotlinArray<SMAPICPostLoginRegisterRequestOneOfRegisterFrom *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostLoginRegisterRequestOneOfRegisterFrom *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostLoginRegisterRequestOneOf.RegisterFromCompanion")))
@interface SMAPICPostLoginRegisterRequestOneOfRegisterFromCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostLoginRegisterRequestOneOfRegisterFromCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200Response")))
@interface SMAPICPostMusicCreate200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicCreate200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicCreate200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicCreate200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicCreate200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicCreate200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200Response.Companion")))
@interface SMAPICPostMusicCreate200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicCreate200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseData")))
@interface SMAPICPostMusicCreate200ResponseData : SMAPICBase
- (instancetype)initWithStatus:(SMAPICInt * _Nullable)status musicId:(SMAPICInt * _Nullable)musicId mockData:(SMAPICPostMusicCreate200ResponseDataMockData * _Nullable)mockData __attribute__((swift_name("init(status:musicId:mockData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicCreate200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicCreate200ResponseData *)doCopyStatus:(SMAPICInt * _Nullable)status musicId:(SMAPICInt * _Nullable)musicId mockData:(SMAPICPostMusicCreate200ResponseDataMockData * _Nullable)mockData __attribute__((swift_name("doCopy(status:musicId:mockData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mock_data")
*/
@property (readonly) SMAPICPostMusicCreate200ResponseDataMockData * _Nullable mockData __attribute__((swift_name("mockData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) SMAPICInt * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseData.Companion")))
@interface SMAPICPostMusicCreate200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicCreate200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseDataMockData")))
@interface SMAPICPostMusicCreate200ResponseDataMockData : SMAPICBase
- (instancetype)initWithFormat:(NSString * _Nullable)format duration:(SMAPICInt * _Nullable)duration audioUrl:(NSString * _Nullable)audioUrl coverUrl:(NSString * _Nullable)coverUrl fileSize:(NSString * _Nullable)fileSize createdAt:(SMAPICKotlinx_datetimeInstant * _Nullable)createdAt likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("init(format:duration:audioUrl:coverUrl:fileSize:createdAt:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicCreate200ResponseDataMockDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicCreate200ResponseDataMockData *)doCopyFormat:(NSString * _Nullable)format duration:(SMAPICInt * _Nullable)duration audioUrl:(NSString * _Nullable)audioUrl coverUrl:(NSString * _Nullable)coverUrl fileSize:(NSString * _Nullable)fileSize createdAt:(SMAPICKotlinx_datetimeInstant * _Nullable)createdAt likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(format:duration:audioUrl:coverUrl:fileSize:createdAt:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="audio_url")
*/
@property (readonly) NSString * _Nullable audioUrl __attribute__((swift_name("audioUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_url")
*/
@property (readonly) NSString * _Nullable coverUrl __attribute__((swift_name("coverUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) SMAPICKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/
@property (readonly) SMAPICInt * _Nullable duration __attribute__((swift_name("duration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="file_size")
*/
@property (readonly) NSString * _Nullable fileSize __attribute__((swift_name("fileSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property (readonly) NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) SMAPICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreate200ResponseDataMockData.Companion")))
@interface SMAPICPostMusicCreate200ResponseDataMockDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicCreate200ResponseDataMockDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreateRequest")))
@interface SMAPICPostMusicCreateRequest : SMAPICBase
- (instancetype)initWithMood:(NSArray<SMAPICInt *> * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSArray<SMAPICInt *> * _Nullable)style title:(NSString * _Nullable)title lyrics:(NSString * _Nullable)lyrics language:(NSArray<SMAPICInt *> * _Nullable)language instrument:(NSArray<SMAPICInt *> * _Nullable)instrument isInstrumental:(SMAPICInt * _Nullable)isInstrumental introPicMediaId:(SMAPICInt * _Nullable)introPicMediaId introVoiceMediaId:(SMAPICInt * _Nullable)introVoiceMediaId __attribute__((swift_name("init(mood:intro:style:title:lyrics:language:instrument:isInstrumental:introPicMediaId:introVoiceMediaId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicCreateRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicCreateRequest *)doCopyMood:(NSArray<SMAPICInt *> * _Nullable)mood intro:(NSString * _Nullable)intro style:(NSArray<SMAPICInt *> * _Nullable)style title:(NSString * _Nullable)title lyrics:(NSString * _Nullable)lyrics language:(NSArray<SMAPICInt *> * _Nullable)language instrument:(NSArray<SMAPICInt *> * _Nullable)instrument isInstrumental:(SMAPICInt * _Nullable)isInstrumental introPicMediaId:(SMAPICInt * _Nullable)introPicMediaId introVoiceMediaId:(SMAPICInt * _Nullable)introVoiceMediaId __attribute__((swift_name("doCopy(mood:intro:style:title:lyrics:language:instrument:isInstrumental:introPicMediaId:introVoiceMediaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="instrument")
*/
@property (readonly) NSArray<SMAPICInt *> * _Nullable instrument __attribute__((swift_name("instrument")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro")
*/
@property (readonly) NSString * _Nullable intro __attribute__((swift_name("intro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_pic_media_id")
*/
@property (readonly) SMAPICInt * _Nullable introPicMediaId __attribute__((swift_name("introPicMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="intro_voice_media_id")
*/
@property (readonly) SMAPICInt * _Nullable introVoiceMediaId __attribute__((swift_name("introVoiceMediaId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_instrumental")
*/
@property (readonly) SMAPICInt * _Nullable isInstrumental __attribute__((swift_name("isInstrumental")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property (readonly) NSArray<SMAPICInt *> * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lyrics")
*/
@property (readonly) NSString * _Nullable lyrics __attribute__((swift_name("lyrics")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mood")
*/
@property (readonly) NSArray<SMAPICInt *> * _Nullable mood __attribute__((swift_name("mood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="style")
*/
@property (readonly) NSArray<SMAPICInt *> * _Nullable style __attribute__((swift_name("style")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicCreateRequest.Companion")))
@interface SMAPICPostMusicCreateRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicCreateRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200Response")))
@interface SMAPICPostMusicDelete200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicDelete200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDelete200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDelete200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicDelete200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicDelete200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200Response.Companion")))
@interface SMAPICPostMusicDelete200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDelete200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOf")))
@interface SMAPICPostMusicDelete200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicDelete200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDelete200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDelete200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicDelete200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicDelete200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOf.Companion")))
@interface SMAPICPostMusicDelete200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDelete200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOf1")))
@interface SMAPICPostMusicDelete200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDelete200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDelete200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOf1.Companion")))
@interface SMAPICPostMusicDelete200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDelete200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOfData")))
@interface SMAPICPostMusicDelete200ResponseOneOfData : SMAPICBase
- (instancetype)initWithDeleted:(SMAPICBoolean * _Nullable)deleted message:(NSString * _Nullable)message musicId:(SMAPICInt * _Nullable)musicId __attribute__((swift_name("init(deleted:message:musicId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDelete200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDelete200ResponseOneOfData *)doCopyDeleted:(SMAPICBoolean * _Nullable)deleted message:(NSString * _Nullable)message musicId:(SMAPICInt * _Nullable)musicId __attribute__((swift_name("doCopy(deleted:message:musicId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/
@property (readonly) SMAPICBoolean * _Nullable deleted __attribute__((swift_name("deleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDelete200ResponseOneOfData.Companion")))
@interface SMAPICPostMusicDelete200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDelete200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200Response")))
@interface SMAPICPostMusicDownload200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicDownload200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDownload200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDownload200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicDownload200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicDownload200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200Response.Companion")))
@interface SMAPICPostMusicDownload200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDownload200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200ResponseData")))
@interface SMAPICPostMusicDownload200ResponseData : SMAPICBase
- (instancetype)initWithMessage:(NSString * _Nullable)message musicId:(SMAPICInt * _Nullable)musicId downloaded:(SMAPICBoolean * _Nullable)downloaded __attribute__((swift_name("init(message:musicId:downloaded:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicDownload200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicDownload200ResponseData *)doCopyMessage:(NSString * _Nullable)message musicId:(SMAPICInt * _Nullable)musicId downloaded:(SMAPICBoolean * _Nullable)downloaded __attribute__((swift_name("doCopy(message:musicId:downloaded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="downloaded")
*/
@property (readonly) SMAPICBoolean * _Nullable downloaded __attribute__((swift_name("downloaded")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicDownload200ResponseData.Companion")))
@interface SMAPICPostMusicDownload200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicDownload200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200Response")))
@interface SMAPICPostMusicLike200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicLike200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicLike200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicLike200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicLike200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicLike200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200Response.Companion")))
@interface SMAPICPostMusicLike200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicLike200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200ResponseData")))
@interface SMAPICPostMusicLike200ResponseData : SMAPICBase
- (instancetype)initWithIsLiked:(SMAPICBoolean * _Nullable)isLiked musicId:(SMAPICInt * _Nullable)musicId likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("init(isLiked:musicId:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicLike200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicLike200ResponseData *)doCopyIsLiked:(SMAPICBoolean * _Nullable)isLiked musicId:(SMAPICInt * _Nullable)musicId likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(isLiked:musicId:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) SMAPICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) SMAPICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicLike200ResponseData.Companion")))
@interface SMAPICPostMusicLike200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicLike200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200Response")))
@interface SMAPICPostMusicStatus200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicStatus200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicStatus200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicStatus200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicStatus200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicStatus200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200Response.Companion")))
@interface SMAPICPostMusicStatus200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatus200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOf")))
@interface SMAPICPostMusicStatus200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicStatus200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicStatus200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicStatus200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostMusicStatus200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicStatus200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOf.Companion")))
@interface SMAPICPostMusicStatus200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatus200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOf1")))
@interface SMAPICPostMusicStatus200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicStatus200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicStatus200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOf1.Companion")))
@interface SMAPICPostMusicStatus200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatus200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData")))
@interface SMAPICPostMusicStatus200ResponseOneOfData : SMAPICBase
- (instancetype)initWithStatus:(SMAPICPostMusicStatus200ResponseOneOfDataStatus * _Nullable)status musicId:(SMAPICInt * _Nullable)musicId __attribute__((swift_name("init(status:musicId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicStatus200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicStatus200ResponseOneOfData *)doCopyStatus:(SMAPICPostMusicStatus200ResponseOneOfDataStatus * _Nullable)status musicId:(SMAPICInt * _Nullable)musicId __attribute__((swift_name("doCopy(status:musicId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property (readonly) SMAPICPostMusicStatus200ResponseOneOfDataStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.Companion")))
@interface SMAPICPostMusicStatus200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatus200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.Status")))
@interface SMAPICPostMusicStatus200ResponseOneOfDataStatus : SMAPICKotlinEnum<SMAPICPostMusicStatus200ResponseOneOfDataStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostMusicStatus200ResponseOneOfDataStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostMusicStatus200ResponseOneOfDataStatus *generating __attribute__((swift_name("generating")));
@property (class, readonly) SMAPICPostMusicStatus200ResponseOneOfDataStatus *generated __attribute__((swift_name("generated")));
@property (class, readonly) SMAPICPostMusicStatus200ResponseOneOfDataStatus *deleted __attribute__((swift_name("deleted")));
+ (SMAPICKotlinArray<SMAPICPostMusicStatus200ResponseOneOfDataStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostMusicStatus200ResponseOneOfDataStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatus200ResponseOneOfData.StatusCompanion")))
@interface SMAPICPostMusicStatus200ResponseOneOfDataStatusCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatus200ResponseOneOfDataStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatusRequest")))
@interface SMAPICPostMusicStatusRequest : SMAPICBase
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicStatusRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicStatusRequest *)doCopyId:(int32_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicStatusRequest.Companion")))
@interface SMAPICPostMusicStatusRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicStatusRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200Response")))
@interface SMAPICPostMusicUnlike200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicUnlike200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicUnlike200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicUnlike200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostMusicUnlike200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostMusicUnlike200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200Response.Companion")))
@interface SMAPICPostMusicUnlike200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicUnlike200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200ResponseData")))
@interface SMAPICPostMusicUnlike200ResponseData : SMAPICBase
- (instancetype)initWithIsLiked:(SMAPICBoolean * _Nullable)isLiked musicId:(SMAPICInt * _Nullable)musicId likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("init(isLiked:musicId:likeCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostMusicUnlike200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostMusicUnlike200ResponseData *)doCopyIsLiked:(SMAPICBoolean * _Nullable)isLiked musicId:(SMAPICInt * _Nullable)musicId likeCount:(SMAPICInt * _Nullable)likeCount __attribute__((swift_name("doCopy(isLiked:musicId:likeCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_liked")
*/
@property (readonly) SMAPICBoolean * _Nullable isLiked __attribute__((swift_name("isLiked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="like_count")
*/
@property (readonly) SMAPICInt * _Nullable likeCount __attribute__((swift_name("likeCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="music_id")
*/
@property (readonly) SMAPICInt * _Nullable musicId __attribute__((swift_name("musicId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostMusicUnlike200ResponseData.Companion")))
@interface SMAPICPostMusicUnlike200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostMusicUnlike200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200Response")))
@interface SMAPICPostReportSubmit200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostReportSubmit200ResponseData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostReportSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostReportSubmit200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostReportSubmit200ResponseData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostReportSubmit200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200Response.Companion")))
@interface SMAPICPostReportSubmit200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostReportSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200ResponseData")))
@interface SMAPICPostReportSubmit200ResponseData : SMAPICBase
- (instancetype)initWithReportID:(SMAPICInt * _Nullable)reportID message:(NSString * _Nullable)message __attribute__((swift_name("init(reportID:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostReportSubmit200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostReportSubmit200ResponseData *)doCopyReportID:(SMAPICInt * _Nullable)reportID message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(reportID:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="report_id")
*/
@property (readonly) SMAPICInt * _Nullable reportID __attribute__((swift_name("reportID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmit200ResponseData.Companion")))
@interface SMAPICPostReportSubmit200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostReportSubmit200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest")))
@interface SMAPICPostReportSubmitRequest : SMAPICBase
- (instancetype)initWithType:(NSArray<SMAPICPostReportSubmitRequestType *> *)type targetId:(int32_t)targetId url:(NSString * _Nullable)url content:(NSString * _Nullable)content __attribute__((swift_name("init(type:targetId:url:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostReportSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostReportSubmitRequest *)doCopyType:(NSArray<SMAPICPostReportSubmitRequestType *> *)type targetId:(int32_t)targetId url:(NSString * _Nullable)url content:(NSString * _Nullable)content __attribute__((swift_name("doCopy(type:targetId:url:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t targetId __attribute__((swift_name("targetId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSArray<SMAPICPostReportSubmitRequestType *> *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Companion")))
@interface SMAPICPostReportSubmitRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostReportSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Type_")))
@interface SMAPICPostReportSubmitRequestType : SMAPICKotlinEnum<SMAPICPostReportSubmitRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostReportSubmitRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostReportSubmitRequestType *_1 __attribute__((swift_name("_1")));
@property (class, readonly) SMAPICPostReportSubmitRequestType *_2 __attribute__((swift_name("_2")));
@property (class, readonly) SMAPICPostReportSubmitRequestType *_3 __attribute__((swift_name("_3")));
@property (class, readonly) SMAPICPostReportSubmitRequestType *_4 __attribute__((swift_name("_4")));
+ (SMAPICKotlinArray<SMAPICPostReportSubmitRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostReportSubmitRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequest.Type_Companion")))
@interface SMAPICPostReportSubmitRequestTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostReportSubmitRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostReportSubmitRequestTypeSerializer")))
@interface SMAPICPostReportSubmitRequestTypeSerializer : SMAPICBase <SMAPICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)postReportSubmitRequestTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostReportSubmitRequestTypeSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<SMAPICPostReportSubmitRequestType *> *)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(NSArray<SMAPICPostReportSubmitRequestType *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200Response")))
@interface SMAPICPostUploadCreateMedia200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostUploadCreateMedia200ResponseData * _Nullable)data __attribute__((swift_name("init(ok:msg:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadCreateMedia200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadCreateMedia200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg data:(SMAPICPostUploadCreateMedia200ResponseData * _Nullable)data __attribute__((swift_name("doCopy(ok:msg:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostUploadCreateMedia200ResponseData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200Response.Companion")))
@interface SMAPICPostUploadCreateMedia200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadCreateMedia200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200ResponseData")))
@interface SMAPICPostUploadCreateMedia200ResponseData : SMAPICBase
- (instancetype)initWithMediaId:(SMAPICInt * _Nullable)mediaId __attribute__((swift_name("init(mediaId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadCreateMedia200ResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadCreateMedia200ResponseData *)doCopyMediaId:(SMAPICInt * _Nullable)mediaId __attribute__((swift_name("doCopy(mediaId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_id")
*/
@property (readonly) SMAPICInt * _Nullable mediaId __attribute__((swift_name("mediaId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMedia200ResponseData.Companion")))
@interface SMAPICPostUploadCreateMedia200ResponseDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadCreateMedia200ResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest")))
@interface SMAPICPostUploadCreateMediaRequest : SMAPICBase
- (instancetype)initWithUploadId:(int32_t)uploadId mediaType:(int32_t)mediaType __attribute__((swift_name("init(uploadId:mediaType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadCreateMediaRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadCreateMediaRequest *)doCopyUploadId:(int32_t)uploadId mediaType:(int32_t)mediaType __attribute__((swift_name("doCopy(uploadId:mediaType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_type")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t mediaType __attribute__((swift_name("mediaType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="upload_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t uploadId __attribute__((swift_name("uploadId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.Companion")))
@interface SMAPICPostUploadCreateMediaRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadCreateMediaRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.MediaType")))
@interface SMAPICPostUploadCreateMediaRequestMediaType : SMAPICKotlinEnum<SMAPICPostUploadCreateMediaRequestMediaType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostUploadCreateMediaRequestMediaTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostUploadCreateMediaRequestMediaType *image __attribute__((swift_name("image")));
@property (class, readonly) SMAPICPostUploadCreateMediaRequestMediaType *video __attribute__((swift_name("video")));
@property (class, readonly) SMAPICPostUploadCreateMediaRequestMediaType *audio __attribute__((swift_name("audio")));
@property (class, readonly) SMAPICPostUploadCreateMediaRequestMediaType *music __attribute__((swift_name("music")));
+ (SMAPICKotlinArray<SMAPICPostUploadCreateMediaRequestMediaType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostUploadCreateMediaRequestMediaType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadCreateMediaRequest.MediaTypeCompanion")))
@interface SMAPICPostUploadCreateMediaRequestMediaTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadCreateMediaRequestMediaTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresigned200Response")))
@interface SMAPICPostUploadPresigned200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICUploadPresignedData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresigned200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresigned200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICUploadPresignedData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICUploadPresignedData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresigned200Response.Companion")))
@interface SMAPICPostUploadPresigned200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresigned200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response")))
@interface SMAPICPostUploadPresignedList200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedList200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedList200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostUploadPresignedList200ResponseUploadPresignedListData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.Companion")))
@interface SMAPICPostUploadPresignedList200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedList200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.UploadPresignedListData")))
@interface SMAPICPostUploadPresignedList200ResponseUploadPresignedListData : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICUploadPresignedData *> *)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedList200ResponseUploadPresignedListData *)doCopyList:(NSArray<SMAPICUploadPresignedData *> *)list __attribute__((swift_name("doCopy(list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SMAPICUploadPresignedData *> *list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedList200Response.UploadPresignedListDataCompanion")))
@interface SMAPICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedList200ResponseUploadPresignedListDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest")))
@interface SMAPICPostUploadPresignedRequest : SMAPICBase
- (instancetype)initWithFlag:(SMAPICPostUploadPresignedRequestFlag *)flag list:(NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable)list md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:list:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedRequest *)doCopyFlag:(SMAPICPostUploadPresignedRequestFlag *)flag list:(NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable)list md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:list:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostUploadPresignedRequestFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) SMAPICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
*/
@property (readonly) NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> * _Nullable list __attribute__((swift_name("list")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) SMAPICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) SMAPICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) SMAPICPostUploadPresignedRequestType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) SMAPICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Companion")))
@interface SMAPICPostUploadPresignedRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Flag")))
@interface SMAPICPostUploadPresignedRequestFlag : SMAPICKotlinEnum<SMAPICPostUploadPresignedRequestFlag *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestFlagCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostUploadPresignedRequestFlag *avatar __attribute__((swift_name("avatar")));
@property (class, readonly) SMAPICPostUploadPresignedRequestFlag *feedback __attribute__((swift_name("feedback")));
@property (class, readonly) SMAPICPostUploadPresignedRequestFlag *aiPromptCover __attribute__((swift_name("aiPromptCover")));
@property (class, readonly) SMAPICPostUploadPresignedRequestFlag *aiPromptVoice __attribute__((swift_name("aiPromptVoice")));
+ (SMAPICKotlinArray<SMAPICPostUploadPresignedRequestFlag *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostUploadPresignedRequestFlag *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.FlagCompanion")))
@interface SMAPICPostUploadPresignedRequestFlagCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/sakurasou/ios/bxh/sonar/apiclient/client/models/PostUploadPresignedRequest.Type.Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_")))
@interface SMAPICPostUploadPresignedRequestType : SMAPICKotlinEnum<SMAPICPostUploadPresignedRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostUploadPresignedRequestType *image __attribute__((swift_name("image")));
@property (class, readonly) SMAPICPostUploadPresignedRequestType *video __attribute__((swift_name("video")));
@property (class, readonly) SMAPICPostUploadPresignedRequestType *voice __attribute__((swift_name("voice")));
+ (SMAPICKotlinArray<SMAPICPostUploadPresignedRequestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostUploadPresignedRequestType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_Companion")))
@interface SMAPICPostUploadPresignedRequestTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequest.Type_Serializer")))
@interface SMAPICPostUploadPresignedRequestTypeSerializer : SMAPICBase <SMAPICKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestTypeSerializer *shared __attribute__((swift_name("shared")));
- (SMAPICPostUploadPresignedRequestType *)deserializeDecoder:(id<SMAPICKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SMAPICKotlinx_serialization_coreEncoder>)encoder value:(SMAPICPostUploadPresignedRequestType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SMAPICKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf")))
@interface SMAPICPostUploadPresignedRequestOneOf : SMAPICBase
- (instancetype)initWithFlag:(SMAPICPostUploadPresignedRequestOneOfFlag *)flag md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestOneOfType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedRequestOneOf *)doCopyFlag:(SMAPICPostUploadPresignedRequestOneOfFlag *)flag md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestOneOfType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostUploadPresignedRequestOneOfFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) SMAPICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) SMAPICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) SMAPICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) SMAPICPostUploadPresignedRequestOneOfType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) SMAPICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Companion")))
@interface SMAPICPostUploadPresignedRequestOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Flag")))
@interface SMAPICPostUploadPresignedRequestOneOfFlag : SMAPICKotlinEnum<SMAPICPostUploadPresignedRequestOneOfFlag *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestOneOfFlagCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostUploadPresignedRequestOneOfFlag *avatar __attribute__((swift_name("avatar")));
@property (class, readonly) SMAPICPostUploadPresignedRequestOneOfFlag *aiPromptCover __attribute__((swift_name("aiPromptCover")));
+ (SMAPICKotlinArray<SMAPICPostUploadPresignedRequestOneOfFlag *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostUploadPresignedRequestOneOfFlag *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.FlagCompanion")))
@interface SMAPICPostUploadPresignedRequestOneOfFlagCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestOneOfFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Type_")))
@interface SMAPICPostUploadPresignedRequestOneOfType : SMAPICKotlinEnum<SMAPICPostUploadPresignedRequestOneOfType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestOneOfTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostUploadPresignedRequestOneOfType *_1 __attribute__((swift_name("_1")));
@property (class, readonly) SMAPICPostUploadPresignedRequestOneOfType *_2 __attribute__((swift_name("_2")));
@property (class, readonly) SMAPICPostUploadPresignedRequestOneOfType *_3 __attribute__((swift_name("_3")));
+ (SMAPICKotlinArray<SMAPICPostUploadPresignedRequestOneOfType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostUploadPresignedRequestOneOfType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf.Type_Companion")))
@interface SMAPICPostUploadPresignedRequestOneOfTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestOneOfTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1")))
@interface SMAPICPostUploadPresignedRequestOneOf1 : SMAPICBase
- (instancetype)initWithList:(NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> *)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedRequestOneOf1 *)doCopyList:(NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> *)list __attribute__((swift_name("doCopy(list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="list")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSArray<SMAPICPostUploadPresignedRequestOneOf1ListInner *> *list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1.Companion")))
@interface SMAPICPostUploadPresignedRequestOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1ListInner")))
@interface SMAPICPostUploadPresignedRequestOneOf1ListInner : SMAPICBase
- (instancetype)initWithFlag:(SMAPICPostUploadPresignedRequestFlag *)flag md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("init(flag:md5:type:width:height:imgType:outWidth:outHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadPresignedRequestOneOf1ListInnerCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadPresignedRequestOneOf1ListInner *)doCopyFlag:(SMAPICPostUploadPresignedRequestFlag *)flag md5:(NSString * _Nullable)md5 type:(SMAPICPostUploadPresignedRequestType * _Nullable)type width:(SMAPICInt * _Nullable)width height:(SMAPICInt * _Nullable)height imgType:(NSString * _Nullable)imgType outWidth:(SMAPICInt * _Nullable)outWidth outHeight:(SMAPICInt * _Nullable)outHeight __attribute__((swift_name("doCopy(flag:md5:type:width:height:imgType:outWidth:outHeight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flag")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICPostUploadPresignedRequestFlag *flag __attribute__((swift_name("flag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="height")
*/
@property (readonly) SMAPICInt * _Nullable height __attribute__((swift_name("height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="img_type")
*/
@property (readonly) NSString * _Nullable imgType __attribute__((swift_name("imgType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="md5")
*/
@property (readonly) NSString * _Nullable md5 __attribute__((swift_name("md5")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_height")
*/
@property (readonly) SMAPICInt * _Nullable outHeight __attribute__((swift_name("outHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="out_width")
*/
@property (readonly) SMAPICInt * _Nullable outWidth __attribute__((swift_name("outWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property (readonly) SMAPICPostUploadPresignedRequestType * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="width")
*/
@property (readonly) SMAPICInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadPresignedRequestOneOf1ListInner.Companion")))
@interface SMAPICPostUploadPresignedRequestOneOf1ListInnerCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadPresignedRequestOneOf1ListInnerCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200Response")))
@interface SMAPICPostUploadSuccess200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadSuccess200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadSuccess200Response *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200Response.Companion")))
@interface SMAPICPostUploadSuccess200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadSuccess200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200ResponseOneOf")))
@interface SMAPICPostUploadSuccess200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadSuccess200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadSuccess200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200ResponseOneOf.Companion")))
@interface SMAPICPostUploadSuccess200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadSuccess200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200ResponseOneOf1")))
@interface SMAPICPostUploadSuccess200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadSuccess200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadSuccess200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccess200ResponseOneOf1.Companion")))
@interface SMAPICPostUploadSuccess200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadSuccess200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccessRequest")))
@interface SMAPICPostUploadSuccessRequest : SMAPICBase
- (instancetype)initWithId:(NSArray<SMAPICInt *> *)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostUploadSuccessRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostUploadSuccessRequest *)doCopyId:(NSArray<SMAPICInt *> *)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSArray<SMAPICInt *> *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostUploadSuccessRequest.Companion")))
@interface SMAPICPostUploadSuccessRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostUploadSuccessRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200Response")))
@interface SMAPICPostVipSubmit200Response : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostVipSubmit200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:data:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmit200Response *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostVipSubmit200ResponseOneOfData * _Nullable)data msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:data:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostVipSubmit200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200Response.Companion")))
@interface SMAPICPostVipSubmit200ResponseCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOf")))
@interface SMAPICPostVipSubmit200ResponseOneOf : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostVipSubmit200ResponseOneOfData * _Nullable)data __attribute__((swift_name("init(ok:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseOneOfCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmit200ResponseOneOf *)doCopyOk:(SMAPICInt * _Nullable)ok data:(SMAPICPostVipSubmit200ResponseOneOfData * _Nullable)data __attribute__((swift_name("doCopy(ok:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property (readonly) SMAPICPostVipSubmit200ResponseOneOfData * _Nullable data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOf.Companion")))
@interface SMAPICPostVipSubmit200ResponseOneOfCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseOneOfCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOf1")))
@interface SMAPICPostVipSubmit200ResponseOneOf1 : SMAPICBase
- (instancetype)initWithOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("init(ok:msg:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseOneOf1Companion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmit200ResponseOneOf1 *)doCopyOk:(SMAPICInt * _Nullable)ok msg:(NSString * _Nullable)msg __attribute__((swift_name("doCopy(ok:msg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg")
*/
@property (readonly) NSString * _Nullable msg __attribute__((swift_name("msg")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property (readonly) SMAPICInt * _Nullable ok __attribute__((swift_name("ok")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOf1.Companion")))
@interface SMAPICPostVipSubmit200ResponseOneOf1Companion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseOneOf1Companion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfData")))
@interface SMAPICPostVipSubmit200ResponseOneOfData : SMAPICBase
- (instancetype)initWithBalance:(SMAPICLong * _Nullable)balance userInfo:(SMAPICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("init(balance:userInfo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseOneOfDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmit200ResponseOneOfData *)doCopyBalance:(SMAPICLong * _Nullable)balance userInfo:(SMAPICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable)userInfo __attribute__((swift_name("doCopy(balance:userInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) SMAPICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_info")
*/
@property (readonly) SMAPICPostVipSubmit200ResponseOneOfDataUserInfo * _Nullable userInfo __attribute__((swift_name("userInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfData.Companion")))
@interface SMAPICPostVipSubmit200ResponseOneOfDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseOneOfDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo")))
@interface SMAPICPostVipSubmit200ResponseOneOfDataUserInfo : SMAPICBase
- (instancetype)initWithEmail:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar isVip:(SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable)isVip balance:(SMAPICLong * _Nullable)balance vipExp:(SMAPICLong * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("init(email:avatar:isVip:balance:vipExp:nickname:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmit200ResponseOneOfDataUserInfo *)doCopyEmail:(NSString * _Nullable)email avatar:(NSString * _Nullable)avatar isVip:(SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable)isVip balance:(SMAPICLong * _Nullable)balance vipExp:(SMAPICLong * _Nullable)vipExp nickname:(NSString * _Nullable)nickname __attribute__((swift_name("doCopy(email:avatar:isVip:balance:vipExp:nickname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/
@property (readonly) SMAPICLong * _Nullable balance __attribute__((swift_name("balance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_vip")
*/
@property (readonly) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip * _Nullable isVip __attribute__((swift_name("isVip")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vip_exp")
*/
@property (readonly) SMAPICLong * _Nullable vipExp __attribute__((swift_name("vipExp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.Companion")))
@interface SMAPICPostVipSubmit200ResponseOneOfDataUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.IsVip")))
@interface SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip : SMAPICKotlinEnum<SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *_0 __attribute__((swift_name("_0")));
@property (class, readonly) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *_1 __attribute__((swift_name("_1")));
+ (SMAPICKotlinArray<SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVip *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmit200ResponseOneOfDataUserInfo.IsVipCompanion")))
@interface SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmit200ResponseOneOfDataUserInfoIsVipCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmitRequest")))
@interface SMAPICPostVipSubmitRequest : SMAPICBase
- (instancetype)initWithGoodsId:(int32_t)goodsId __attribute__((swift_name("init(goodsId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICPostVipSubmitRequestCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICPostVipSubmitRequest *)doCopyGoodsId:(int32_t)goodsId __attribute__((swift_name("doCopy(goodsId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goods_id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t goodsId __attribute__((swift_name("goodsId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostVipSubmitRequest.Companion")))
@interface SMAPICPostVipSubmitRequestCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICPostVipSubmitRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData")))
@interface SMAPICUploadPresignedData : SMAPICBase
- (instancetype)initWithDir:(SMAPICUploadPresignedDataDir *)dir isUpload:(SMAPICUploadPresignedDataIsUpload * _Nullable)isUpload uploadId:(SMAPICInt * _Nullable)uploadId presignedPost:(SMAPICUploadPresignedDataPresignedPost * _Nullable)presignedPost coverUrl:(NSString * _Nullable)coverUrl smallUrl:(NSString * _Nullable)smallUrl coverPresignedPost:(SMAPICUploadPresignedDataCoverPresignedPost * _Nullable)coverPresignedPost filePath:(NSString * _Nullable)filePath __attribute__((swift_name("init(dir:isUpload:uploadId:presignedPost:coverUrl:smallUrl:coverPresignedPost:filePath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUploadPresignedData *)doCopyDir:(SMAPICUploadPresignedDataDir *)dir isUpload:(SMAPICUploadPresignedDataIsUpload * _Nullable)isUpload uploadId:(SMAPICInt * _Nullable)uploadId presignedPost:(SMAPICUploadPresignedDataPresignedPost * _Nullable)presignedPost coverUrl:(NSString * _Nullable)coverUrl smallUrl:(NSString * _Nullable)smallUrl coverPresignedPost:(SMAPICUploadPresignedDataCoverPresignedPost * _Nullable)coverPresignedPost filePath:(NSString * _Nullable)filePath __attribute__((swift_name("doCopy(dir:isUpload:uploadId:presignedPost:coverUrl:smallUrl:coverPresignedPost:filePath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_presigned_post")
*/
@property (readonly) SMAPICUploadPresignedDataCoverPresignedPost * _Nullable coverPresignedPost __attribute__((swift_name("coverPresignedPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_url")
*/
@property (readonly) NSString * _Nullable coverUrl __attribute__((swift_name("coverUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="dir")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICUploadPresignedDataDir *dir __attribute__((swift_name("dir")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="file_path")
*/
@property (readonly) NSString * _Nullable filePath __attribute__((swift_name("filePath")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_upload")
*/
@property (readonly) SMAPICUploadPresignedDataIsUpload * _Nullable isUpload __attribute__((swift_name("isUpload")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="presigned_post")
*/
@property (readonly) SMAPICUploadPresignedDataPresignedPost * _Nullable presignedPost __attribute__((swift_name("presignedPost")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="small_url")
*/
@property (readonly) NSString * _Nullable smallUrl __attribute__((swift_name("smallUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="upload_id")
*/
@property (readonly) SMAPICInt * _Nullable uploadId __attribute__((swift_name("uploadId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.Companion")))
@interface SMAPICUploadPresignedDataCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.IsUpload")))
@interface SMAPICUploadPresignedDataIsUpload : SMAPICKotlinEnum<SMAPICUploadPresignedDataIsUpload *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataIsUploadCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICUploadPresignedDataIsUpload *no __attribute__((swift_name("no")));
@property (class, readonly) SMAPICUploadPresignedDataIsUpload *yes __attribute__((swift_name("yes")));
+ (SMAPICKotlinArray<SMAPICUploadPresignedDataIsUpload *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICUploadPresignedDataIsUpload *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedData.IsUploadCompanion")))
@interface SMAPICUploadPresignedDataIsUploadCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataIsUploadCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost")))
@interface SMAPICUploadPresignedDataCoverPresignedPost : SMAPICBase
- (instancetype)initWithUrl:(NSString * _Nullable)url fields:(NSString * _Nullable)fields method:(SMAPICUploadPresignedDataCoverPresignedPostMethod * _Nullable)method enctype:(SMAPICUploadPresignedDataCoverPresignedPostEnctype * _Nullable)enctype __attribute__((swift_name("init(url:fields:method:enctype:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataCoverPresignedPostCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUploadPresignedDataCoverPresignedPost *)doCopyUrl:(NSString * _Nullable)url fields:(NSString * _Nullable)fields method:(SMAPICUploadPresignedDataCoverPresignedPostMethod * _Nullable)method enctype:(SMAPICUploadPresignedDataCoverPresignedPostEnctype * _Nullable)enctype __attribute__((swift_name("doCopy(url:fields:method:enctype:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enctype")
*/
@property (readonly) SMAPICUploadPresignedDataCoverPresignedPostEnctype * _Nullable enctype __attribute__((swift_name("enctype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/
@property (readonly) NSString * _Nullable fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="method")
*/
@property (readonly) SMAPICUploadPresignedDataCoverPresignedPostMethod * _Nullable method __attribute__((swift_name("method")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Companion")))
@interface SMAPICUploadPresignedDataCoverPresignedPostCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataCoverPresignedPostCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Enctype")))
@interface SMAPICUploadPresignedDataCoverPresignedPostEnctype : SMAPICKotlinEnum<SMAPICUploadPresignedDataCoverPresignedPostEnctype *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataCoverPresignedPostEnctypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICUploadPresignedDataCoverPresignedPostEnctype *multipartslashformminusdata __attribute__((swift_name("multipartslashformminusdata")));
+ (SMAPICKotlinArray<SMAPICUploadPresignedDataCoverPresignedPostEnctype *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICUploadPresignedDataCoverPresignedPostEnctype *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.EnctypeCompanion")))
@interface SMAPICUploadPresignedDataCoverPresignedPostEnctypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataCoverPresignedPostEnctypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.Method")))
@interface SMAPICUploadPresignedDataCoverPresignedPostMethod : SMAPICKotlinEnum<SMAPICUploadPresignedDataCoverPresignedPostMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataCoverPresignedPostMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICUploadPresignedDataCoverPresignedPostMethod *post __attribute__((swift_name("post")));
+ (SMAPICKotlinArray<SMAPICUploadPresignedDataCoverPresignedPostMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICUploadPresignedDataCoverPresignedPostMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataCoverPresignedPost.MethodCompanion")))
@interface SMAPICUploadPresignedDataCoverPresignedPostMethodCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataCoverPresignedPostMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataDir")))
@interface SMAPICUploadPresignedDataDir : SMAPICBase
- (instancetype)initWithPath:(NSString *)path smallUrl:(NSString * _Nullable)smallUrl coverPath:(NSString * _Nullable)coverPath __attribute__((swift_name("init(path:smallUrl:coverPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataDirCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUploadPresignedDataDir *)doCopyPath:(NSString *)path smallUrl:(NSString * _Nullable)smallUrl coverPath:(NSString * _Nullable)coverPath __attribute__((swift_name("doCopy(path:smallUrl:coverPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="cover_path")
*/
@property (readonly) NSString * _Nullable coverPath __attribute__((swift_name("coverPath")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="path")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *path __attribute__((swift_name("path")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="small_url")
*/
@property (readonly) NSString * _Nullable smallUrl __attribute__((swift_name("smallUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataDir.Companion")))
@interface SMAPICUploadPresignedDataDirCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataDirCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost")))
@interface SMAPICUploadPresignedDataPresignedPost : SMAPICBase
- (instancetype)initWithUrl:(NSString *)url fields:(SMAPICUploadPresignedDataPresignedPostFields *)fields method:(SMAPICUploadPresignedDataPresignedPostMethod *)method enctype:(SMAPICUploadPresignedDataPresignedPostEnctype *)enctype __attribute__((swift_name("init(url:fields:method:enctype:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataPresignedPostCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUploadPresignedDataPresignedPost *)doCopyUrl:(NSString *)url fields:(SMAPICUploadPresignedDataPresignedPostFields *)fields method:(SMAPICUploadPresignedDataPresignedPostMethod *)method enctype:(SMAPICUploadPresignedDataPresignedPostEnctype *)enctype __attribute__((swift_name("doCopy(url:fields:method:enctype:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enctype")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICUploadPresignedDataPresignedPostEnctype *enctype __attribute__((swift_name("enctype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICUploadPresignedDataPresignedPostFields *fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="method")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICUploadPresignedDataPresignedPostMethod *method __attribute__((swift_name("method")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Companion")))
@interface SMAPICUploadPresignedDataPresignedPostCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataPresignedPostCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Enctype")))
@interface SMAPICUploadPresignedDataPresignedPostEnctype : SMAPICKotlinEnum<SMAPICUploadPresignedDataPresignedPostEnctype *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataPresignedPostEnctypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICUploadPresignedDataPresignedPostEnctype *multipartslashformminusdata __attribute__((swift_name("multipartslashformminusdata")));
+ (SMAPICKotlinArray<SMAPICUploadPresignedDataPresignedPostEnctype *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICUploadPresignedDataPresignedPostEnctype *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.EnctypeCompanion")))
@interface SMAPICUploadPresignedDataPresignedPostEnctypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataPresignedPostEnctypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.Method")))
@interface SMAPICUploadPresignedDataPresignedPostMethod : SMAPICKotlinEnum<SMAPICUploadPresignedDataPresignedPostMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataPresignedPostMethodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICUploadPresignedDataPresignedPostMethod *post __attribute__((swift_name("post")));
+ (SMAPICKotlinArray<SMAPICUploadPresignedDataPresignedPostMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICUploadPresignedDataPresignedPostMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPost.MethodCompanion")))
@interface SMAPICUploadPresignedDataPresignedPostMethodCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataPresignedPostMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPostFields")))
@interface SMAPICUploadPresignedDataPresignedPostFields : SMAPICBase
- (instancetype)initWithKey:(NSString *)key policy:(NSString *)policy xAmzDate:(NSString *)xAmzDate contentType:(NSString *)contentType xAmzAlgorithm:(NSString *)xAmzAlgorithm xAmzSignature:(NSString *)xAmzSignature xAmzCredential:(NSString *)xAmzCredential __attribute__((swift_name("init(key:policy:xAmzDate:contentType:xAmzAlgorithm:xAmzSignature:xAmzCredential:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUploadPresignedDataPresignedPostFieldsCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUploadPresignedDataPresignedPostFields *)doCopyKey:(NSString *)key policy:(NSString *)policy xAmzDate:(NSString *)xAmzDate contentType:(NSString *)contentType xAmzAlgorithm:(NSString *)xAmzAlgorithm xAmzSignature:(NSString *)xAmzSignature xAmzCredential:(NSString *)xAmzCredential __attribute__((swift_name("doCopy(key:policy:xAmzDate:contentType:xAmzAlgorithm:xAmzSignature:xAmzCredential:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Content-Type")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="key")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *key __attribute__((swift_name("key")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="Policy")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *policy __attribute__((swift_name("policy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Algorithm")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzAlgorithm __attribute__((swift_name("xAmzAlgorithm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Credential")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzCredential __attribute__((swift_name("xAmzCredential")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Date")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzDate __attribute__((swift_name("xAmzDate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="X-Amz-Signature")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *xAmzSignature __attribute__((swift_name("xAmzSignature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadPresignedDataPresignedPostFields.Companion")))
@interface SMAPICUploadPresignedDataPresignedPostFieldsCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUploadPresignedDataPresignedPostFieldsCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo")))
@interface SMAPICUserInfo : SMAPICBase
- (instancetype)initWithUid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname checkingFace:(SMAPICBoolean * _Nullable)checkingFace checkingName:(SMAPICBoolean * _Nullable)checkingName __attribute__((swift_name("init(uid:avatar:nickname:checkingFace:checkingName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICUserInfoCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICUserInfo *)doCopyUid:(SMAPICInt * _Nullable)uid avatar:(NSString * _Nullable)avatar nickname:(NSString * _Nullable)nickname checkingFace:(SMAPICBoolean * _Nullable)checkingFace checkingName:(SMAPICBoolean * _Nullable)checkingName __attribute__((swift_name("doCopy(uid:avatar:nickname:checkingFace:checkingName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_face")
*/
@property (readonly) SMAPICBoolean * _Nullable checkingFace __attribute__((swift_name("checkingFace")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="checking_name")
*/
@property (readonly) SMAPICBoolean * _Nullable checkingName __attribute__((swift_name("checkingName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nickname")
*/
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uid")
*/
@property (readonly) SMAPICInt * _Nullable uid __attribute__((swift_name("uid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserInfo.Companion")))
@interface SMAPICUserInfoCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICUserInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage")))
@interface SMAPICVipPackage : SMAPICBase
- (instancetype)initWithId:(int32_t)id sku:(NSString *)sku days:(int32_t)days price:(NSString *)price title:(NSString *)title period:(SMAPICVipPackagePeriod *)period productType:(SMAPICVipPackageProductType *)productType currency:(NSString * _Nullable)currency subtitle:(NSString * _Nullable)subtitle isPopular:(SMAPICBoolean * _Nullable)isPopular coinsReward:(SMAPICVipPackageCoinsReward * _Nullable)coinsReward originalPrice:(NSString * _Nullable)originalPrice privilegeList:(NSArray<NSString *> * _Nullable)privilegeList discountPercentage:(SMAPICInt * _Nullable)discountPercentage __attribute__((swift_name("init(id:sku:days:price:title:period:productType:currency:subtitle:isPopular:coinsReward:originalPrice:privilegeList:discountPercentage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICVipPackageCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICVipPackage *)doCopyId:(int32_t)id sku:(NSString *)sku days:(int32_t)days price:(NSString *)price title:(NSString *)title period:(SMAPICVipPackagePeriod *)period productType:(SMAPICVipPackageProductType *)productType currency:(NSString * _Nullable)currency subtitle:(NSString * _Nullable)subtitle isPopular:(SMAPICBoolean * _Nullable)isPopular coinsReward:(SMAPICVipPackageCoinsReward * _Nullable)coinsReward originalPrice:(NSString * _Nullable)originalPrice privilegeList:(NSArray<NSString *> * _Nullable)privilegeList discountPercentage:(SMAPICInt * _Nullable)discountPercentage __attribute__((swift_name("doCopy(id:sku:days:price:title:period:productType:currency:subtitle:isPopular:coinsReward:originalPrice:privilegeList:discountPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coins_reward")
*/
@property (readonly) SMAPICVipPackageCoinsReward * _Nullable coinsReward __attribute__((swift_name("coinsReward")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="days")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t days __attribute__((swift_name("days")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discount_percentage")
*/
@property (readonly) SMAPICInt * _Nullable discountPercentage __attribute__((swift_name("discountPercentage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/
@property (readonly) int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_popular")
*/
@property (readonly) SMAPICBoolean * _Nullable isPopular __attribute__((swift_name("isPopular")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_price")
*/
@property (readonly) NSString * _Nullable originalPrice __attribute__((swift_name("originalPrice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="period")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICVipPackagePeriod *period __attribute__((swift_name("period")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="price")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *price __attribute__((swift_name("price")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="privilege_list")
*/
@property (readonly) NSArray<NSString *> * _Nullable privilegeList __attribute__((swift_name("privilegeList")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="product_type")
 *   kotlinx.serialization.Required
*/
@property (readonly) SMAPICVipPackageProductType *productType __attribute__((swift_name("productType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sku")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *sku __attribute__((swift_name("sku")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subtitle")
*/
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
 *   kotlinx.serialization.Required
*/
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.Companion")))
@interface SMAPICVipPackageCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICVipPackageCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.Period")))
@interface SMAPICVipPackagePeriod : SMAPICKotlinEnum<SMAPICVipPackagePeriod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICVipPackagePeriodCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICVipPackagePeriod *yearly __attribute__((swift_name("yearly")));
@property (class, readonly) SMAPICVipPackagePeriod *monthly __attribute__((swift_name("monthly")));
@property (class, readonly) SMAPICVipPackagePeriod *weekly __attribute__((swift_name("weekly")));
+ (SMAPICKotlinArray<SMAPICVipPackagePeriod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICVipPackagePeriod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.PeriodCompanion")))
@interface SMAPICVipPackagePeriodCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICVipPackagePeriodCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.ProductType")))
@interface SMAPICVipPackageProductType : SMAPICKotlinEnum<SMAPICVipPackageProductType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICVipPackageProductTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICVipPackageProductType *_2 __attribute__((swift_name("_2")));
+ (SMAPICKotlinArray<SMAPICVipPackageProductType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICVipPackageProductType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackage.ProductTypeCompanion")))
@interface SMAPICVipPackageProductTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICVipPackageProductTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SMAPICKotlinArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackageCoinsReward")))
@interface SMAPICVipPackageCoinsReward : SMAPICBase
- (instancetype)initWithWeekly:(SMAPICInt * _Nullable)weekly immediate:(SMAPICInt * _Nullable)immediate totalWeeks:(SMAPICInt * _Nullable)totalWeeks __attribute__((swift_name("init(weekly:immediate:totalWeeks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICVipPackageCoinsRewardCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICVipPackageCoinsReward *)doCopyWeekly:(SMAPICInt * _Nullable)weekly immediate:(SMAPICInt * _Nullable)immediate totalWeeks:(SMAPICInt * _Nullable)totalWeeks __attribute__((swift_name("doCopy(weekly:immediate:totalWeeks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="immediate")
*/
@property (readonly) SMAPICInt * _Nullable immediate __attribute__((swift_name("immediate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_weeks")
*/
@property (readonly) SMAPICInt * _Nullable totalWeeks __attribute__((swift_name("totalWeeks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="weekly")
*/
@property (readonly) SMAPICInt * _Nullable weekly __attribute__((swift_name("weekly")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VipPackageCoinsReward.Companion")))
@interface SMAPICVipPackageCoinsRewardCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICVipPackageCoinsRewardCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedConfig")))
@interface SMAPICUnauthorizedConfig : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property void (^handleUnauthorized)(void) __attribute__((swift_name("handleUnauthorized")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SMAPICKtor_httpHttpMessage
@required
@property (readonly) id<SMAPICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SMAPICKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SMAPICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SMAPICKtor_client_coreHttpResponse : SMAPICBase <SMAPICKtor_httpHttpMessage, SMAPICKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SMAPICKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) SMAPICKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SMAPICKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

@interface SMAPICKtor_client_coreHttpResponse (Extensions)
- (SMAPICHttpResponse<id> *)wrap __attribute__((swift_name("wrap()")));
@end

@interface SMAPICHttpResponse (Extensions)
- (SMAPICHttpResponse<id> *)mapBlock:(id (^)(id))block __attribute__((swift_name("map(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAbstractionsKt")))
@interface SMAPICApiAbstractionsKt : SMAPICBase
+ (NSString *)collectionDelimiterCollectionFormat:(NSString *)collectionFormat __attribute__((swift_name("collectionDelimiter(collectionFormat:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(SMAPICKotlinArray<id> *)items collectionFormat:(NSString *)collectionFormat map:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(id)items collectionFormat:(NSString *)collectionFormat map_:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map_:)")));
@property (class, readonly) NSString *(^defaultMultiValueConverter)(id _Nullable) __attribute__((swift_name("defaultMultiValueConverter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnauthorizedKt")))
@interface SMAPICUnauthorizedKt : SMAPICBase
@property (class, readonly) id<SMAPICKtor_client_coreClientPlugin> Unauthorized __attribute__((swift_name("Unauthorized")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol SMAPICKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SMAPICKtor_ioCloseable <SMAPICKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SMAPICKtor_client_coreHttpClient : SMAPICBase <SMAPICKotlinx_coroutines_coreCoroutineScope, SMAPICKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SMAPICKtor_client_coreHttpClientEngine>)engine userConfig:(SMAPICKtor_client_coreHttpClientConfig<SMAPICKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SMAPICKtor_client_coreHttpClient *)configBlock:(void (^)(SMAPICKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SMAPICKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SMAPICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SMAPICKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SMAPICKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SMAPICKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SMAPICKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SMAPICKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SMAPICKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SMAPICKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SMAPICKtor_client_coreHttpClientEngine <SMAPICKotlinx_coroutines_coreCoroutineScope, SMAPICKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SMAPICKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SMAPICKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SMAPICKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SMAPICKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SMAPICKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SMAPICKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SMAPICKtor_client_coreHttpClientConfig<T> : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SMAPICKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SMAPICKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SMAPICKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SMAPICKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SMAPICKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol SMAPICKotlinx_serialization_coreSerialFormat
@required
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol SMAPICKotlinx_serialization_coreStringFormat <SMAPICKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface SMAPICKotlinx_serialization_jsonJson : SMAPICBase <SMAPICKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) SMAPICKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(SMAPICKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (SMAPICKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (SMAPICKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) SMAPICKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SMAPICKotlinThrowable : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SMAPICKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SMAPICKotlinException : SMAPICKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SMAPICKotlinRuntimeException : SMAPICKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SMAPICKotlinIllegalStateException : SMAPICKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SMAPICKotlinCancellationException : SMAPICKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpPartData")))
@interface SMAPICKtor_httpPartData : SMAPICBase
@property (readonly) SMAPICKtor_httpContentDisposition * _Nullable contentDisposition __attribute__((swift_name("contentDisposition")));
@property (readonly) SMAPICKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) void (^dispose)(void) __attribute__((swift_name("dispose")));
@property (readonly) id<SMAPICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SMAPICKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SMAPICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SMAPICKtor_httpParameters <SMAPICKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SMAPICKotlinEnumCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SMAPICKotlinArray<T> : SMAPICBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SMAPICInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SMAPICKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SMAPICKotlinx_serialization_coreEncoder
@required
- (id<SMAPICKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SMAPICKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SMAPICKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SMAPICKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SMAPICKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SMAPICKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SMAPICKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SMAPICKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SMAPICKotlinx_serialization_coreDecoder
@required
- (id<SMAPICKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SMAPICKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SMAPICKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SMAPICKotlinByteArray : SMAPICBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SMAPICByte *(^)(SMAPICInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SMAPICKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SMAPICKtor_utilsTypeInfo : SMAPICBase
- (instancetype)initWithType:(id<SMAPICKotlinKClass>)type kotlinType:(id<SMAPICKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<SMAPICKotlinKClass>)type reifiedType:(id<SMAPICKotlinKType>)reifiedType kotlinType:(id<SMAPICKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SMAPICKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SMAPICKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface SMAPICKotlinx_datetimeInstant : SMAPICBase <SMAPICKotlinComparable>
@property (class, readonly, getter=companion) SMAPICKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SMAPICKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SMAPICKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(SMAPICKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (SMAPICKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SMAPICKtor_httpHeaders <SMAPICKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SMAPICKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SMAPICKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SMAPICKotlinCoroutineContextElement> _Nullable)getKey:(id<SMAPICKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SMAPICKotlinCoroutineContext>)minusKeyKey:(id<SMAPICKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SMAPICKotlinCoroutineContext>)plusContext:(id<SMAPICKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SMAPICKtor_client_coreHttpClientCall : SMAPICBase <SMAPICKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SMAPICKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SMAPICKtor_client_coreHttpClient *)client requestData:(SMAPICKtor_client_coreHttpRequestData *)requestData responseData:(SMAPICKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SMAPICKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(SMAPICKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SMAPICKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SMAPICKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SMAPICKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SMAPICKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SMAPICKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SMAPICKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(SMAPICBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(SMAPICKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) SMAPICKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<SMAPICKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SMAPICKtor_utilsGMTDate : SMAPICBase <SMAPICKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SMAPICKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SMAPICKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SMAPICKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (SMAPICKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (SMAPICKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SMAPICKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SMAPICKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SMAPICKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SMAPICKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SMAPICKtor_httpHttpStatusCode : SMAPICBase <SMAPICKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SMAPICKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (SMAPICKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SMAPICKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SMAPICKtor_httpHttpProtocolVersion : SMAPICBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SMAPICKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SMAPICKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SMAPICKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_client_coreClientPlugin")))
@protocol SMAPICKtor_client_coreClientPlugin <SMAPICKtor_client_coreHttpClientPlugin>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SMAPICKtor_client_coreHttpClientEngineConfig : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SMAPICKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SMAPICKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SMAPICKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SMAPICKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SMAPICKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SMAPICKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(SMAPICKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SMAPICKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SMAPICKtor_eventsEvents : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SMAPICKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SMAPICKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SMAPICKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SMAPICKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SMAPICKtor_utilsPipeline<TSubject, TContext> : SMAPICBase
- (instancetype)initWithPhases:(SMAPICKotlinArray<SMAPICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SMAPICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SMAPICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SMAPICKtor_utilsPipelinePhase *)reference phase:(SMAPICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SMAPICKtor_utilsPipelinePhase *)reference phase:(SMAPICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SMAPICKtor_utilsPipelinePhase *)phase block:(id<SMAPICKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SMAPICKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SMAPICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SMAPICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SMAPICKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SMAPICKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SMAPICKtor_client_coreHttpReceivePipeline : SMAPICKtor_utilsPipeline<SMAPICKtor_client_coreHttpResponse *, SMAPICKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SMAPICKotlinArray<SMAPICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SMAPICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SMAPICKtor_client_coreHttpRequestPipeline : SMAPICKtor_utilsPipeline<id, SMAPICKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SMAPICKotlinArray<SMAPICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SMAPICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SMAPICKtor_client_coreHttpResponsePipeline : SMAPICKtor_utilsPipeline<SMAPICKtor_client_coreHttpResponseContainer *, SMAPICKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SMAPICKotlinArray<SMAPICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SMAPICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SMAPICKtor_client_coreHttpSendPipeline : SMAPICKtor_utilsPipeline<id, SMAPICKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SMAPICKotlinArray<SMAPICKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SMAPICKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SMAPICKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SMAPICKtor_client_coreHttpRequestData : SMAPICBase
- (instancetype)initWithUrl:(SMAPICKtor_httpUrl *)url method:(SMAPICKtor_httpHttpMethod *)method headers:(id<SMAPICKtor_httpHeaders>)headers body:(SMAPICKtor_httpOutgoingContent *)body executionContext:(id<SMAPICKotlinx_coroutines_coreJob>)executionContext attributes:(id<SMAPICKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SMAPICKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SMAPICKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SMAPICKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SMAPICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SMAPICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SMAPICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SMAPICKtor_client_coreHttpResponseData : SMAPICBase
- (instancetype)initWithStatusCode:(SMAPICKtor_httpHttpStatusCode *)statusCode requestTime:(SMAPICKtor_utilsGMTDate *)requestTime headers:(id<SMAPICKtor_httpHeaders>)headers version:(SMAPICKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SMAPICKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SMAPICKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SMAPICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SMAPICKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SMAPICKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SMAPICKotlinCoroutineContextElement <SMAPICKotlinCoroutineContext>
@required
@property (readonly) id<SMAPICKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SMAPICKotlinAbstractCoroutineContextElement : SMAPICBase <SMAPICKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SMAPICKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SMAPICKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SMAPICKotlinContinuationInterceptor <SMAPICKotlinCoroutineContextElement>
@required
- (id<SMAPICKotlinContinuation>)interceptContinuationContinuation:(id<SMAPICKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SMAPICKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SMAPICKotlinx_coroutines_coreCoroutineDispatcher : SMAPICKotlinAbstractCoroutineContextElement <SMAPICKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SMAPICKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SMAPICKotlinCoroutineContext>)context block:(id<SMAPICKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<SMAPICKotlinCoroutineContext>)context block:(id<SMAPICKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SMAPICKotlinContinuation>)interceptContinuationContinuation:(id<SMAPICKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SMAPICKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SMAPICKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (SMAPICKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SMAPICKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SMAPICKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SMAPICKotlinx_serialization_coreSerializersModule : SMAPICBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SMAPICKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SMAPICKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SMAPICKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SMAPICKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SMAPICKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SMAPICKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SMAPICKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface SMAPICKotlinx_serialization_jsonJsonDefault : SMAPICKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SMAPICKotlinx_serialization_jsonJsonElement : SMAPICBase
@property (class, readonly, getter=companion) SMAPICKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface SMAPICKotlinx_serialization_jsonJsonConfiguration : SMAPICBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<SMAPICKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SMAPICKtor_httpHeaderValueWithParameters : SMAPICBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SMAPICKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition")))
@interface SMAPICKtor_httpContentDisposition : SMAPICKtor_httpHeaderValueWithParameters
- (instancetype)initWithDisposition:(NSString *)disposition parameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(disposition:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_httpContentDispositionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SMAPICKtor_httpContentDisposition *)withParameterKey:(NSString *)key value:(NSString *)value encodeValue:(BOOL)encodeValue __attribute__((swift_name("withParameter(key:value:encodeValue:)")));
- (SMAPICKtor_httpContentDisposition *)withParametersNewParameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)newParameters __attribute__((swift_name("withParameters(newParameters:)")));
@property (readonly) NSString *disposition __attribute__((swift_name("disposition")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SMAPICKtor_httpContentType : SMAPICKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SMAPICKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SMAPICKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SMAPICKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SMAPICKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol SMAPICKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value_ __attribute__((swift_name("value_")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SMAPICKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SMAPICKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SMAPICKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SMAPICKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SMAPICKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SMAPICKotlinx_serialization_coreSerialKind : SMAPICBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SMAPICKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SMAPICKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SMAPICKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SMAPICKotlinNothing : SMAPICBase
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SMAPICKotlinByteIterator : SMAPICBase <SMAPICKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SMAPICByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SMAPICKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SMAPICKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SMAPICKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SMAPICKotlinKClass <SMAPICKotlinKDeclarationContainer, SMAPICKotlinKAnnotatedElement, SMAPICKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SMAPICKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SMAPICKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SMAPICKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface SMAPICKotlinx_datetimeInstantCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (SMAPICKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (SMAPICKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (SMAPICKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (SMAPICKotlinx_datetimeInstant *)parseInput:(id)input format:(id<SMAPICKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SMAPICKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) SMAPICKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SMAPICKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SMAPICKtor_client_coreHttpClientCallCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SMAPICKtor_client_coreHttpRequest <SMAPICKtor_httpHttpMessage, SMAPICKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SMAPICKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SMAPICKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SMAPICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SMAPICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol SMAPICKotlinx_io_coreRawSource <SMAPICKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(SMAPICKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol SMAPICKotlinx_io_coreSource <SMAPICKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<SMAPICKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(SMAPICKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SMAPICKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<SMAPICKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SMAPICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SMAPICKtor_utilsWeekDay : SMAPICKotlinEnum<SMAPICKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SMAPICKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SMAPICKotlinArray<SMAPICKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SMAPICKtor_utilsMonth : SMAPICKotlinEnum<SMAPICKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SMAPICKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SMAPICKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SMAPICKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SMAPICKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SMAPICKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SMAPICKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SMAPICKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SMAPICKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SMAPICKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SMAPICKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SMAPICKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SMAPICKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SMAPICKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SMAPICKotlinArray<SMAPICKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SMAPICKtor_utilsGMTDateCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SMAPICKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SMAPICKtor_httpHttpStatusCodeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SMAPICKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SMAPICKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SMAPICKtor_httpHttpProtocolVersionCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SMAPICKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SMAPICKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SMAPICKtor_utilsAttributeKey<T> : SMAPICBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(SMAPICKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SMAPICKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(SMAPICKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SMAPICKtor_client_coreProxyConfig : SMAPICBase
- (instancetype)initWithUrl:(SMAPICKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SMAPICKtor_eventsEventDefinition<T> : SMAPICBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SMAPICKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose_ __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SMAPICKtor_utilsPipelinePhase : SMAPICBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SMAPICKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SMAPICKotlinSuspendFunction2 <SMAPICKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SMAPICKtor_client_coreHttpReceivePipelinePhases : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SMAPICKotlinUnit : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SMAPICKtor_client_coreHttpRequestPipelinePhases : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SMAPICKtor_httpHttpMessageBuilder
@required
@property (readonly) SMAPICKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SMAPICKtor_client_coreHttpRequestBuilder : SMAPICBase <SMAPICKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SMAPICKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SMAPICKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SMAPICKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SMAPICKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SMAPICKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SMAPICKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SMAPICKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SMAPICKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SMAPICKtor_httpURLBuilder *, SMAPICKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SMAPICKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SMAPICKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SMAPICKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SMAPICKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SMAPICKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SMAPICKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SMAPICKtor_client_coreHttpResponsePipelinePhases : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SMAPICKtor_client_coreHttpResponseContainer : SMAPICBase
- (instancetype)initWithExpectedType:(SMAPICKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SMAPICKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SMAPICKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SMAPICKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SMAPICKtor_client_coreHttpSendPipelinePhases : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SMAPICKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol SMAPICKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SMAPICKtor_httpUrl : SMAPICBase <SMAPICKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) SMAPICKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SMAPICKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SMAPICKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) SMAPICKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SMAPICKtor_httpHttpMethod : SMAPICBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SMAPICKtor_httpOutgoingContent : SMAPICBase
- (id _Nullable)getPropertyKey:(SMAPICKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SMAPICKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SMAPICKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SMAPICLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SMAPICKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SMAPICKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SMAPICKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SMAPICKotlinx_coroutines_coreJob <SMAPICKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SMAPICKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SMAPICKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(SMAPICKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SMAPICKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SMAPICKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SMAPICKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SMAPICKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SMAPICKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SMAPICKotlinx_coroutines_coreJob>)plusOther_:(id<SMAPICKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SMAPICKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SMAPICKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<SMAPICKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SMAPICKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SMAPICKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SMAPICKotlinAbstractCoroutineContextKey<B, E> : SMAPICBase <SMAPICKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SMAPICKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SMAPICKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SMAPICKotlinx_coroutines_coreCoroutineDispatcherKey : SMAPICKotlinAbstractCoroutineContextKey<id<SMAPICKotlinContinuationInterceptor>, SMAPICKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SMAPICKotlinCoroutineContextKey>)baseKey safeCast:(id<SMAPICKotlinCoroutineContextElement> _Nullable (^)(id<SMAPICKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SMAPICKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SMAPICKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SMAPICKotlinKClass>)kClass provider:(id<SMAPICKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SMAPICKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SMAPICKotlinKClass>)kClass serializer:(id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SMAPICKotlinKClass>)baseClass actualClass:(id<SMAPICKotlinKClass>)actualClass actualSerializer:(id<SMAPICKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SMAPICKotlinKClass>)baseClass defaultDeserializerProvider:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SMAPICKotlinKClass>)baseClass defaultDeserializerProvider:(id<SMAPICKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SMAPICKotlinKClass>)baseClass defaultSerializerProvider:(id<SMAPICKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SMAPICKotlinx_serialization_jsonJsonElementCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface SMAPICKotlinx_serialization_jsonClassDiscriminatorMode : SMAPICKotlinEnum<SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (SMAPICKotlinArray<SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol SMAPICKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<SMAPICKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SMAPICKtor_httpHeaderValueParam : SMAPICBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (SMAPICKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SMAPICKtor_httpHeaderValueWithParametersCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SMAPICKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition.Companion")))
@interface SMAPICKtor_httpContentDispositionCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpContentDispositionCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpContentDisposition *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SMAPICKtor_httpContentDisposition *Attachment __attribute__((swift_name("Attachment")));
@property (readonly) SMAPICKtor_httpContentDisposition *File __attribute__((swift_name("File")));
@property (readonly) SMAPICKtor_httpContentDisposition *Inline __attribute__((swift_name("Inline")));
@property (readonly) SMAPICKtor_httpContentDisposition *Mixed __attribute__((swift_name("Mixed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SMAPICKtor_httpContentTypeCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SMAPICKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SMAPICKotlinKTypeProjection : SMAPICBase
- (instancetype)initWithVariance:(SMAPICKotlinKVariance * _Nullable)variance type:(id<SMAPICKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKotlinKTypeProjection *)doCopyVariance:(SMAPICKotlinKVariance * _Nullable)variance type:(id<SMAPICKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SMAPICKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SMAPICKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol SMAPICKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<SMAPICKotlinAppendable>)formatToAppendable:(id<SMAPICKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol SMAPICKotlinx_io_coreRawSink <SMAPICKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(SMAPICKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol SMAPICKotlinx_io_coreSink <SMAPICKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<SMAPICKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<SMAPICKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SMAPICKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SMAPICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface SMAPICKotlinx_io_coreBuffer : SMAPICBase <SMAPICKotlinx_io_coreSource, SMAPICKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (SMAPICKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(SMAPICKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<SMAPICKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(SMAPICKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(SMAPICKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SMAPICKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<SMAPICKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<SMAPICKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(SMAPICKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<SMAPICKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SMAPICKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SMAPICKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SMAPICKtor_utilsWeekDayCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SMAPICKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SMAPICKtor_utilsMonthCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SMAPICKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SMAPICKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SMAPICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SMAPICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SMAPICKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SMAPICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SMAPICKtor_utilsStringValuesBuilderImpl : SMAPICBase <SMAPICKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SMAPICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SMAPICKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SMAPICKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SMAPICKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SMAPICMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SMAPICKtor_httpHeadersBuilder : SMAPICKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SMAPICKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SMAPICKtor_client_coreHttpRequestBuilderCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SMAPICKtor_httpURLBuilder : SMAPICBase
- (instancetype)initWithProtocol:(SMAPICKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SMAPICKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SMAPICKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SMAPICKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SMAPICKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property SMAPICKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SMAPICKtor_httpUrlCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<SMAPICKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SMAPICKtor_httpURLProtocol : SMAPICBase <SMAPICKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SMAPICKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SMAPICKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SMAPICKtor_httpHttpMethodCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SMAPICKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SMAPICKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SMAPICKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SMAPICKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SMAPICKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SMAPICKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SMAPICKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SMAPICKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SMAPICKotlinx_coroutines_coreChildHandle <SMAPICKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(SMAPICKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<SMAPICKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SMAPICKotlinx_coroutines_coreChildJob <SMAPICKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<SMAPICKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SMAPICKotlinSequence
@required
- (id<SMAPICKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SMAPICKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SMAPICKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SMAPICKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SMAPICKotlinThrowable *, id _Nullable, id<SMAPICKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SMAPICKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SMAPICKotlinx_coroutines_coreSelectClause0 <SMAPICKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SMAPICKotlinKVariance : SMAPICKotlinEnum<SMAPICKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SMAPICKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SMAPICKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SMAPICKotlinKVariance *out __attribute__((swift_name("out")));
+ (SMAPICKotlinArray<SMAPICKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SMAPICKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SMAPICKotlinKTypeProjectionCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SMAPICKotlinKTypeProjection *)contravariantType:(id<SMAPICKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SMAPICKotlinKTypeProjection *)covariantType:(id<SMAPICKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SMAPICKotlinKTypeProjection *)invariantType:(id<SMAPICKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SMAPICKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SMAPICKotlinAppendable
@required
- (id<SMAPICKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SMAPICKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SMAPICKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SMAPICKtor_httpURLBuilderCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SMAPICKtor_httpParametersBuilder <SMAPICKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SMAPICKtor_httpURLProtocolCompanion : SMAPICBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SMAPICKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SMAPICKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SMAPICKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SMAPICKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SMAPICKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SMAPICKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SMAPICKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SMAPICKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SMAPICKotlinx_coroutines_coreParentJob <SMAPICKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SMAPICKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SMAPICKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SMAPICKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SMAPICKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
