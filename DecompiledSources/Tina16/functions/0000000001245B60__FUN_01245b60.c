/* Ghidra address: 01245b60 */
/* Ghidra symbol: FUN_01245b60 */


void FUN_01245b60(int *param_1,int *param_2,char param_3,int param_4)

{
  int in_EAX;
  
  if (param_3 == '\0') {
    in_EAX = *param_1;
    param_4 = *param_2;
  }
  else if (param_3 == '\x01') {
    in_EAX = -*param_2;
    param_4 = *param_1;
  }
  else if (param_3 == '\x02') {
    in_EAX = -*param_1;
    param_4 = -*param_2;
  }
  else if (param_3 == '\x03') {
    in_EAX = *param_2;
    param_4 = -*param_1;
  }
  *param_1 = in_EAX;
  *param_2 = param_4;
  return;
}

