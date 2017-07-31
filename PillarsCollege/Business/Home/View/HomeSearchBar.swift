//
//  HomeSearchBar.swift
//  PillarsCollege
//
//  Created by smile on 19/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

class HomeSearchBar: UIView {
    
    var mMessageBtn     : UIButton!
    var mQrCodeBtn      : UIButton!
    var mSearchBtn      : UIButton!
    
    var qrCodeBtnAction  : buttonActionClosure?
    var messageBtnAction : buttonActionClosure?
    var searchBtnAction  : buttonActionClosure?
    
    convenience init() {
        self.init(frame: CGRect.zero)
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setupUI()
        addAction()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    //MARK: - UI -
    func setupUI() {
        
        backgroundColor = kNavigationBarColor
        
        let navigationBarView = UIView()
        addSubview(navigationBarView)
        navigationBarView.backgroundColor = kNavigationBarColor
        navigationBarView.snp.makeConstraints { (make) in
            make.top.equalTo(snp.top).offset(20)
            make.height.equalTo(44)
            make.left.right.equalTo(self)
        }
        
        /** 二维码扫描按钮 */
        mQrCodeBtn     = UIButton()
        mQrCodeBtn.setImage(UIImage(named:"home_icon_scan"), for: .normal)
        navigationBarView.addSubview(mQrCodeBtn)
        mQrCodeBtn.snp.makeConstraints { (make) in
            make.left.equalTo(navigationBarView.snp.left).offset(10)
            make.centerY.equalTo(navigationBarView.snp.centerY)
            make.size.equalTo(CGSize(width: 30, height: 30))
        }
        
        /** 消息按钮 */
        mMessageBtn     = UIButton()
        mMessageBtn.setImage(UIImage(named:"home_icon_message"), for: .normal)
        navigationBarView.addSubview(mMessageBtn)
        mMessageBtn.snp.makeConstraints { (make) in
            make.right.equalTo(navigationBarView.snp.right).offset(-10)
            make.centerY.equalTo(navigationBarView.snp.centerY)
            make.size.equalTo(CGSize(width: 30, height: 30))
        }
        
        /** 搜索框 */
        mSearchBtn = UIButton()
        mSearchBtn.layer.masksToBounds = true
        mSearchBtn.layer.cornerRadius  = 15
        mSearchBtn.backgroundColor = RGBA(r: 0, g: 0, b: 0,a: 0.1)
        navigationBarView.addSubview(mSearchBtn)
        mSearchBtn.snp.makeConstraints { (make) in
            make.center.equalTo(navigationBarView.snp.center)
            make.size.equalTo(CGSize(width: kScreenWidth-100, height: 30))
        }
        
        let searchIcon = UIImageView(image: UIImage(named: "home_icon_search"))
        mSearchBtn.addSubview(searchIcon)
        searchIcon.snp.makeConstraints { (make) in
            make.left.equalTo(mSearchBtn.snp.left).offset(10)
            make.centerY.equalTo(mSearchBtn.snp.centerY)
            make.size.equalTo(CGSize(width: 15, height: 15))
        }
        
        let searchLabel = UILabel()
        searchLabel.text = "搜一搜"
        mSearchBtn.addSubview(searchLabel)
        searchLabel.snp.makeConstraints { (make) in
            make.left.equalTo(searchIcon.snp.right).offset(10)
            make.centerY.equalTo(mSearchBtn.snp.centerY)
            make.height.equalTo(30)
        }
        
    }
    
    func addAction() {
        mQrCodeBtn.addAction { [weak self](btn) in
            self?.qrCodeBtnAction?(btn)
        }
        
        mMessageBtn.addAction { [weak self](btn) in
            self?.messageBtnAction?(btn)
        }
        
        mSearchBtn.addAction { [weak self](btn) in
            self?.searchBtnAction?(btn)
        }
    }
    
    
    func reloadSearchBar() {
//        let imageName =  UserInfo.shared.unread_count == 0 ? "new_nav_bell" : "new_nav_bell_message"
        mMessageBtn.setImage(UIImage(named:"home_icon_message_more"), for: .normal)
    }

}
