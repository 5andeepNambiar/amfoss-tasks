extern crate reqwest;
extern crate scraper;



use scraper::{Html, Selector};

fn main() {
     
   scrape_coronavirus_data("https://www.worldometers.info/coronavirus/#countries");
}

fn scrape_coronavirus_data(url:&str){
 
   
    let mut req = reqwest::get(url).unwrap();
    assert!(req.status().is_success());
    let doc_body = Html::parse_document(&req.text().unwrap());
    
    let corona_headings= Selector::parse("#maincounter-wrap > h1").unwrap();
    let corona_updates = Selector::parse("#maincounter-wrap > div > span").unwrap();
 
    
    for corona_headings in doc_body.select(&corona_headings){
        let corona_headings = corona_headings.text().collect::<Vec<_>>();
        println!("{}", corona_headings[0]);
    }
  
    for corona_updates in doc_body.select(&corona_updates){
        let corona_updates = corona_updates.text().collect::<Vec<_>>();
        println!("{:?}", corona_updates);
 }
  
 }
 
 
