/* Ghidra address: 00c60930 */
/* Ghidra symbol: FUN_00c60930 */


undefined8
FUN_00c60930(longlong *param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
            undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 uVar6;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  
  lVar1 = param_1[2];
  piVar5 = &local_30;
  FUN_017954b0(lVar1,param_5,param_6,&local_2c,piVar5);
  uVar6 = (undefined4)((ulonglong)piVar5 >> 0x20);
  if (*(char *)(*(longlong *)(param_1[2] + 0x990) + 0x328) != '\0') {
    local_2c = ((local_2c + 2) / 4) * 4;
    local_30 = ((local_30 + 2) / 4) * 4;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if (param_1[4] == 0) {
    FUN_017956f0(lVar1);
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    param_1[4] = lVar3;
    local_40[0] = FUN_00498310(local_2c,local_30);
    uVar4 = FUN_00c60900(local_40);
    FUN_004ae7e0(lVar3,uVar4);
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(**(longlong **)(lVar1 + 0xd28) + 0x10))(*(longlong **)(lVar1 + 0xd28));
    FUN_00498350(&local_50,local_2c + -2,local_30 + -2,local_2c + 2,CONCAT44(uVar6,local_30 + 2));
    param_1[6] = local_50;
    param_1[7] = lStack_48;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  }
  else if ((param_4 & 4) == 0) {
    uVar4 = FUN_00498310(local_2c,local_30);
    iVar2 = thunk_FUN_03f16006(param_1 + 6,uVar4);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
      (**(code **)(*param_1 + 8))(param_1);
      return 0;
    }
  }
  local_40[0] = FUN_00498310(local_2c,local_30);
  uVar4 = FUN_00c60900(local_40);
  FUN_004ae7e0(param_1[4],uVar4);
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  (**(code **)(*param_1 + 0x20))(param_1);
  return 0;
}

