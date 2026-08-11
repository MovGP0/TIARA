/* Ghidra address: 00acc800 */
/* Ghidra symbol: FUN_00acc800 */


void FUN_00acc800(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar9;
  uint in_stack_ffffffffffffff70;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_40 = 0;
  local_48 = 0;
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x2b];
    if (*(char *)(lVar1 + 0x498) == '\0') {
      uVar5 = CONCAT44(uVar9,param_4 + *(int *)(lVar1 + 0x9c));
      FUN_00a71dd0(param_2,param_3,param_4,param_3 + *(int *)(lVar1 + 0x98),uVar5,
                   *(undefined4 *)(param_1[0x2b] + 200),*(undefined1 *)(param_1[3] + 0x90));
      uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar7 = 2;
    }
    else {
      uVar5 = CONCAT44(uVar9,param_4 + *(int *)(lVar1 + 0x9c));
      FUN_00a71ed0(param_2,param_3,param_4,param_3 + *(int *)(lVar1 + 0x98),uVar5,
                   in_stack_ffffffffffffff70 & 0xffffff00,*(undefined1 *)(param_1[3] + 0xb2),0,
                   *(undefined4 *)(param_1[0x2b] + 200),*(undefined1 *)(param_1[3] + 0x90));
      uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      iVar7 = 4;
    }
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_005ff880(param_2,*(undefined8 *)(lVar1 + 0xb8));
    iVar3 = FUN_005fdfd0(param_2,&LAB_00accaa8);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar5,0);
    FUN_00498350(local_38,param_3 + iVar7,param_4 + iVar7,
                 param_3 + *(int *)(lVar1 + 0x98) + iVar7 * -2,
                 CONCAT44(uVar9,param_4 + *(int *)(lVar1 + 0x9c) + iVar7 * -2));
    iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x4d8) + 0x28))(*(longlong **)(lVar1 + 0x4d8));
    iVar6 = *(int *)((longlong)param_1 + 0x16c) + -1;
    iVar8 = iVar4 + -1;
    if (iVar6 <= iVar4 + -1) {
      iVar8 = iVar6;
    }
    local_4c = 0;
    if (-1 < iVar8) {
      iVar8 = iVar8 + 1;
      do {
        (**(code **)(**(longlong **)(lVar1 + 0x4d8) + 0x18))
                  (*(longlong **)(lVar1 + 0x4d8),&local_48,local_4c);
        FUN_009ec420(&local_40,local_48);
        FUN_009ec490(param_2,local_38,param_3 + iVar7,param_4 + iVar7 + local_4c * iVar3,local_40);
        local_4c = local_4c + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

