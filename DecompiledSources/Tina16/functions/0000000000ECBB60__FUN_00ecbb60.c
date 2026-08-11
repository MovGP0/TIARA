/* Ghidra address: 00ecbb60 */
/* Ghidra symbol: FUN_00ecbb60 */


void FUN_00ecbb60(void)

{
  undefined8 uVar1;
  
  if (DAT_01ef72c4 == '\0') {
    DAT_0202ead8 = FUN_007fc180(&PTR_FUN_00ec96a8,1,*(undefined8 *)PTR_DAT_02004030);
    uVar1 = FUN_007fc180(&PTR_FUN_00ec8a48,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02003e90 = uVar1;
    if (*(longlong *)PTR_DAT_02001ed0 == 0) {
      uVar1 = FUN_007fc180(&PTR_FUN_00eba9f8,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02001ed0 = uVar1;
    }
    if (*(longlong *)PTR_DAT_020058a0 == 0) {
      uVar1 = FUN_007fc180(&PTR_FUN_00ebcbc8,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_020058a0 = uVar1;
    }
    DAT_01ef72c4 = '\x01';
  }
  return;
}

