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
    var mInputView: LoginInputView!
    var mLoginBtn: UIButton!
    var mRegistBtn: UIButton!
    var mForgetPasscodeBtn: UIButton!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        view.backgroundColor = UIColor.white
        
        setupUI()
    }
    
    func setupUI() {
        let backgroundImageView = UIImageView(frame: view.frame)
        backgroundImageView.image = UIImage(named: "LoginBackgroundImage")
        view.addSubview(backgroundImageView)
        
        mCloseBtn = UIButton()
        mCloseBtn.setImage(UIImage(named: "Login_Close"), for: .normal)
        mCloseBtn.addTarget(self, action: #selector(closButtonAction), for: .touchUpInside)
        view.addSubview(mCloseBtn)
        mCloseBtn.snp.makeConstraints { (make) in
            make.left.equalTo(view.snp.left).offset(15)
            make.top.equalTo(view.snp.top).offset(30)
            make.size.equalTo(CGSize(width: 40, height: 40))
        }
        
        let logoImageView = UIImageView(image: UIImage(named: "Login_Logo"))
        view.addSubview(logoImageView)
        logoImageView.snp.makeConstraints { (make) in
            make.centerX.equalTo(view.snp.centerX)
            make.top.equalTo(view.snp.top).offset(87.5)
        }
        
        
        mInputView = LoginInputView()
        view.addSubview(mInputView)
        mInputView.snp.makeConstraints { (make) in
            make.left.equalTo(view.snp.left).offset(47)
            make.right.equalTo(view.snp.right).offset(-47)
            make.height.equalTo(110)
            make.top.equalTo(logoImageView.snp.bottom).offset(60)
        }
        
        mLoginBtn = UIButton()
        mLoginBtn.setTitle("登录", for: .normal)
        mLoginBtn.setTitleColor(UIColor.white, for: .normal)
        mLoginBtn.layer.masksToBounds = true
        mLoginBtn.layer.cornerRadius = 22.5
        mLoginBtn.setBackgroundColor(kNavigationBarColor, forState: .normal)
        mLoginBtn.addTarget(self, action: #selector(loginButtonAction), for: .touchUpInside)
        view.addSubview(mLoginBtn)
        mLoginBtn.snp.makeConstraints { (make) in
            make.left.right.equalTo(mInputView)
            make.top.equalTo(mInputView.snp.bottom).offset(44)
            make.height.equalTo(45)
        }
        
        mRegistBtn = UIButton()
        mRegistBtn.titleLabel?.font = UIFont.systemFont(ofSize: 13)
        mRegistBtn.setTitle("立即注册", for: .normal)
        mRegistBtn.setTitleColor(PublicContentColor, for: .normal)
        mRegistBtn.addTarget(self, action: #selector(registButtonAction), for: .touchUpInside)
        view.addSubview(mRegistBtn)
        mRegistBtn.snp.makeConstraints { (make) in
            make.left.equalTo(mLoginBtn)
            make.top.equalTo(mLoginBtn.snp.bottom).offset(15)
            make.height.equalTo(20)
            make.width.greaterThanOrEqualTo(40)
        }
        
        mForgetPasscodeBtn = UIButton()
        mForgetPasscodeBtn.titleLabel?.font = UIFont.systemFont(ofSize: 13)
        mForgetPasscodeBtn.setTitle("忘记密码", for: .normal)
        mForgetPasscodeBtn.setTitleColor(PublicContentColor, for: .normal)
        mForgetPasscodeBtn.addTarget(self, action: #selector(forgotPasscodeButtonAction), for: .touchUpInside)
        view.addSubview(mForgetPasscodeBtn)
        mForgetPasscodeBtn.snp.makeConstraints { (make) in
            make.right.equalTo(mLoginBtn)
            make.top.equalTo(mLoginBtn.snp.bottom).offset(15)
            make.height.equalTo(20)
            make.width.greaterThanOrEqualTo(40)
        }
    }
    
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        view.endEditing(true)
    }
    
    @objc func closButtonAction() {
        dismissVC(completion: nil)
    }
    
    @objc func loginButtonAction() {
        let account = mInputView.mAccountTextField.mTextField.text
        let passcode = mInputView.mPasscodeTextField.mTextField.text
        if (account != nil) && (passcode != nil) {
            
//            let appSystem       = "iOS ".appendingFormat("%@", UIDevice.systemVersion())
//            let dic             = NSMutableDictionary()
//            dic["login_id"]     = account
//            dic["password"]     = DESUtils.encryptUseDES(passcode, key: kPwdKey)
//            dic["appMachine"]   = UIDevice.deviceModel()
//            dic["appSystem"]    = appSystem
//            dic["company_name"] = loginView.siteText?.text
//            dic["client_type"]  = 0
//            dic["language"]     = NSLocale.current.identifier == "en_US" ? "en_US" : "zh_CN"
//
//            RequestManager.shared.requestCommonDataWith(url: "//", parameters: <#T##NSDictionary?#>, completion: <#T##(DataResponse<Any>) -> Void#>)
        }
    }
    
    @objc func registButtonAction() {
        
    }
    
    @objc func forgotPasscodeButtonAction() {
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}
