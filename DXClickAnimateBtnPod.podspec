Pod::Spec.new do |spec|

  spec.name         = "DXClickAnimateBtnPod"
  spec.version      = "1.0.0"
  spec.summary      = "DXClickAnimateBtnPod is a button that presses the zooming animation effect"
  spec.description  = <<-DESC
			DXClickAnimateBtnPod is a button that presses the zooming animation effect.Developer:wgz
                   DESC

  spec.homepage     = "https://github.com/wgziOS/DXClickAnimateButton"

  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "wgziOS" => "547256553@qq.com" }
  spec.source       = { :git => "https://github.com/wgziOS/DXClickAnimateButton.git", :tag => "#{spec.version}" }
  #spec.frameworks   = 'UIKit'
  spec.source_files  = "DXClickAnimateButton", "DXClickAnimateButton.{h,m}"
  spec.platform     = :ios, "9.0"
  #spec.exclude_files = "Classes/Exclude"

end
