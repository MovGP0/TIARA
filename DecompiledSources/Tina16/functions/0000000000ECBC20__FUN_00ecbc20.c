/* Ghidra address: 00ecbc20 */
/* Ghidra symbol: FUN_00ecbc20 */


void FUN_00ecbc20(void)

{
  undefined8 uVar1;
  
  if (DAT_01ef72c4 != '\0') {
    FUN_00410f20(DAT_0202ead8);
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003e90);
    uVar1 = *(undefined8 *)PTR_DAT_02001ed0;
    *(undefined8 *)PTR_DAT_02001ed0 = 0;
    FUN_00410f20(uVar1);
    uVar1 = *(undefined8 *)PTR_DAT_020058a0;
    *(undefined8 *)PTR_DAT_020058a0 = 0;
    FUN_00410f20(uVar1);
    DAT_01ef72c4 = '\0';
  }
  return;
}

