/* Ghidra address: 00821830 */
/* Ghidra symbol: FUN_00821830 */


void FUN_00821830(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_008219a0(param_1,param_2);
  if (param_3 != cVar2) {
    lVar1 = FUN_00821e60(param_1,param_2);
    *(char *)(lVar1 + 0x10) = param_3;
    FUN_00821870(param_1,param_2);
  }
  return;
}

