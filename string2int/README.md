# 字符串转整形

首先atoi和strtol都是c里面的函数，他们都可以将字符串转为int，它们的参数都是const char*，因此在用string时，必须调c_str()方法将其转为char*的字符串 。