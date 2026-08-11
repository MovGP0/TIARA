/* Ghidra address: 0069d130 */
/* Ghidra symbol: FUN_0069d130 */


void FUN_0069d130(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = thunk_FUN_03e5bd07(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x40),0x5a);
  if (iVar2 != *(int *)(*(longlong *)(param_1 + 0x70) + 0x2c)) {
    uVar3 = FUN_005fce00(*(longlong *)(param_1 + 0x70));
    uVar4 = thunk_FUN_03e5bd07(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x40),0x5a);
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x2c) = uVar4;
    FUN_005fce30(lVar1,uVar3);
  }
  return;
}

