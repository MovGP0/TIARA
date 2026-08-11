/* Ghidra address: 00acab30 */
/* Ghidra symbol: FUN_00acab30 */


void FUN_00acab30(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 in_stack_ffffffffffffff68;
  uint in_stack_ffffffffffffff70;
  undefined8 local_40;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_40 = 0;
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar3 != '\0') {
    FUN_00498350(&local_38,param_3,param_4,param_3 + *(int *)(param_1[0x2b] + 0x98),
                 CONCAT44(uVar4,param_4 + *(int *)(param_1[0x2b] + 0x9c)));
    lVar2 = param_1[0x2b];
    if (*(char *)(lVar2 + 0x4b4) == '\0') {
      FUN_00a71dd0(param_2,local_38,local_34,local_30,local_2c,*(undefined4 *)(lVar2 + 200),
                   *(undefined1 *)(param_1[3] + 0x90));
      iVar5 = 2;
    }
    else {
      FUN_00a71ed0(param_2,local_38,local_34,local_30,local_2c,
                   in_stack_ffffffffffffff70 & 0xffffff00,*(undefined1 *)(param_1[3] + 0xb2),0,
                   *(undefined4 *)(lVar2 + 200),*(undefined1 *)(param_1[3] + 0x90));
      iVar5 = 4;
    }
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_005ff880(param_2,*(undefined8 *)(param_1[0x2b] + 0xb8));
    uVar4 = *(undefined4 *)(*(longlong *)(param_1[0x2b] + 0xb8) + 0x28);
    if (((*(byte *)(param_1[3] + 0x90) & 1) != 0) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
      uVar8 = FUN_00781840();
      uVar4 = FUN_007793c0(uVar8,uVar4);
    }
    uVar4 = FUN_005fbf20(uVar4);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar4);
    uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 0x28);
    uVar9 = (int)uVar1 >> 0x1f;
    uVar8 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar8,0);
    thunk_FUN_04176532(&local_38,-iVar5,-iVar5);
    iVar5 = FUN_0068bee0(param_1[0x2b]);
    iVar6 = (**(code **)(**(longlong **)(param_1[0x2b] + 0x4a0) + 0x28))
                      (*(longlong **)(param_1[0x2b] + 0x4a0));
    iVar7 = FUN_0068bee0(param_1[0x2b]);
    iVar7 = iVar7 + (int)param_1[0x2a] + -1;
    if (iVar6 + -1 < iVar7) {
      iVar7 = iVar6 + -1;
    }
    if (iVar5 <= iVar7) {
      iVar7 = (iVar7 - iVar5) + 1;
      do {
        iVar6 = FUN_0068bee0(param_1[0x2b]);
        (**(code **)(**(longlong **)(param_1[0x2b] + 0x4a0) + 0x18))
                  (*(longlong **)(param_1[0x2b] + 0x4a0),&local_40,iVar5);
        FUN_009ec490(param_2,&local_38,local_38,
                     local_34 + (iVar5 - iVar6) * ((uVar1 ^ uVar9) - uVar9),local_40);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_00414480(&local_40);
  return;
}

