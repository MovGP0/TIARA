/* Ghidra address: 01b677e0 */
/* Ghidra symbol: FUN_01b677e0 */


void FUN_01b677e0(undefined8 param_1,double *param_2,double param_3,char param_4)

{
  double dVar1;
  undefined1 auStack_38 [40];
  
  if (param_4 == '\0') {
    dVar1 = (double)FUN_01b67770(auStack_38,*param_2 - param_3 / 4.0,param_3 / 4.0);
    *param_2 = dVar1;
  }
  else if (param_4 == '\x01') {
    dVar1 = (double)FUN_01b67770(auStack_38,*param_2 + param_3 / 4.0,param_3 / 4.0);
    *param_2 = dVar1;
  }
  else if (param_4 == '\x06') {
    dVar1 = (double)FUN_01b67770(auStack_38,*param_2,param_3 / 4.0);
    *param_2 = dVar1;
  }
  return;
}

