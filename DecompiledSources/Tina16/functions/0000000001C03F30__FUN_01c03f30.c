/* Ghidra address: 01c03f30 */
/* Ghidra symbol: FUN_01c03f30 */


undefined8 FUN_01c03f30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4a0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x1b8) == 0)) {
    uVar2 = FUN_01c07a90(DAT_02111470,0);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1b8);
  }
  return uVar2;
}

