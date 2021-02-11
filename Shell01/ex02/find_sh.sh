find ./ -type f -name "*.sh" -execdir echo {} \; | rev  |cut -c4- | rev
