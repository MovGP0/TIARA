/* Ghidra address: 006ec320 */
/* Ghidra symbol: FUN_006ec320 */


ulonglong FUN_006ec320(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_1c [3];
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 == '\0') {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x4b4);
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = thunk_FUN_041b2403(uVar2,0x472,0,local_1c);
    if (local_1c[0] == 0) {
      *(int *)(param_1 + 0x4b4) = (int)uVar3;
    }
    else {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x4b4);
    }
  }
  return uVar3;
}

