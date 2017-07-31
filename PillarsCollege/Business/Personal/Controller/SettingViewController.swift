//
//  SettingViewController.swift
//  PillarsCollege
//
//  Created by smile on 30/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

fileprivate let kSettingTableViewCell = "kSettingTableViewCell"

class SettingViewController: UIViewController,UITableViewDelegate,UITableViewDataSource {

    var mTableView: UITableView!
    var mBottomBtn: UIButton!
    var mTitleArr: [String] = []
    var mImageArr: [String] = []
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        navigationController?.navigationBar.isHidden = false
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        title = "设置"
        setupTableView()
        setupBottomBtn()
    }
    
    func setupTableView() {
        
        mTitleArr = ["个人信息","清理缓存","修改密码","安全设置","关于我们"];
        mImageArr = ["Pb_Setting_PersonInfo","PB_Setting_ClearCache","PB_Setting_ChangePasscode","PB_Setting_SetingImg","PB_Setting_AboutUS"];
        
        mTableView = UITableView()
        mTableView.tableFooterView = UIView()
        mTableView.delegate = self
        mTableView.dataSource = self
        mTableView.separatorStyle = .none
        mTableView.rowHeight = 60
        mTableView.isScrollEnabled = false
        mTableView.register(SettingTableViewCell.classForCoder(), forCellReuseIdentifier: kSettingTableViewCell)
        mTableView.showsVerticalScrollIndicator = false
        view.addSubview(mTableView)
        mTableView.snp.makeConstraints { (make) in
            make.left.right.top.equalTo(view)
            make.bottom.equalTo(view.snp.bottom).offset(-48)
        }
    }

    func setupBottomBtn() {
        mBottomBtn = UIButton()
        mBottomBtn.backgroundColor = kNavigationBarColor
        mBottomBtn.setTitle("退出", for: .normal)
        mBottomBtn.setTitleColor(UIColor.white, for: .normal)
        view.addSubview(mBottomBtn)
        mBottomBtn.snp.makeConstraints { (make) in
            make.left.right.bottom.equalTo(view)
            make.height.equalTo(48)
        }
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

extension SettingViewController {
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return mTitleArr.count
    }
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: kSettingTableViewCell) as! SettingTableViewCell
        cell.configCell(imageName: mImageArr[indexPath.row], titleName: mTitleArr[indexPath.row])
        cell.selectionStyle = .none
        return cell
    }
}
