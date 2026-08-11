/* Ghidra address: 00ec0240 */
/* Ghidra symbol: FUN_00ec0240 */


void FUN_00ec0240(void)

{
  undefined8 uVar1;
  
  if (DAT_01ef6a40 == '\0') {
    DAT_0202eac0 = FUN_007fc180(&PTR_FUN_00ebe178,1,*(undefined8 *)PTR_DAT_02004030);
    uVar1 = FUN_007fc180(&PTR_FUN_00eb8880,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02004f20 = uVar1;
    if (*(longlong *)PTR_DAT_02001ed0 == 0) {
      uVar1 = FUN_007fc180(&PTR_FUN_00eba9f8,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_02001ed0 = uVar1;
    }
    if (*(longlong *)PTR_DAT_020058a0 == 0) {
      uVar1 = FUN_007fc180(&PTR_FUN_00ebcbc8,1,*(undefined8 *)PTR_DAT_02004030);
      *(undefined8 *)PTR_DAT_020058a0 = uVar1;
    }
    DAT_01ef6a40 = '\x01';
  }
  return;
}

