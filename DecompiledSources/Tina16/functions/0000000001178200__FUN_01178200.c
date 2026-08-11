/* Ghidra address: 01178200 */
/* Ghidra symbol: FUN_01178200 */


void FUN_01178200(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
  *(undefined8 *)(PTR_DAT_020021e8 + 0x40) = uVar2;
  FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x840),
               *(undefined8 *)(PTR_DAT_020021e8 + 0x40));
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa8);
  if (sVar1 == 0x41) {
    *(undefined8 *)PTR_DAT_02001fd8 = 0x4202a05f20000000;
  }
  else if ((sVar1 == 0x46) || (sVar1 == 0x49)) {
    *(double *)PTR_DAT_02001fd8 = *(double *)(PTR_DAT_020021e8 + 0x40) / 2.0;
  }
  return;
}

