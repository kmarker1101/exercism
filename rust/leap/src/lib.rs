pub fn is_leap_year(year: u64) -> bool {
    let factor = |x| year % x == 0;
    factor(4) && (!factor(100) || factor(400))
}
