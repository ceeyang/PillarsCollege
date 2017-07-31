//
//  HomeTableViewCell.swift
//  PillarsCollege
//
//  Created by smile on 29/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit
import Kingfisher

class HomeTableViewCell: UITableViewCell {

    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        let coverImgView = UIImageView()
        contentView.addSubview(coverImgView)
        coverImgView.image = UIImage(named:"HomeTableViewCover")
//        coverImgView.kf.setImage(with: URL(string:"http://pic.58pic.com/10/73/59/48bOOOPICe2.jpg"), placeholder: UIImage(named:""), options: nil, progressBlock: nil) { (image, error, type, url) in
//            coverImgView.image = image?.kf.image(withRoundRadius: 30, fit: CGSize(width: 60, height: 60))
//        }
        coverImgView.snp.makeConstraints { (make) in
            make.left.equalTo(contentView.snp.left).offset(15)
            make.centerY.equalTo(contentView.snp.centerY)
            make.size.equalTo(CGSize(width: 60, height: 60))
        }
        
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
