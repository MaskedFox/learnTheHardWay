class Song(object):
    def __init__(self,lyrics):
        self.lyrics = lyrics

    def sing_me_a_song(self):
        for line in self.lyrics:
            print(line)


happy_bday = Song(["Happy birthday to you",
                   "I don't want to get sued",
                   "So I ll stop right there"])

bulls_on_parade = Song(["They rally around that family",
                        "With pockets full of shells"])

sweetHomeStayIn = Song(["Sweet Home StayIn enforced!",
                        "If you go out be kind to others and use a Face Mask"])
# Similar to a song you know, but this one is with a gum as in chewing gum =p
yetAnotherSong = ["Hey Joe, where you goin' with that gum in your hand?",
                 "Hey Joe, I said where you goin' with that gum in your hand?"]

lastSong = Song(yetAnotherSong)

happy_bday.sing_me_a_song()
bulls_on_parade.sing_me_a_song()
sweetHomeStayIn.sing_me_a_song()
lastSong.sing_me_a_song()