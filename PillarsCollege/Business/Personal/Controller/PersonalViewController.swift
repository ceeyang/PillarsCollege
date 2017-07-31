//
//  PersonalViewController.swift
//  PillarsCollege
//
//  Created by smile on 19/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit
import EZSwiftExtensions

fileprivate let kReuseIdentifier = "PersonTableViewCell"

class PersonalViewController: UIViewController,UITableViewDelegate,UITableViewDataSource {
    
    var mTableView: UITableView!
    var mTitleArr: [String] = []
    var mImageArr: [String] = []
    var mTableHeaderView: PersonHeaderView!
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        navigationController?.navigationBar.isHidden = true
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
    }
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupTableView()
    }
    
    func setupTableView() {
        
        mTitleArr = ["充值","加入VIP","我的收藏","离线下载","我的订单","邀请有礼","发票","建议与帮助","设置"];
        mImageArr = ["Person_TopUp","Person_JoinVIP","Person_MyFavorite","Person_Download","Person_MyOrder","Person_Invit","Person_Invoice","Person_Help","Person_Setting"];
        
        mTableHeaderView = PersonHeaderView(frame:CGRect(x: 0, y: 0, w: kScreenWidth, h: 160))
        mTableHeaderView.mAvatorImageViewClickClourse = { [weak self] (mAvatorImageView:UIImageView) in
            self?.navigationController?.presentVC(LoginViewController())
        }
        mTableView = UITableView()
        mTableView.tableHeaderView = mTableHeaderView
        mTableView.tableFooterView = UIView()
        mTableView.delegate = self
        mTableView.dataSource = self
        mTableView.separatorStyle = .none
        mTableView.register(PersonTableViewCell.classForCoder(), forCellReuseIdentifier: kReuseIdentifier)
        mTableView.showsVerticalScrollIndicator = false
        view.addSubview(mTableView)
        mTableView.snp.makeConstraints { (make) in
            make.left.bottom.right.equalTo(view)
            make.top.equalTo(view.snp.top).offset(-20)
        }
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}


extension PersonalViewController {
    func numberOfSections(in tableView: UITableView) -> Int {
        return 2
    }
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        if section == 0 {
            return 2
        } else {
           return 7
        }
    }
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 50
    }
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 15
    }
    func tableView(_ tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
        return 0.01
    }
    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        let header = UIView(frame: CGRect(x: 0, y: 0, w: kScreenWidth, h: 10))
        header.backgroundColor = kAppBaseColor
        return header
    }
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let index = indexPath.section == 0 ? indexPath.row : indexPath.row + 2
        let imageName = mImageArr[index]
        let titleName = mTitleArr[index]
        let cell = tableView.dequeueReusableCell(withIdentifier: kReuseIdentifier) as! PersonTableViewCell
        cell.configCell(imageName: imageName, titleName: titleName)
        cell.selectionStyle = .none
        return cell
    }
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if indexPath.section == 0 {
            
        } else {
            if indexPath.row == 0 {
                
            } else if indexPath.row == 1 {
                
            } else if indexPath.row == 2 {
                
            } else if indexPath.row == 3 {
                
            } else if indexPath.row == 4 {
                
            } else if indexPath.row == 5 {
                
            } else if indexPath.row == 6 {
                navigationController?.pushViewController(SettingViewController(), animated: true)
            }
        }
    }
}
