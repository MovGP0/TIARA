/* Ghidra address: 00c24060 */
/* Ghidra symbol: FUN_00c24060 */


undefined8 FUN_00c24060(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00c1aa10(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x50));
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c237c0(param_1);
  }
  return uVar2;
}

