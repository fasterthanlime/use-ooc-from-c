
shuffle: func (s: String) -> String {
    s iterator() toList() shuffle() join()
}