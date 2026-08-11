/* Ghidra address: 0188b570 */
/* Ghidra symbol: FUN_0188b570 */


void FUN_0188b570(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x44) !=
      *(int *)(*(longlong *)(param_1 + 0x70) + 0x2c)) {
    uVar2 = FUN_005fce00(*(longlong *)(param_1 + 0x70));
    lVar1 = *(longlong *)(param_1 + 0x70);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x44);
    FUN_005fce30(lVar1,uVar2);
  }
  return;
}

