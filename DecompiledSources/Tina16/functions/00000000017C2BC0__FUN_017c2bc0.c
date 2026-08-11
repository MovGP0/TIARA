/* Ghidra address: 017c2bc0 */
/* Ghidra symbol: FUN_017c2bc0 */


void FUN_017c2bc0(longlong param_1)

{
  short sVar1;
  int iVar2;
  short extraout_var;
  short extraout_var_00;
  
  iVar2 = FUN_017c2b70(param_1);
  if (iVar2 < 2) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    sVar1 = FUN_017c2c60(param_1,0);
    *(int *)(param_1 + 0xc) = (int)sVar1;
    FUN_017c2c60(param_1,0);
    *(int *)(param_1 + 0x10) = (int)extraout_var;
    sVar1 = FUN_017c2c60(param_1,0xffffffff);
    *(int *)(param_1 + 0x90) = (int)sVar1;
    FUN_017c2c60(param_1,0xffffffff);
    *(int *)(param_1 + 0x94) = (int)extraout_var_00;
  }
  return;
}

