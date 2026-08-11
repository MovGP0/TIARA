/* Ghidra address: 01c9aa00 */
/* Ghidra symbol: FUN_01c9aa00 */


void FUN_01c9aa00(void)

{
  if (*(longlong *)PTR_DAT_02005738 == 0) {
    if (*(longlong *)PTR_DAT_020056e0 == 0) {
      FUN_00410f20(*(undefined8 *)PTR_DAT_02002ab0);
      *(undefined8 *)PTR_DAT_02004c68 = 0;
      *(undefined8 *)PTR_DAT_02002ab0 = 0;
    }
    else {
      FUN_00410f20(*(undefined8 *)PTR_DAT_020056e0);
      *(undefined8 *)PTR_DAT_02004c68 = 0;
      *(undefined8 *)PTR_DAT_020056e0 = 0;
    }
  }
  else {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02005738);
    *(undefined8 *)PTR_DAT_02005738 = 0;
    *(undefined8 *)PTR_DAT_02004c68 = 0;
  }
  return;
}

