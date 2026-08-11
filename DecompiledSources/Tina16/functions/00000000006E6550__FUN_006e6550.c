/* Ghidra address: 006e6550 */
/* Ghidra symbol: FUN_006e6550 */


ulonglong FUN_006e6550(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x490) == '\0')) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x494);
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x407,1,0);
  }
  return uVar3;
}

