//
//  SubjectViewController.swift
//  PillarsCollege
//
//  Created by smile on 19/07/2017.
//  Copyright © 2017 smile. All rights reserved.
//

import UIKit

class SubjectViewController: UIViewController {

    var mSearchBar: HomeSearchBar!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupSearchBarView()
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
