/* Ghidra address: 010a3ba0 */
/* Ghidra symbol: FUN_010a3ba0 */


void FUN_010a3ba0(longlong param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  
  if (param_3 == *(int *)(param_1 + 0x980)) {
    *param_4 = 1;
    *param_6 = 0xff8080;
  }
  else {
    cVar1 = FUN_010a5480(param_1,param_3);
    if (cVar1 != '\0') {
      *param_4 = 1;
      *param_6 = 0xff;
    }
  }
  return;
}

