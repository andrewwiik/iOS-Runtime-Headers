/* Generated by RuntimeBrowser.
 */

@protocol CBXpcConnectionDelegate <NSObject>

@required

- (void)xpcConnection:(CBXpcConnection *)arg1 didReceiveMsg:(unsigned short)arg2 args:(NSDictionary *)arg3;
- (void)xpcConnectionDidFinalize:(CBXpcConnection *)arg1;
- (void)xpcConnectionDidReset:(CBXpcConnection *)arg1;
- (void)xpcConnectionIsInvalid:(CBXpcConnection *)arg1;

@end