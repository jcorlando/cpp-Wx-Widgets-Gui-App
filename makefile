main.exe: MyApp.cpp MyFrame.cpp
	./build.sh
clean:
	rm main.exe && touch MyApp.cpp MyFrame.cpp