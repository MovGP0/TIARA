/* Ghidra address: 01953870 */
/* Ghidra symbol: FUN_01953870 */


undefined8 FUN_01953870(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_019538a0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)PTR_DAT_02003a88;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x188);
  }
  return uVar2;
}

