/* Ghidra address: 00ec0300 */
/* Ghidra symbol: FUN_00ec0300 */


void FUN_00ec0300(void)

{
  undefined8 uVar1;
  
  if (DAT_01ef6a40 != '\0') {
    FUN_00410f20(DAT_0202eac0);
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004f20);
    uVar1 = *(undefined8 *)PTR_DAT_02001ed0;
    *(undefined8 *)PTR_DAT_02001ed0 = 0;
    FUN_00410f20(uVar1);
    uVar1 = *(undefined8 *)PTR_DAT_020058a0;
    *(undefined8 *)PTR_DAT_020058a0 = 0;
    FUN_00410f20(uVar1);
    DAT_01ef6a40 = '\0';
  }
  return;
}

