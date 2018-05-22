

Pod::Spec.new do |s|

  s.name         = "ABCtimeSDK"#必填，仓库的名称，Podfile中会用到，类似于 AFNetworking
  s.version      = "1.0.0"#必填，版本号
  s.summary      = "ABCtimeSDK" # 随便写写吧

  s.description  = "library for iOS (static lib), Supports iPhone Simulator and device"# 随便写写吧

 # s.license      = {
  #   :type => 'Copyright',
  #   :text => <<-LICENCE
  #   Copyright 2018 TAL AILab. All rights reserved.
  #   LICENCE
  # }
  s.license      = { :type => "#########", :file => "LICENSE" }
  s.homepage     = "https://github.com/ABCtimeSDK"# 随便写写吧
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"
  # s.author             = { "Allen.li" => "595004044@qq.com" }# 随便写写吧
  s.authors            = { "Allen.li" => "lixunke@100tal.com" }
  
  s.platform     = :ios, "8.0"# 必填
  s.ios.deployment_target = "8.0"# 必填
 
  s.source       = { :git => "https://github.com/ABCtimeSDK/ABCtimeSDK.git", :tag => s.version }# 必填，这是你的仓库相对于 Podfile 的路径（我试过写绝对路径，最后报错了）

  s.source_files = '*.{h,m,mm,c}' # 必填，代码文件。如果你还有二级目录，要包含所有二级目录中的代码文件，用**表示。上面给的链接中也有介绍

  s.vendored_libraries  = 'frameworks/ABCtimeSDK.framework/ABCtimeSDK'
  s.vendored_frameworks = 'frameworks/ABCtimeSDK.framework'
  s.resource = "resource/bundle/ABCtimeSDK.Bundle"


  s.frameworks = 'Foundation'
  s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
