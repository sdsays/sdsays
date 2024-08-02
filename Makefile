.PHONY: all publish

all: publish

publish:
	emacs --batch --eval '(progn(package-initialize))' --load ~/.emacs.d/gv/gv-blog.el --funcall org-publish-all

clean:
	@echo "Cleaning up.."
	@rm -rvf *.elc
	@rm -rvf ~/proj/sdsays.github.io/*
	@rm -rvf ~/.org-timestamps/*
