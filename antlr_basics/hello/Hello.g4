// grammer 表示语法文件，参数 Hello 保持文件一致
grammar Hello;

// welcome 语法规则，hello 引号表示字符串本身，ID 是一个非终结符
welcome: 'hello' ID;

// ID 非终结符：由一条正则表示
ID: [a-zA-Z]+;

// 忽略空白符
SPACE: [\t\r\n ]+ -> skip;
