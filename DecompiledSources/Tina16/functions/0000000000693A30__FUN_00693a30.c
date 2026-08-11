/* Ghidra address: 00693a30 */
/* Ghidra symbol: FUN_00693a30 */


int * FUN_00693a30(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar2 = thunk_FUN_04118143(param_1[0xd],0xfffffff0);
  if ((uVar2 & 0x200000) == 0) {
    FUN_00423010(&local_38,0,0,0,0);
    *(undefined8 *)param_2 = local_38;
    *(undefined8 *)(param_2 + 2) = uStack_30;
  }
  else {
    FUN_00693810(param_1,param_2);
    FUN_00423b50(param_2,-*param_2,-param_2[1]);
    if (*(char *)(param_1[2] + 0xb1) == '\x01') {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,0x14);
      param_2[2] = *param_2 + iVar1;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1,0x14);
      *param_2 = (param_2[2] - iVar1) + -1;
    }
  }
  return param_2;
}

