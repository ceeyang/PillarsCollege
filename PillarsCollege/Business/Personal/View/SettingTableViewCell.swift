//
//  SettingTableViewCell.swift
//  PillarsCollege
//
//  Created by smile on 30/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

class SettingTableViewCell: UITableViewCell {

    var mImageView: UIImageView!
    var mTitleLabel: UILabel!
    
    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        
        mImageView = UIImageView()
        contentView.addSubview(mImageView)
        mImageView.snp.makeConstraints { (make) in
            make.left.equalTo(contentView.snp.left).offset(20)
            make.centerY.equalTo(contentView.snp.centerY)
            make.size.equalTo(CGSize(width:30, height:30))
        }
        
        mTitleLabel = UILabel()
        mTitleLabel.textColor = kTitleColor;
        mTitleLabel.font = UIFont.systemFont(ofSize: 15);
        mTitleLabel.textAlignment = .left;
        contentView.addSubview(mTitleLabel)
        mTitleLabel.snp.makeConstraints { (make) in
            make.left.equalTo(mImageView.snp.right).offset(12)
            make.centerY.equalTo(contentView.snp.centerY)
            make.height.equalTo(30)
        }
        
        let lineView = UIView()
        contentView.addSubview(lineView)
        lineView.backgroundColor = kAppBaseColor;
        lineView.snp.makeConstraints { (make) in
            make.left.equalTo(mTitleLabel.left);
            make.right.equalTo(contentView.snp.right);
            make.height.equalTo(1);
            make.bottom.equalTo(contentView.snp.bottom);
        }
        
        
        let assistImage = UIImageView(image: UIImage(named:"Person_AssistImage"))
        contentView.addSubview(assistImage)
        assistImage.snp.makeConstraints { (make) in
            make.right.equalTo(contentView.snp.right).offset(-20);
            make.centerY.equalTo(contentView.snp.centerY);
            make.size.equalTo(CGSize(width:25, height:35));
        }
        
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    public func configCell(imageName:String, titleName:String) {
        mTitleLabel.text = titleName
        mImageView.image = UIImage(named:imageName)
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
