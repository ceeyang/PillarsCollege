//
//  GuideViewController.swift
//  PillarsCollege
//
//  Created by smile on 19/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit
import SnapKit
import EZSwiftExtensions

class GuideViewController: UIViewController {

    static let shared = GuideViewController()
    
    var mainScrollView : UIScrollView!
    var imageArray     = ["iphone_1","iphone_2","iphone_3","iphone_4"]
    
    
    func show() {
        //GuideViewController.shared
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupUI()
    }
    
    func setupUI() {
        
        view.backgroundColor = UIColor.white
        
        let scrollView = UIScrollView()
        scrollView.isScrollEnabled = true
        scrollView.isPagingEnabled = true
        scrollView.showsHorizontalScrollIndicator = false
        scrollView.showsVerticalScrollIndicator   = false
        scrollView.contentSize = CGSize(width: kScreenWidth * CGFloat(imageArray.count), height: 0)
        view.addSubview(scrollView)
        scrollView.snp.makeConstraints { (make) in
            make.edges.equalTo(view)
        }
        mainScrollView = scrollView
        
        for i in 0..<imageArray.count {
            let imageView = UIImageView(image: UIImage(named: imageArray[i]))
            imageView.isUserInteractionEnabled = true
            scrollView.addSubview(imageView)
            imageView.snp.makeConstraints({ (make) in
                make.left.equalTo(scrollView.snp.left).offset(kScreenWidth * CGFloat(i))
                make.top.equalTo(view)
                make.size.equalTo(CGSize(width: kScreenWidth, height: kScreenHeight))
            })
            
            if i == imageArray.count - 1 {
                let enterBtn = UIButton()
                enterBtn.backgroundColor = RGB(r: 255, g: 255, b: 255)
                enterBtn.layer.cornerRadius = 2
                enterBtn.layer.masksToBounds = true
                enterBtn.setTitle("Enter", for: .normal)
                enterBtn.setTitleColor(RGB(r: 0, g: 174, b: 255), for: .normal)
                enterBtn.addTarget(self, action: #selector(enterBtnAction), for: .touchUpInside)
                imageView.addSubview(enterBtn)
                enterBtn.snp.makeConstraints({ (make) in
                    make.centerX.equalTo(imageView.snp.centerX)
                    make.bottom.equalTo(imageView.snp.bottom).offset(-30)
                    make.size.equalTo(CGSize(width: 125, height: 40))
                })
            }
        }
    }
    
    
    @objc func enterBtnAction() {
        removeFromParentViewController()
        UserDefaults.standard.set(true, forKey: kIsNotFirstLaunch)
        UserDefaults.standard.synchronize()
        AppDelegate.shared.buildKeyWindow()
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
