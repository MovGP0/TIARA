/* Ghidra address: 006f8d40 */
/* Ghidra symbol: FUN_006f8d40 */


ulonglong FUN_006f8d40(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x560);
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x1048,0,0);
  }
  return uVar3;
}

