/* Ghidra address: 010a6d20 */
/* Ghidra symbol: FUN_010a6d20 */


undefined4 FUN_010a6d20(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1a70);
  if ((lVar1 == 0) || (*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x38) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x38) + 0x2f8);
  }
  return uVar2;
}

