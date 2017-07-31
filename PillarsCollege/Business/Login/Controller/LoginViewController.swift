//
//  LoginViewController.swift
//  PillarsCollege
//
//  Created by smile on 30/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

class LoginViewController: UIViewController {

    var mCloseBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = UIColor.white
        
        
        mCloseBtn = UIButton()
        mCloseBtn.backgroundColor = kNavigationBarColor
        mCloseBtn.addTarget(self, action: #selector(closButtonAction), for: .touchUpInside)
        view.addSubview(mCloseBtn)
        mCloseBtn.snp.makeConstraints { (make) in
            make.left.equalTo(view.snp.left).offset(15)
            make.top.equalTo(view.snp.top).offset(30)
            make.size.equalTo(CGSize(width: 40, height: 40))
        }
    }
    
    @objc func closButtonAction() {
        dismissVC(completion: nil)
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
