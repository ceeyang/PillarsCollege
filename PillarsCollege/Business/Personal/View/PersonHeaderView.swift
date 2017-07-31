//
//  PersonHeaderView.swift
//  PillarsCollege
//
//  Created by smile on 21/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit
import Kingfisher

typealias AvatorImageDidClickClosure = (_ mAvatorImageView:UIImageView) -> Void

class PersonHeaderView: UIView {

    var mAvatorImageView: UIImageView!
    var mNameLabel: UILabel!
    var mCompanyLabel: UILabel!
    var mCoinsLabel: UILabel!
    var mAvatorImageViewClickClourse: AvatorImageDidClickClosure?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        
        let backgroundImage = UIImageView(image: UIImage(named: "PersonTopBackgroundImg"))
        backgroundImage.isUserInteractionEnabled = true
        addSubview(backgroundImage)
        backgroundImage.snp.makeConstraints { (make) in
            make.edges.equalTo(self)
        }
        
        let defaultImage = UIImage(named: "Person_Avator")
        mAvatorImageView = UIImageView()
        mAvatorImageView.isUserInteractionEnabled = true
        mAvatorImageView.layer.masksToBounds = true
        mAvatorImageView.image = defaultImage
        let tap = UITapGestureRecognizer(target: self, action: #selector(avatorImageClick))
        mAvatorImageView.addGestureRecognizer(tap)
        mAvatorImageView.layer.cornerRadius = 65/2
        backgroundImage.addSubview(mAvatorImageView)
        mAvatorImageView.snp.makeConstraints { (make) in
            make.left.equalTo(backgroundImage.snp.left).offset(20);
            make.bottom.equalTo(backgroundImage.snp.bottom).offset(-20);
            make.size.equalTo(CGSize(width: 65, height: 65));
        }
        
        mNameLabel = UILabel()
        mNameLabel.text = "请点击头像登录"
        mNameLabel.textColor = UIColor.white
        mNameLabel.font = UIFont.systemFont(ofSize: 15)
        mNameLabel.textAlignment = .left
        backgroundImage.addSubview(mNameLabel)
        mNameLabel.snp.makeConstraints { (make) in
            make.left.equalTo(mAvatorImageView.snp.right).offset(15);
            make.top.equalTo(mAvatorImageView.snp.top);
            make.height.equalTo(65/3);
        }
        
        mCompanyLabel = UILabel()
        mCompanyLabel.text = "组织机构：游客"
        mCompanyLabel.textColor = UIColor.white
        mCompanyLabel.font = UIFont.systemFont(ofSize: 12)
        mCompanyLabel.textAlignment = .left
        backgroundImage.addSubview(mCompanyLabel)
        mCompanyLabel.snp.makeConstraints { (make) in
            make.left.equalTo(mNameLabel.snp.left);
            make.centerY.equalTo(mAvatorImageView.snp.centerY);
            make.height.equalTo(65/3);
        }
        
        mCoinsLabel = UILabel()
        mCoinsLabel.textColor = UIColor.white
        mCoinsLabel.font = UIFont.systemFont(ofSize: 12)
        mCoinsLabel.textAlignment = .left
        mCoinsLabel.text = "学币：00"
        backgroundImage.addSubview(mCoinsLabel)
        mCoinsLabel.snp.makeConstraints { (make) in
            make.left.equalTo(mNameLabel.snp.left);
            make.top.equalTo(mCompanyLabel.snp.bottom);
            make.height.equalTo(65/3);
        }
    }
    
    public func updateHeader(with model:PersonInfoModel) {
        
    }
    
    @objc func avatorImageClick() {
        mAvatorImageViewClickClourse?(mAvatorImageView)
    }
}
