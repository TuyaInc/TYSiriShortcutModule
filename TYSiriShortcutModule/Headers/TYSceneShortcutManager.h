//
//  TYSceneShortcutManager.h
//  TYSmartSceneModule
//
//  Created by TuyaInc on 2019/2/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TYSceneShortcutManagerDelegate <NSObject>

/**
 zh^
 TYSceneShortcutManager更新了捷径数据。
 zh$
 en^
 TYSceneShortcutManager updated siri shortcuts.
 en$
 */
- (void)TYSceneShortcutManagerDidUpdateData;

@end

@interface TYSceneShortcutManager : NSObject

/**
 zh^
 代理
 zh$
 en^
 delegate
 en$
 */
@property (nonatomic, weak) id<TYSceneShortcutManagerDelegate> delegate;

/**
 zh^
 单例.
 zh$
 en^
 singleton
 en$

 @return zh^ 单例对象 zh$ en^ singleton object en$
 */
+ (instancetype)sharedInstance;


/**
 zh^
 Siri捷径是否可用，判断iOS版本和涂鸦公版Siri extension是否存在，
 zh$
 en^
 Retuen YES if Siri shortcut is available, according to iOS version  and tuya Siri extension is or not exist.
 en$

 @return zh^ YES表示捷径可用 zh$ en^ YES represent available en$
 */
- (BOOL)shortcutAvailable;

/**
 zh^
 处理指定场景的Siri捷径。
 zh$
 en^
 handle the specified scene's Siri shortcut.
 en$

 @param scene zh^ 场景对象 zh$ en^ scene object en$
 @param controller zh^ 添加/编辑捷径UI的容器 zh$ en^ add/edit a shortcut need a contaioner controller en$
 */
- (void)handleSiriShortcutWithScene:(TuyaSmartSceneModel *)scene cantainerController:(UIViewController *)controller;

/**
 zh^
 获取场景的Siri短语，没有添加的返回nil。
 zh$
 en^
 get the phrase of Siri shortcut with sprcified scene, scene that not added Siri shortcut will return nil by default.
 en$

 @return zh^ Siri短语 zh$ en^ Siri shortcut phrase en$
 */
- (NSString *)getSiriPhraseWithSceneId:(NSString *)sceneId;

@end

NS_ASSUME_NONNULL_END
