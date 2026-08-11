/* Ghidra address: 006fe090 */
/* Ghidra symbol: FUN_006fe090 */


void FUN_006fe090(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (((*(char *)(param_1 + 0x4de) != '\0') && (cVar1 = FUN_0065be20(param_1), cVar1 != '\0')) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_03e49910(uVar4,&local_38);
    iVar2 = FUN_0064d0b0(param_1);
    iVar6 = local_30 - local_38;
    iVar3 = FUN_0064d120(param_1);
    iVar3 = (local_2c - local_34) - iVar3;
    uVar4 = thunk_FUN_03976db5(0,0,*(int *)(param_1 + 0x98) - (iVar6 - iVar2),
                               *(int *)(param_1 + 0x9c) - iVar3);
    uVar5 = thunk_FUN_03976db5(0,0,*(int *)(*(longlong *)(param_2 + 0x10) + 0x18) - iVar3,
                               *(int *)(*(longlong *)(param_2 + 0x10) + 0x1c) - iVar3);
    thunk_FUN_04199bfe(uVar4,uVar5,uVar4,3);
    thunk_FUN_041bfab2(uVar4,&local_38);
    local_38 = local_38 + -2;
    thunk_FUN_0416f828(uVar4);
    thunk_FUN_0416f828(uVar5);
    FUN_00658560(param_1,param_2);
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_041543e0(uVar4,&local_38,0,5);
    return;
  }
  FUN_00658560(param_1,param_2);
  return;
}

