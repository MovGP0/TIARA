/* Ghidra address: 008219a0 */
/* Ghidra symbol: FUN_008219a0 */


ulonglong FUN_008219a0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_00821f80(param_1,param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_00820450();
  }
  else {
    lVar2 = FUN_00821e60(param_1,param_2);
    uVar3 = (ulonglong)*(byte *)(lVar2 + 0x10);
  }
  return uVar3;
}

