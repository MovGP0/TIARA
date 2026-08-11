/* Ghidra address: 018a65b0 */
/* Ghidra symbol: FUN_018a65b0 */


void FUN_018a65b0(longlong *param_1,ushort param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 local_43 [9];
  undefined2 local_3a;
  
  iVar1 = FUN_004b2060(param_1[0xa5]);
  if (((iVar1 != 0) && ((char)param_1[0xa3] == '\0')) && ((char)param_1[0xa1] == '\0')) {
    if (*(char *)((longlong)param_1 + 0x4f3) == '\0') {
      local_43[0] = 2;
      FUN_018a74f0(param_1,0,param_2,param_3,param_4,local_43);
      FUN_0064e140(param_1,local_3a);
    }
    else {
      if ((param_2 & 1) == 0) {
        FUN_018932d0(param_1,(int)param_1[0x94] - (param_3 - (int)param_1[0xa2]));
        FUN_018933f0(param_1,*(int *)((longlong)param_1 + 0x4b4) -
                             (param_4 - *(int *)((longlong)param_1 + 0x514)));
      }
      else {
        *(int *)((longlong)param_1 + 0x55c) = param_3;
        *(int *)(param_1 + 0xac) = param_4;
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      *(int *)(param_1 + 0xa2) = param_3;
      *(int *)((longlong)param_1 + 0x514) = param_4;
    }
  }
  return;
}

