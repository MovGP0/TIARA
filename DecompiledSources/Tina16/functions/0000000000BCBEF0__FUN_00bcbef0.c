/* Ghidra address: 00bcbef0 */
/* Ghidra symbol: FUN_00bcbef0 */


undefined8
FUN_00bcbef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  short *psVar3;
  int local_2c [3];
  
  FUN_00414ad0(param_1,param_2);
  cVar1 = FUN_00bcbec0(param_2,local_2c);
  if (cVar1 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = 1;
    lVar2 = FUN_00414de0(param_1);
    psVar3 = (short *)(lVar2 + -2 + (longlong)(local_2c[0] + 1) * 2);
    do {
      if (*psVar3 == 9) {
        *psVar3 = 0x20;
      }
      psVar3 = psVar3 + 1;
    } while (*psVar3 != 0);
  }
  return param_1;
}

