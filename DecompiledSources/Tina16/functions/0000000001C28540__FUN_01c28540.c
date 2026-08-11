/* Ghidra address: 01c28540 */
/* Ghidra symbol: FUN_01c28540 */


undefined8 FUN_01c28540(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01c27400();
  uVar2 = 0;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + -8);
  }
  return uVar2;
}

