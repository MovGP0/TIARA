/* Ghidra address: 00b425a0 */
/* Ghidra symbol: FUN_00b425a0 */


void FUN_00b425a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  while( true ) {
    iVar2 = FUN_00b258c0(param_2);
    if (iVar2 < 8) break;
    FUN_00b42010(param_1,param_2);
    sVar1 = *(short *)(param_1 + 0x23);
    if (5 < (ushort)(sVar1 + 0x1000U)) {
      if (sVar1 == -0xff6) {
        FUN_00b42270(param_1,param_2);
      }
      else if (sVar1 == -0xff5) {
        FUN_00b42340(param_1,param_2);
      }
      else if (sVar1 == -0xff0) {
        FUN_00b42460(param_1,param_2);
      }
      else {
        FUN_00b257f0(param_2,*(undefined4 *)(param_1 + 0x25));
      }
    }
  }
  return;
}

