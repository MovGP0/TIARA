/* Ghidra address: 0044ead0 */
/* Ghidra symbol: FUN_0044ead0 */


void FUN_0044ead0(void)

{
  if (DAT_0200c670 != (longlong *)0x0) {
    *(undefined1 *)(DAT_0200c670 + 6) = 1;
    (**(code **)(*DAT_0200c670 + -0x28))(DAT_0200c670);
    DAT_0200c670 = (longlong *)0x0;
  }
  if (DAT_0200c678 != 0) {
    *(undefined1 *)(DAT_0200c678 + 0x30) = 1;
    FUN_00410f20(DAT_0200c678);
    DAT_0200c678 = 0;
  }
  *(undefined8 *)PTR_PTR_02001600 = 0;
  *(undefined8 *)PTR_PTR_02002960 = 0;
  *(undefined8 *)PTR_PTR_02002030 = 0;
  *(undefined8 *)PTR_PTR_02002858 = 0;
  *(undefined8 *)PTR_PTR_020029f8 = 0;
  *(undefined8 *)PTR_PTR_02003fa8 = 0;
  return;
}

