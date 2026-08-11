/* Ghidra address: 0083d680 */
/* Ghidra symbol: FUN_0083d680 */


ulonglong FUN_0083d680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  char cVar1;
  undefined8 unaff_R13;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  cVar1 = FUN_0083d610(param_1,param_3,param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_0083d610(param_1,param_4,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(param_2 + 8) = *param_5;
    }
  }
  else {
    cVar1 = FUN_0083d610(param_1,param_5,param_2 + 8);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_2 + 8) = *param_4;
    }
  }
  return uVar2 & 0xffffffff;
}

