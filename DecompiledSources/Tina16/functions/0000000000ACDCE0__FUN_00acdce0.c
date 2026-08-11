/* Ghidra address: 00acdce0 */
/* Ghidra symbol: FUN_00acdce0 */


void FUN_00acdce0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  uint in_stack_ffffffffffffff70;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38 [6];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_40 = 0;
  local_48 = 0;
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar3 != '\0') {
    if (*(char *)(param_1[0x2b] + 0x498) == '\0') {
      uVar6 = 2;
    }
    else {
      uVar6 = 4;
    }
    lVar2 = param_1[0x2b];
    FUN_005ff880(param_2,*(undefined8 *)(lVar2 + 0xb8));
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0xb8) + 0x18) + 0x28);
    uVar5 = (int)uVar1 >> 0x1f;
    if (*(char *)(lVar2 + 0x498) == '\0') {
      uVar4 = CONCAT44(uVar7,param_4 + *(int *)(lVar2 + 0x9c));
      FUN_00a71dd0(param_2,param_3,param_4,param_3 + *(int *)(lVar2 + 0x98),uVar4,
                   *(undefined4 *)(lVar2 + 200),*(undefined1 *)(param_1[3] + 0x90));
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      uVar4 = CONCAT44(uVar7,param_4 + *(int *)(lVar2 + 0x9c));
      FUN_00a71ed0(param_2,param_3,param_4,param_3 + *(int *)(lVar2 + 0x98),uVar4,
                   in_stack_ffffffffffffff70 & 0xffffff00,*(undefined1 *)(param_1[3] + 0xb2),0,
                   *(undefined4 *)(lVar2 + 200),*(undefined1 *)(param_1[3] + 0x90));
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar4,0);
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_03b994b9(uVar4,1);
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_00498350(local_38,param_3 + uVar6,param_4,(param_3 + *(int *)(lVar2 + 0x98)) - uVar6 / 2,
                 CONCAT44(uVar7,param_4 + *(int *)(lVar2 + 0x9c)));
    FUN_0064dd90(lVar2,&local_48);
    FUN_009ec420(&local_40,local_48);
    FUN_009ec490(param_2,local_38,local_38[0],
                 param_4 + (int)(*(int *)(lVar2 + 0x9c) - ((uVar1 ^ uVar5) - uVar5)) / 2 + -1,
                 local_40);
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  return;
}

