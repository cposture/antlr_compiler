ALLDIRS = antlr4 src

all:
	@for i in ${ALLDIRS}; \
	do \
		i=`echo "$$i"|sed -e "s/^\s\{1,\}//g"`; \
		if [ -n "$$i" ]; then \
			cd $$i; \
			echo "Making $$i"; \
			$(MAKE) all || exit -1; \
			cd -;\
			echo "Done"; \
		fi \
	done \

clean:
	@for i in ${ALLDIRS}; \
	do \
		i=`echo "$$i"|sed -e "s/^\s\{1,\}//g"`; \
		if [ -n "$$i" ]; then \
			cd $$i; \
			echo "Cleaning $$i"; \
			make clean  || exit -1; \
			cd -; \
			echo "Done"; \
		fi \
	done
	
install:
	@echo "need do nothing"
