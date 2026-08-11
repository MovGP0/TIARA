/* Ghidra address: 0136d170 */
/* Ghidra symbol: FUN_0136d170 */


undefined1 FUN_0136d170(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 uVar6;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  
  uVar4 = *(undefined8 *)(param_1[2] + 0x27a8);
  uVar2 = FUN_0198d430(uVar4);
  piVar5 = &local_30;
  FUN_01a982d0(uVar2,param_2,param_3,&local_2c,piVar5);
  uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_01b1ccc0(&local_2c,&local_30);
  if (param_1[3] == 0) {
    FUN_01994230(uVar4);
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    param_1[3] = lVar3;
    local_40[0] = FUN_00498310(local_2c,local_30);
    uVar4 = FUN_0136d140(local_40);
    FUN_004ae7e0(lVar3,uVar4);
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00498350(&local_50,local_2c + -2,local_30 + -2,local_2c + 2,CONCAT44(uVar6,local_30 + 2));
    param_1[5] = local_50;
    param_1[6] = lStack_48;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  }
  else {
    uVar4 = FUN_00498310(local_2c,local_30);
    iVar1 = thunk_FUN_03f16006(param_1 + 5,uVar4);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
      (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
      return 0;
    }
  }
  local_40[0] = FUN_00498310(local_2c,local_30);
  uVar4 = FUN_0136d140(local_40);
  FUN_004ae7e0(param_1[3],uVar4);
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  (**(code **)(*param_1 + 0x20))(param_1);
  return 0;
}

