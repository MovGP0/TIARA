/* Ghidra address: 00a9ac50 */
/* Ghidra symbol: FUN_00a9ac50 */


void FUN_00a9ac50(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 local_38 [16];
  
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar5 == '\0') {
    if (*(char *)(param_1[5] + 0x40) == '\0') {
      FUN_00a9b3f0(param_1,*(undefined4 *)(param_1[3] + 0x168));
    }
    else {
      FUN_00a9b3f0(param_1,*(undefined4 *)(param_1[5] + 0x44));
    }
    if ((char)param_1[0x1d] == '\0') {
      return;
    }
    cVar5 = (**(code **)(**(longlong **)(param_1[3] + 0xb8) + 0x450))
                      (*(longlong **)(param_1[3] + 0xb8));
    if (cVar5 == '\0') {
      return;
    }
    FUN_005fdab0(param_2[0x10],0xffffff);
    if (100 < *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) {
      iVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
      iVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
      iVar9 = (**(code **)(*param_1 + 0xf0))(param_1);
      iVar11 = (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_004238d0(local_38,iVar7 + -2,iVar8 + -2,iVar9 + 0x12,iVar11 + 0x12);
      (**(code **)(*param_2 + 0x98))(param_2,local_38);
      return;
    }
    iVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
    iVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
    iVar9 = (**(code **)(*param_1 + 0xf0))(param_1);
    iVar11 = (**(code **)(*param_1 + 0xf8))(param_1);
    FUN_004238d0(local_38,iVar7 + -3,iVar8 + -2,iVar9 + 0x10,iVar11 + 0x10);
    (**(code **)(*param_2 + 0x98))(param_2,local_38);
    return;
  }
  iVar7 = param_3 + 0xe;
  iVar8 = param_4 + 0xe;
  uVar6 = FUN_005fd660(param_2[0xf]);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2[0xf] + 0x18) + 0x2c);
  uVar1 = *(undefined1 *)(*(longlong *)(param_2[0x10] + 0x18) + 0x38);
  uVar3 = *(undefined4 *)(*(longlong *)(param_2[0x10] + 0x18) + 0x28);
  if (*(char *)(param_1[3] + 0xb2) != '\0') {
    uVar12 = FUN_005ffa40(param_2);
    iVar9 = thunk_FUN_03e5bd07(uVar12,0xc);
    if (iVar9 == 1) {
      uVar12 = FUN_005ffa40(param_2);
      iVar9 = thunk_FUN_03e5bd07(uVar12,0xe);
      if (iVar9 == 1) {
        bVar4 = true;
        goto LAB_00a9ad3c;
      }
    }
  }
  bVar4 = false;
LAB_00a9ad3c:
  if (((char)param_1[0x22] == '\0') || (bVar4)) {
    FUN_005fdab0(param_2[0x10],0xffffff);
  }
  else {
    if (((*(byte *)(param_1[3] + 0x90) & 2) == 0) || (cVar5 = FUN_00781870(), cVar5 == '\0')) {
      uVar10 = 0xff00000f;
    }
    else {
      uVar12 = FUN_00781840();
      uVar10 = FUN_007793c0(uVar12,0xff00000f);
    }
    uVar10 = FUN_005fbf20(uVar10);
    FUN_005fdab0(param_2[0x10],uVar10);
  }
  FUN_005fd4e0(param_2[0xf],0xffffff);
  (**(code **)(*param_2 + 0xa0))(param_2,param_3,param_4,iVar7,iVar8);
  FUN_005fd670(param_2[0xf],6);
  if (bVar4) {
    FUN_005fd6d0(param_2[0xf],1);
    FUN_005fd4e0(param_2[0xf],0);
  }
  else {
    FUN_005fd6d0(param_2[0xf],2);
    if (((*(byte *)(param_1[3] + 0x90) & 2) == 0) || (cVar5 = FUN_00781870(), cVar5 == '\0')) {
      uVar10 = 0xff000010;
    }
    else {
      uVar12 = FUN_00781840();
      uVar10 = FUN_007793c0(uVar12,0xff000010);
    }
    uVar10 = FUN_005fbf20(uVar10);
    FUN_005fd4e0(param_2[0xf],uVar10);
  }
  (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4,iVar7,iVar8,iVar7,param_4,param_3,iVar8);
  if (!bVar4) {
    if (((*(byte *)(param_1[3] + 0x90) & 2) == 0) || (cVar5 = FUN_00781870(), cVar5 == '\0')) {
      uVar10 = 0xff000014;
    }
    else {
      uVar12 = FUN_00781840();
      uVar10 = FUN_007793c0(uVar12,0xff000014);
    }
    uVar10 = FUN_005fbf20(uVar10);
    FUN_005fd4e0(param_2[0xf],uVar10);
  }
  (**(code **)(*param_2 + 0x60))(param_2,param_3,param_4,iVar7,iVar8,param_3,iVar8,iVar7,param_4);
  cVar5 = FUN_00a9b200(param_1);
  if (cVar5 != '\0') {
    FUN_005fd4e0(param_2[0xf],0);
    uVar10 = *(undefined4 *)(*(longlong *)(param_2[0x10] + 0x18) + 0x28);
    FUN_005fdab0(param_2[0x10],0);
    FUN_005fdcb0(param_2[0x10],0);
    (**(code **)(*param_2 + 0xa0))(param_2,param_3 + 5,param_4 + 5,param_3 + 9,param_4 + 9);
    FUN_005fdab0(param_2[0x10],uVar10);
  }
  FUN_005fd6d0(param_2[0xf],uVar2);
  FUN_005fd670(param_2[0xf],uVar6);
  FUN_005fdab0(param_2[0x10],uVar3);
  FUN_005fdcb0(param_2[0x10],uVar1);
  return;
}

