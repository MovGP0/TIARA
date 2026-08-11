/* Ghidra address: 00af6e00 */
/* Ghidra symbol: FUN_00af6e00 */


undefined4 FUN_00af6e00(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x8c8) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4a4);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8c8) + 0x28);
    if (lVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)(lVar1 + 0x18);
    }
  }
  return uVar2;
}

