/* Ghidra address: 00b42210 */
/* Ghidra symbol: FUN_00b42210 */


void FUN_00b42210(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_00b258c0(param_2);
    if (iVar1 < 8) break;
    FUN_00b42010(param_1,param_2);
    if (5 < (ushort)(*(short *)(param_1 + 0x23) + 0x1000U)) {
      if (*(short *)(param_1 + 0x23) == -0xff9) {
        FUN_00b42070(param_1,param_2);
      }
      else {
        FUN_00b257f0(param_2,*(undefined4 *)(param_1 + 0x25));
      }
    }
  }
  return;
}

