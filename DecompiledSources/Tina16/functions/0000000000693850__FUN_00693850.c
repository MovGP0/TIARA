/* Ghidra address: 00693850 */
/* Ghidra symbol: FUN_00693850 */


int * FUN_00693850(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined1 local_28 [16];
  
  FUN_00693810(param_1,param_2);
  FUN_00423b50(param_2,-*param_2,-param_2[1]);
  FUN_00423b10(param_2,0xffffffff,0xffffffff);
  FUN_00423b50(param_2,1,1);
  if (*(char *)(param_1[2] + 0xb1) == '\x01') {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,2);
    param_2[2] = *param_2 + iVar1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,2);
    *param_2 = param_2[2] - iVar1;
  }
  FUN_00693810(param_1,local_28);
  iVar1 = FUN_004230c0(local_28);
  if (0x1e < iVar1) {
    FUN_00423b50(param_2,0xffffffff,0xffffffff);
  }
  return param_2;
}

