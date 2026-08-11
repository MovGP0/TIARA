/* Ghidra address: 007d65b0 */
/* Ghidra symbol: FUN_007d65b0 */


ulonglong FUN_007d65b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0xac);
  }
  else {
    uVar2 = FUN_007d56e0();
    uVar1 = thunk_FUN_041d5618(uVar2);
    uVar3 = FUN_007d5050(uVar1);
  }
  return uVar3;
}

