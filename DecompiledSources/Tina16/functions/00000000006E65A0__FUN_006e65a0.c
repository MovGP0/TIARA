/* Ghidra address: 006e65a0 */
/* Ghidra symbol: FUN_006e65a0 */


ulonglong FUN_006e65a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x490) == '\0')) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x498);
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x407,0,0);
  }
  return uVar3;
}

