/* Ghidra address: 00626310 */
/* Ghidra symbol: FUN_00626310 */


void FUN_00626310(void)

{
  DAT_02012264 = DAT_02012264 + 1;
  if (DAT_02012264 == 0) {
    DAT_02012268 = 1;
    FUN_00410f20(DAT_02012270);
    *(undefined8 *)PTR_PTR_02004828 = 0;
    *(undefined8 *)PTR_PTR_020019f0 = 0;
    *(undefined8 *)PTR_PTR_02004330 = 0;
    if (DAT_01df0c49 != '\0') {
      thunk_FUN_041ebfa9();
    }
  }
  return;
}

