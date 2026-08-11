/* Ghidra address: 00ad69a0 */
/* Ghidra symbol: FUN_00ad69a0 */


void FUN_00ad69a0(longlong *param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (param_2 + *(int *)(param_3 + 0xc) <= iVar1) break;
    FUN_00417320(&local_58,0x6f,*(undefined4 *)(*(longlong *)(param_1[0xf] + 0xd8) + 0x10));
    FUN_009ec420(local_50,local_58);
    (**(code **)(*param_1 + 0x78))(param_1,local_50[0]);
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_60,param_2);
  iVar1 = FUN_004170c0(&LAB_00ad6b88,local_60,1);
  if (0 < iVar1) {
    iVar4 = param_2 + *(int *)(param_3 + 0xc) + -1;
    if (param_2 <= iVar4) {
      iVar4 = (iVar4 - param_2) + 1;
      do {
        iVar3 = *(int *)(param_3 + 8);
        (**(code **)(*param_1 + 0x18))(param_1,local_40,param_2);
        local_64 = iVar1;
        do {
          if (*(short *)(local_40[0] + -2 + (longlong)local_64 * 2) != 0x6f) break;
          lVar2 = FUN_00414de0(local_40);
          *(undefined2 *)(lVar2 + -2 + (longlong)local_64 * 2) = 0x78;
          local_64 = local_64 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        (**(code **)(*param_1 + 0x40))(param_1,param_2,local_40[0]);
        if (0 < iVar3) {
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) - iVar3;
        }
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414480(local_40);
  return;
}

