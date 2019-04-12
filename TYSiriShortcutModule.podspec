Pod::Spec.new do |s|
  s.name             = 'TYSiriShortcutModule'
  s.version          = '0.0.1'
  s.summary          = 'Siri shortcut manager.'

  s.homepage         = 'https://www.tuya.com'
  s.author           = { 'tuyaInc' => 'https://www.tuya.com' }
  s.source           = { :git => 'https://github.com/TuyaInc/TYSiriShortcutModule.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  
  s.dependency 'TuyaSmartHomeKit'
  s.dependency 'TuyaIntentKit'
  s.dependency 'TYModuleManager'
  s.dependency 'TYModuleServices'

  s.source_files = 'TYSiriShortcutModule/Headers/**/*'
  s.vendored_library = 'TYSiriShortcutModule/libTYSiriShortcutModule.a'
   
end
