/* Ghidra address: 004b2010 */
/* Ghidra symbol: FUN_004b2010 */


undefined8 FUN_004b2010(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + -8);
  }
  return uVar2;
}

