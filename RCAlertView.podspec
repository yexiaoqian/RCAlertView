#
#  Be sure to run `pod spec lint RCAlertView.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "RCAlertView"
  spec.version      = "0.0.6"
  spec.summary      = "This is simple View"
  spec.homepage     = "https://github.com/yexiaoqian/RCAlertView.git"
  spec.license      = "MIT"
  spec.author             = { "yexiaoqian" => "441745749@qq.com" }
  spec.source       = { :git => "https://github.com/yexiaoqian/RCAlertView.git", :tag => "0.0.6" }
  spec.vendored_frameworks = 'RCAlertView/RCAlertView.framework'
  spec.requires_arc = true
  spec.platform = :ios, "9.0"

end
