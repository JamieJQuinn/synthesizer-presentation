all:
	pandoc --slide-level=2 --katex -V theme=beige -V history=true -i -V transition=none -t revealjs -s main.md --css=changes.css -o index.html
