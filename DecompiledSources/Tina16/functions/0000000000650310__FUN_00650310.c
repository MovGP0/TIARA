/* Ghidra address: 00650310 */
/* Ghidra symbol: FUN_00650310 */


undefined1 FUN_00650310(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (lVar1 == 0) {
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0xb0);
  }
  else {
    uVar2 = *(char *)(lVar1 + 0xb0) != *(char *)(*(longlong *)(param_1 + 0x70) + 0xb0);
  }
  return uVar2;
}

