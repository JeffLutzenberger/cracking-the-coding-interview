def duplicate_chars(s)
  chars = Hash[]
  s.each_char do |c|
    unless chars[c].nil?
      puts s + ' has dups'
      return
    end
    chars[c] = 1
  end
  puts s + ' no dups '
end

duplicate_chars('foo')
duplicate_chars('bar')
