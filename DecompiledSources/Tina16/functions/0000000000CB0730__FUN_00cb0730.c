/* Ghidra address: 00cb0730 */
/* Ghidra symbol: FUN_00cb0730 */


void FUN_00cb0730(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00876b00(param_2,param_3,param_4);
  if (0 < iVar1) {
    if (param_1[0x28] == 0) {
      FUN_00cb0c10(param_1,param_2,iVar1,param_4);
    }
    else {
      FUN_00c8c100(param_1[0x28],param_2,iVar1,param_4,0xffffffff);
      if (((int)param_1[0x29] <= *(int *)(param_1[0x28] + 0x30)) && (0 < (int)param_1[0x29])) {
        do {
          (**(code **)(*param_1 + 0x1c0))(param_1,(int)param_1[0x29]);
        } while ((int)param_1[0x29] <= *(int *)(param_1[0x28] + 0x30));
      }
    }
  }
  return;
}

