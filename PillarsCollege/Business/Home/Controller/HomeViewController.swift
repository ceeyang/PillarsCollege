//
//  HomeViewController.swift
//  PillarsCollege
//
//  Created by smile on 19/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit
import MJRefresh

class HomeViewController: UIViewController,UITableViewDelegate,UITableViewDataSource {
    
    var mSearchBar: HomeSearchBar!
    var mTableView: UITableView!
    var header: MJRefreshNormalHeader!
    
    override func viewDidLoad() {
        super.viewDidLoad()

        setupSearchBarView()
        setupTableView()
        addRefresh()
    }
    
    func setupSearchBarView() {
        navigationController?.navigationBar.isHidden = true
        mSearchBar = HomeSearchBar()
        view.addSubview(mSearchBar)
        mSearchBar.snp.makeConstraints { (make) in
            make.left.right.equalTo(view)
            make.top.equalTo(view.snp.top)
            make.height.equalTo(64)
        }
//        weak var weakSelf = self
        mSearchBar.searchBtnAction = { (btn: UIButton) in
            
        }
    }
    
    func setupTableView() {
        mTableView = UITableView(frame: view.frame, style: .plain)
        mTableView.backgroundColor = UIColor.white
        mTableView.register(HomeTableViewCell.classForCoder(), forCellReuseIdentifier: "cell")
        mTableView.delegate = self
        mTableView.dataSource = self
        mTableView.showsVerticalScrollIndicator = false
        mTableView.rowHeight = 90
        mTableView.tableFooterView = UIView()
        view.addSubview(mTableView)
        mTableView.snp.makeConstraints { (make) in
            make.left.bottom.right.equalTo(view)
            make.top.equalTo(view.snp.top).offset(64)
        }
    }
    
    func addRefresh() {
        header = MJRefreshNormalHeader(refreshingBlock: { [weak self] in
            delay(1) {
                self?.mTableView.reloadData()
                self?.mTableView.mj_header.endRefreshing()
            }
        })
        mTableView.mj_header = header
        header.beginRefreshing()
    }
    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
}

extension HomeViewController {
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 20
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 2
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell") as! HomeTableViewCell
        cell.selectionStyle = .none
        return cell
    }
}
