/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    id _private;
    void *_reserved;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (int)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (BOOL)objectIsForcedForKey:(id)arg1;
- (BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (oneway void)release;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1;
+ (void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)_akColorForData:(id)arg1;
+ (id)_akFontForData:(id)arg1;
+ (id)akDataForColor:(id)arg1;
+ (id)akDataForFont:(id)arg1;
+ (id)akDataForTextAttributes:(id)arg1;

- (id)akColorForKey:(id)arg1;
- (id)akFontForKey:(id)arg1;
- (void)akSetColor:(id)arg1 forKey:(id)arg2;
- (void)akSetFont:(id)arg1 forKey:(id)arg2;
- (void)akSetTextAttributes:(id)arg1 forKey:(id)arg2;
- (id)akTextAttributesForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

+ (id)CNFObjectForKey:(id)arg1;
+ (unsigned int)CNFRegEmailValidationTimeout;
+ (id)CNFRegSavedAccountName;
+ (id)CNFRegServerURLOverride;
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFRegEmailValidationTimeout:(unsigned int)arg1;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (void)setShouldShowCNFRegistrationServerLogs:(BOOL)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(BOOL)arg1;
+ (BOOL)shouldShowCNFRegistrationServerLogs;
+ (BOOL)shouldShowCNFRegistrationSettingsUI;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (BOOL)boolValueSafeForKey:(id)arg1;
- (BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2;
- (double)doubleValueSafeForKey:(id)arg1;
- (double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2;
- (long long)int64ValueSafeForKey:(id)arg1;
- (long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2;
- (id)stringValueSafeForKey:(id)arg1;
- (id)stringValueSafeForKey:(id)arg1 status:(int*)arg2;
- (const char *)utf8ValueSafeForKey:(id)arg1;
- (const char *)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (void)FU_backupStandardUserDefaultsKey:(id)arg1;
+ (id)_npsManager;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (BOOL)delayedSynchronize;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (BOOL)boolForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (int)integerForSettingKey:(id)arg1 withDefaultValue:(int)arg2;
- (id)stringForSettingKey:(id)arg1 withDefaultValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_webkit_preferredLanguageCode;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)tsk_arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_arrayForKeyInCurrentRole:(id)arg1;
- (BOOL)tsk_boolForKey:(id)arg1 inRole:(id)arg2;
- (BOOL)tsk_boolForKeyInCurrentRole:(id)arg1;
- (id)tsk_dataForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dataForKeyInCurrentRole:(id)arg1;
- (id)tsk_dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dictionaryForKeyInCurrentRole:(id)arg1;
- (double)tsk_doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)tsk_doubleForKeyInCurrentRole:(id)arg1;
- (float)tsk_floatForKey:(id)arg1 inRole:(id)arg2;
- (float)tsk_floatForKeyInCurrentRole:(id)arg1;
- (int)tsk_integerForKey:(id)arg1 inRole:(id)arg2;
- (int)tsk_integerForKeyInCurrentRole:(id)arg1;
- (id)tsk_keyForRole:(id)arg1;
- (id)tsk_objectForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_objectForKeyInCurrentRole:(id)arg1;
- (void)tsk_removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)tsk_removeObjectForKeyInCurrentRole:(id)arg1;
- (void)tsk_setBool:(BOOL)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setBool:(BOOL)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setInteger:(int)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setInteger:(int)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)tsk_stringForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_stringForKeyInCurrentRole:(id)arg1;
- (id)tskp_currentRole;

@end
