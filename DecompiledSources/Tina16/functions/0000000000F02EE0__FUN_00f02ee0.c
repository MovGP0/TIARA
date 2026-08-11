/* Ghidra address: 00f02ee0 */
/* Ghidra symbol: FUN_00f02ee0 */


undefined4 FUN_00f02ee0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f03100();
  if (lVar2 == 0) {
    uVar1 = 0xff000005;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 200);
  }
  return uVar1;
}

