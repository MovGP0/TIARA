/* Ghidra address: 00626380 */
/* Ghidra symbol: FUN_00626380 */


void FUN_00626380(void)

{
  DAT_02012264 = DAT_02012264 + -1;
  if (DAT_02012264 == -1) {
    FUN_00624ed0();
    *(code **)PTR_PTR_02004330 = FUN_006259d0;
    *(code **)PTR_PTR_020019f0 = FUN_00625c10;
    *(code **)PTR_PTR_02004828 = FUN_006252a0;
    if (*PTR_DAT_02001218 == '\0') {
      DAT_02012278 = *(undefined8 *)PTR_PTR_02003510;
      *(code **)PTR_PTR_02003510 = FUN_006261d0;
    }
  }
  return;
}

