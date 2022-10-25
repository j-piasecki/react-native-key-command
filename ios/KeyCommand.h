#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <UIKit/UIKit.h>

extern NSDictionary *ModifierFlagsConstants;

@interface KeyCommand : RCTEventEmitter <RCTBridgeModule>

@end


@interface HardwareKeyCommands : NSObject

+ (instancetype)sharedInstance;

/**
 * Register a keyboard command.
 */
- (void)registerKeyCommandWithInput:(NSString *)input
                      modifierFlags:(UIKeyModifierFlags)flags
                             action:(void (^)(UIKeyCommand *command))block;

/**
 * Unregister a keyboard command.
 */
- (void)unregisterKeyCommandWithInput:(NSString *)input
                        modifierFlags:(UIKeyModifierFlags)flags;

/**
 * Check if a command is registered.
 */
- (BOOL)isKeyCommandRegisteredForInput:(NSString *)input
                         modifierFlags:(UIKeyModifierFlags)flags;

@end
