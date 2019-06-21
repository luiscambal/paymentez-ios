//For MPI configurable values
static NSString * const KFirstCReqDelay                 = @"firstCreqDelay";
static NSString * const KMerchantServerUrl              = @"merchantServerUrl";
static NSString * const KMerchantDigestSecret           = @"merchantDigestSecret";

static NSString * const KMPIProcessorCertificate        = @"mpiProcessorCertificate";
static NSString * const KMPIServerPrivateKey            = @"mpiServerPrivateKey";
static NSString * const KMPIGroup                       = @"mpiGroup";

static NSString * const KMPIProtocolVersion             = @"mpiVersion"; // 3.0 or 4.0 (default)
static NSString * const KMPIWwwResponse                 = @"www";

static NSString * const KMPIVersion = @"version";
static NSString * const KMPICardType = @"cardType";
static NSString * const KMPIProtocol = @"protocol";
static NSString * const KMPIPan = @"pan";
static NSString * const KMPIExpiry = @"expiry";
static NSString * const KMPIDeviceCategory = @"deviceCategory";
static NSString * const KMPIPurchAmount = @"purchAmount";
static NSString * const KMPIExponent = @"exponent";
static NSString * const KMPITransactionDescription = @"description";
static NSString * const KMPICurrency = @"currency";
static NSString * const KMPIMerchantID = @"merchantID";
static NSString * const KMPIMerchantName = @"merchantName";
static NSString * const KMPIXid = @"xid";
static NSString * const KMPIOkUrl = @"okUrl";
static NSString * const KMPIFailUrl = @"failUrl";
static NSString * const KMPIMD = @"MD";
static NSString * const KMPIRecurringFrequency          = @"recurFreq";
static NSString * const KMPIRecurringEnd                = @"recurEnd";
static NSString * const KMPIInstallments                = @"installments";
static NSString * const KMPIPanMode = @"panMode";
static NSString * const KMPIBrazilMcc = @"brazilmcc";
static NSString * const KMPIBrazilAccountType = @"brazilaccounttype";
static NSString * const KMPIBrazilMobileNumber = @"brazilmobilenumber";
static NSString * const KMPIBrazilTransactionType = @"braziltransactiontype";
static NSString * const KMPIRiskDeterminationTransactionId = @"TTP.RiskDetermination.transactionID";
static NSString * const KMPIRiskDeterminationScore = @"TTP.RiskDetermination.score";
static NSString * const KMPIRiskDeterminationScoreMin = @"TTP.RiskDetermination.scoreMin";
static NSString * const KMPIRiskDeterminationScoreMax = @"TTP.RiskDetermination.scoreMax";
static NSString * const KMPIRiskDeterminationRecommendation = @"TTP.RiskDetermination.Recommendation";
static NSString * const KMPIRiskDeterminationProviderID = @"TTP.RiskDetermination.provider.ID";
static NSString * const KMPIRiskDeterminationProviderName = @"TTP.RiskDetermination.provider.name";
static NSString * const KMPIWalletProviderId = @"TTP.Wallet.provider.ID";
static NSString * const KMPIWalletProviderName = @"TTP.Wallet.provider.name";
static NSString * const KMPIWalletTransactionTrustLevel = @"TTP.Wallet.TransactionTrustLevel";
static NSString * const KMPIWalletCardHolderVerificationStatus = @"TTP.Wallet.CardholderVerificationStatus";
static NSString * const KMPIWalletDeviceTrustLevel = @"TTP.Wallet.DeviceTrustLevel";
static NSString * const KMPIWalletSessionTrustLevel = @"TTP.Wallet.SessionTrustLevel";
static NSString * const KMPIWalletTransactionRefNumber = @"TTP.Wallet.transactionRefNumber";
static NSString * const KMPIWalletUserProfileID = @"TTP.Wallet.userProfileID";
static NSString * const KMPIWalletLoginMethodStrength = @"TTP.Wallet.LoginMethodStrength";
static NSString * const KMPIWalletUserAccountAge = @"TTP.Wallet.userAccountAge";
static NSString * const KMPIWalletAccountTrustLevel = @"TTP.Wallet.accountTrustLevel";
static NSString * const KMPIWalletAccountTrustLevelMin = @"TTP.Wallet.accountTrustLevelMin";
static NSString * const KMPIWalletAccountTrustLevelMax = @"TTP.Wallet.accountTrustLevelMax";
static NSString * const KMPIWalletPaymentCardAge = @"TTP.Wallet.paymentCardAge";
static NSString * const KMPITDS2SdkTransID = @"TDS2.sdkTransID";
static NSString * const KMPITDS2SdkReferenceNumber = @"TDS2.sdkReferenceNumber";
static NSString * const KMPITDS2SdkAppId = @"TDS2.sdkAppID";
static NSString * const KMPITDS2SdkEncData = @"TDS2.sdkEncData";
static NSString * const KMPITDS2SdkMaxTimeout = @"TDS2.sdkMaxTimeout";
static NSString * const KMPITDS2DeviceRenderOptionsIF = @"TDS2.deviceRenderOptionsIF";
static NSString * const KMPITDS2DeviceRenderOptionsUI = @"TDS2.deviceRenderOptionsUI";
static NSString * const KMPITDS2SdkEphemPubKey = @"TDS2.sdkEphemPubKey";
static NSString * const KMPITDS2AcctID = @"TDS2.acctID";
static NSString * const KMPITDS2AcctType = @"TDS2.acctType";
static NSString * const KMPITDS2AddrMatch = @"TDS2.addrMatch";
static NSString * const KMPITDS2CardholderName = @"TDS2.cardholderName";
static NSString * const KMPITDS2Email = @"TDS2.email";
static NSString * const KMPITDS2HomePhone = @"TDS2.homePhone";
static NSString * const KMPITDS2MobilePhone = @"TDS2.mobilePhone";
static NSString * const KMPITDS2WorkPhone = @"TDS2.workPhone";
static NSString * const KMPITDS2MessageCategory = @"TDS2.messageCategory";
static NSString * const KMPITDS2MessageVersion = @"TDS2.messageVersion";
static NSString * const KMPITDS2PurchaseDate = @"TDS2.purchaseDate";
static NSString * const KMPITDS2TransType = @"TDS2.transType";
static NSString * const KMPITDS2ThreeDSRequestor3RIInd = @"TDS2.threeDSRequestor3RIInd";
static NSString * const KMPITDS2ThreeDSRequestorAuthenticationInd = @"TDS2.threeDSRequestorAuthenticationInd";
static NSString * const KMPITDS2ThreeDSRequestorChallengeInd = @"TDS2.threeDSRequestorChallengeInd";
static NSString * const KMPITDS2ThreeDSRequestorID = @"TDS2.threeDSRequestorID";
static NSString * const KMPITDS2ThreeDSRequestorName = @"TDS2.threeDSRequestorName";
static NSString * const KMPITDS2ThreeDSRequestorNPAInd = @"TDS2.threeDSRequestorNPAInd";
static NSString * const KMPITDS2ThreeDSRequestorURL = @"TDS2.threeDSRequestorURL";
static NSString * const KMPITDS2ChallengeWindowSize = @"TDS2.challengeWindowSize";
static NSString * const KMPITDS2PayTokenInd = @"TDS2.payTokenInd";
static NSString * const KMPITDS2AcquirerBIN = @"TDS2.acquirerBIN";
static NSString * const KMPITDS2AcquirerMerchantID = @"TDS2.acquirerMerchantID";
static NSString * const KMPITDS2MerchantName = @"TDS2.merchantName";
static NSString * const KMPITDS2Mcc = @"TDS2.mcc";
static NSString * const KMPITDS2MerchantCountryCode = @"TDS2.merchantCountryCode";
static NSString * const KMPITDS2MriShipIndicator = @"TDS2.mriShipIndicator";
static NSString * const KMPITDS2MriDeliveryTimeframe = @"TDS2.mriDeliveryTimeframe";
static NSString * const KMPITDS2MriDeliveryEmailAddress = @"TDS2.mriDeliveryEmailAddress";
static NSString * const KMPITDS2MriReorderItemsInd = @"TDS2.mriReorderItemsInd";
static NSString * const KMPITDS2MriPreOrderPurchaseInd = @"TDS2.mriPreOrderPurchaseInd";
static NSString * const KMPITDS2MriPreOrderDate = @"TDS2.mriPreOrderDate";
static NSString * const KMPITDS2MriGiftCardAmount = @"TDS2.mriGiftCardAmount";
static NSString * const KMPITDS2MriGiftCardCurr = @"TDS2.mriGiftCardCurr";
static NSString * const KMPITDS2MriGiftCardCount = @"TDS2.mriGiftCardCount";
static NSString * const KMPITDS2ChAccAgeInd = @"TDS2.chAccAgeInd";
static NSString * const KMPITDS2ChAccDate = @"TDS2.chAccDate";
static NSString * const KMPITDS2ChAccChangeInd = @"TDS2.chAccChangeInd";
static NSString * const KMPITDS2ChAccChange = @"TDS2.chAccChange";
static NSString * const KMPITDS2ChAccPwChangeInd = @"TDS2.chAccPwChangeInd";
static NSString * const KMPITDS2ChAccPwChange = @"TDS2.chAccPwChange";
static NSString * const KMPITDS2NbPurchaseAccount = @"TDS2.nbPurchaseAccount";
static NSString * const KMPITDS2ProvisionAttemptsDay = @"TDS2.provisionAttemptsDay";
static NSString * const KMPITDS2TxnActivityDay = @"TDS2.txnActivityDay";
static NSString * const KMPITDS2TxnActivityYear = @"TDS2.txnActivityYear";
static NSString * const KMPITDS2PaymentAccInd = @"TDS2.paymentAccInd";
static NSString * const KMPITDS2PaymentAccAge = @"TDS2.paymentAccAge";
static NSString * const KMPITDS2ShipAddressUsageInd = @"TDS2.shipAddressUsageInd";
static NSString * const KMPITDS2ShipAddressUsage = @"TDS2.shipAddressUsage";
static NSString * const KMPITDS2ShipNameIndicator = @"TDS2.shipNameIndicator";
static NSString * const KMPITDS2SuspiciousAccActivity = @"TDS2.suspiciousAccActivity";
static NSString * const KMPITDS2BillAddrCity = @"TDS2.billAddrCity";
static NSString * const KMPITDS2BillAddrCountry = @"TDS2.billAddrCountry";
static NSString * const KMPITDS2BillAddrLine1 = @"TDS2.billAddrLine1";
static NSString * const KMPITDS2BillAddrLine2 = @"TDS2.billAddrLine2";
static NSString * const KMPITDS2BillAddrLine3 = @"TDS2.billAddrLine3";
static NSString * const KMPITDS2BillAddrPostCode = @"TDS2.billAddrPostCode";
static NSString * const KMPITDS2BillAddrState = @"TDS2.billAddrState";
static NSString * const KMPITDS2ShipAddrCity = @"TDS2.shipAddrCity";
static NSString * const KMPITDS2ShipAddrCountry = @"TDS2.shipAddrCountry";
static NSString * const KMPITDS2ShipAddrLine1 = @"TDS2.shipAddrLine1";
static NSString * const KMPITDS2ShipAddrLine2 = @"TDS2.shipAddrLine2";
static NSString * const KMPITDS2ShipAddrLine3 = @"TDS2.shipAddrLine3";
static NSString * const KMPITDS2ShipAddrPostCode = @"TDS2.shipAddrPostCode";
static NSString * const KMPITDS2ShipAddrState = @"TDS2.shipAddrState";
static NSString * const KMPITDS2AIAuthMethod = @"TDS2.AIAuthMethod";
static NSString * const KMPITDS2AIAuthTimestamp = @"TDS2.AIAuthTimestamp";
static NSString * const KMPITDS2AIAuthData = @"TDS2.AIAuthData";
static NSString * const KMPITDS2PAIRef = @"TDS2.PAIRef";
static NSString * const KMPITDS2PAIAuthMethod = @"TDS2.PAIAuthMethod";
static NSString * const KMPITDS2PAIAuthTimestamp = @"TDS2.PAIAuthTimestamp";
static NSString * const KMPITDS2PAIAuthData = @"TDS2.PAIAuthData";
static NSString * const KMPITDS2ThreeDSCompInd = @"TDS2.threeDSCompInd";
static NSString * const KMPITDS2BroadInfo = @"TDS2.broadInfo";

static NSString * const KMPIMdStatus = @"mdStatus";
static NSString * const KMPIMdErrorMsg = @"mdErrorMsg";
static NSString * const KMPIVeresEnrolledStatus = @"veresEnrolledStatus";
static NSString * const KMPIParesTxStatus = @"paresTxStatus";
static NSString * const KMPIIReqCode = @"iReqCode";
static NSString * const KMPIIReqDetail = @"iReqDetail";
static NSString * const KMPIVendorCode = @"vendorCode";
static NSString * const KMPIEci = @"eci";
static NSString * const KMPICavv = @"cavv";
static NSString * const KMPICavvAlgorithm = @"cavvAlgorithm";
static NSString * const KMPIPAResVerified = @"PAResVerified";
static NSString * const KMPIPAResSyntaxOK = @"PAResSyntaxOK";
static NSString * const KMPITDS2TransStatus = @"TDS2.transStatus";
static NSString * const KMPITDS2TransStatusReason = @"TDS2.transStatusReason";
static NSString * const KMPITDS2ThreeDSServerTransID = @"TDS2.threeDSServerTransID";
static NSString * const KMPITDS2DsTransID = @"TDS2.dsTransID";
static NSString * const KMPITDS2AcsTransID = @"TDS2.acsTransID";
static NSString * const KMPITDS2AcsRenderingType = @"TDS2.acsRenderingType";
static NSString * const KMPITDS2AcsReferenceNumber = @"TDS2.acsReferenceNumber";
static NSString * const KMPITDS2AcsSignedContent = @"TDS2.acsSignedContent";
static NSString * const KMPITDS2AuthTimestamp = @"TDS2.authTimestamp";
static NSString * const KMPITDS2AcsChallengeMandated = @"TDS2.acsChallengeMandated";
static NSString * const KMPITDS2AuthenticationType = @"TDS2.authenticationType";
static NSString * const KMPITDS2AcsOperatorID = @"TDS2.acsOperatorID";
static NSString * const KMPITDS2CardholderInfo = @"TDS2.cardholderInfo";
static NSString * const KMPITDS2AcsUrl = @"TDS2.acsUrl";
static NSString * const KMPITDS2ErrorComponent = @"TDS2.errorComponent";
static NSString * const KMPITDS2ErrorMessageType = @"TDS2.errorMessageType";

static NSString * const KMPIDigest = @"digest";
static NSString * const KMPISignature = @"signature";

static NSString * const KMPIService = @"service";
static NSString * const KMPIStatusQuery = @"statusQuery";
static NSString * const KMPIFormat = @"format";
static NSString * const KMPIFormatNVP = @"NVP";
static NSString * const KMPILastCres = @"lastcres";

static NSString * const KMPIOriginalAuthResponse = @"mpiOriginalAuthResponse";

static NSString * const KMPIDeviceCategoryMobile = @"5";
static NSString * const KMPIDeviceCategoryWww = @"0";
static NSString * const KMPIDeviceCategory3RI = @"6";
static NSString * const KOkUrlValue = @"foobar-ok";
static NSString * const KFailUrlValue = @"foobar-fail";
static NSString * const KMPIMessageVersion = @"1.0.2";

// Not Authenticated, do not continue transaction
static int const KNOT_AUTHENTICATED = 0;
// Fully Authenticated, continue transaction
static int const KFULLY_AUTHENTICATED = 1;
static int const KNOT_ENROLLED = 2;
static int const KNOT_ENROLLED_CACHE = 3;
static int const KATTEMPT = 4;
static int const KU_RECEIVED = 5;
static int const KERROR_RECEIVED = 6;
// Our Error (or input error)
static int const KOUR_ERROR = 7;
// Block by Fraud Score (not used currently)
static int const KBLOCK_BY_FRAUD_SCORE = 8;
// Pending (this code is not sent )
static int const KPENDING = 9;
static int const KNO_VERSION2_DIRECTORY_FOUND = 96;

