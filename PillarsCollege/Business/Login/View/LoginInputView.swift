//
//  LoginInputView.swift
//  PillarsCollege
//
//  Created by smile on 31/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

class LoginInputView: UIView {
   
    var mAccountTextField: LoginTextField!
    var mPasscodeTextField: LoginTextField!
    var mImageArr: [String] = []
    var mPlaceholderArr: [String] = []
    
    convenience init(){
        self.init(frame: CGRect.zero)
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        
        mImageArr = ["Login_Account","Login_Passcode"]
        mPlaceholderArr = ["请输入您的账号","请输入您的密码"]
        let textFieldHeight = 55
        for i in 0..<mImageArr.count {
            let textField = LoginTextField(imageName: mImageArr[i], placeholder: mPlaceholderArr[i])
            addSubview(textField)
            textField.snp.makeConstraints({ (make) in
                make.left.right.equalTo(self)
                make.top.equalTo(self.snp.top).offset(textFieldHeight*i)
                make.height.equalTo(textFieldHeight)
            })
            if i == 0 {
                mAccountTextField = textField
            }
            if i == 1 {
                textField.mTextField.isSecureTextEntry = true
                mPasscodeTextField = textField
            }
        }
        
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}


class LoginTextField: UIView {
    var mTypeImage: UIImageView!
    var mTextField: UITextField!
    
    convenience init(imageName:String, placeholder:String) {
        self.init(frame: CGRect.zero)
        mTypeImage.image = UIImage(named:imageName)
        mTextField.placeholder = placeholder
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        mTypeImage = UIImageView()
        addSubview(mTypeImage)
        mTypeImage.snp.makeConstraints { (make) in
            make.left.equalTo(self)
            make.centerY.equalTo(self)
            make.size.equalTo(CGSize(width: 25, height: 25))
        }
        
        mTextField = UITextField()
        addSubview(mTextField)
        mTextField.snp.makeConstraints { (make) in
            make.left.equalTo(mTypeImage.snp.right).offset(10)
            make.centerY.equalTo(self)
            make.right.equalTo(self)
            make.height.equalTo(30)
        }
        
        let bottomLine = UIView()
        addSubview(bottomLine)
        bottomLine.backgroundColor = kCommon_LineColor
        bottomLine.snp.makeConstraints { (make) in
            make.left.right.bottom.equalToSuperview()
            make.height.equalTo(1)
        }
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
