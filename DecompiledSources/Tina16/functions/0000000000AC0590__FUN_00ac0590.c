/* Ghidra address: 00ac0590 */
/* Ghidra symbol: FUN_00ac0590 */


undefined4
FUN_00ac0590(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_48 [24];
  
  iVar5 = *(int *)(param_1 + 0x74);
  uVar4 = FUN_00ac3640(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar9 = iVar5 - *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
  if (iVar9 + *(int *)(param_1 + 0x88) < *(int *)(param_3 + 4)) {
    return uVar4;
  }
  if (*(int *)(param_3 + 0xc) <= iVar9) {
    return uVar4;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x92) != '\0') &&
     (*(int *)(*(longlong *)(param_1 + 0x18) + 0x218) <= iVar5)) {
    return uVar4;
  }
  param_5 = param_5 + *(int *)(param_1 + 0xb8);
  iVar10 = param_5 + *(int *)(param_1 + 0xb4);
  iVar11 = iVar10 + -1;
  iVar5 = *(int *)(param_1 + 0xac);
  if (iVar5 != 0x1fffffff) {
    if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 2) != 0) &&
       (cVar3 = FUN_00781870(), cVar3 != '\0')) {
      uVar8 = FUN_00781840();
      iVar5 = FUN_007793c0(uVar8,iVar5);
    }
    uVar6 = FUN_005fbf20(iVar5);
    FUN_005fdab0(param_2[0x10],uVar6 | 0x2000000);
    FUN_005fdcb0(param_2[0x10],0);
    FUN_004238d0(local_48,param_5,iVar9,iVar10,iVar9 + *(int *)(param_1 + 0xa8));
    (**(code **)(*param_2 + 0xa8))(param_2,local_48);
    goto LAB_00ac095f;
  }
  if (*(char *)(param_1 + 0xb1) == '\0') goto LAB_00ac095f;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x92) == '\0') {
    uVar7 = *(undefined4 *)(lVar1 + 0x168);
    if (((*(byte *)(*(longlong *)(lVar1 + 0x20) + 0x90) & 1) != 0) &&
       (cVar3 = FUN_00781870(), cVar3 != '\0')) {
      uVar8 = FUN_00781840();
      uVar7 = FUN_007793c0(uVar8,uVar7);
    }
    iVar5 = FUN_005fbf20(uVar7);
    bVar12 = iVar5 == 0xffffff;
  }
  else {
    bVar12 = true;
  }
  if (*(char *)(param_1 + 0xb2) == '\0') {
    if (*(char *)(lVar1 + 0x92) != '\0') {
      uVar8 = FUN_005ffa40(param_2);
      iVar5 = thunk_FUN_03e5bd07(uVar8,0xc);
      if (iVar5 == 1) {
        uVar8 = FUN_005ffa40(param_2);
        iVar5 = thunk_FUN_03e5bd07(uVar8,0xe);
        if (iVar5 == 1) goto LAB_00ac07db;
      }
    }
    bVar2 = false;
  }
  else {
LAB_00ac07db:
    bVar2 = true;
  }
  if (bVar2) {
    FUN_005fd4e0(param_2[0xf],0);
  }
  else if (bVar12) {
    FUN_005fd4e0(param_2[0xf],0xc0c0c0);
  }
  else {
    if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 2) == 0) ||
       (cVar3 = FUN_00781870(), cVar3 == '\0')) {
      uVar7 = 0xff000014;
    }
    else {
      uVar8 = FUN_00781840();
      uVar7 = FUN_007793c0(uVar8,0xff000014);
    }
    uVar7 = FUN_005fbf20(uVar7);
    FUN_005fd4e0(param_2[0xf],uVar7);
  }
  (**(code **)(*param_2 + 200))(param_2,iVar11,iVar9);
  (**(code **)(*param_2 + 0xc0))(param_2,iVar11,iVar9 + *(int *)(param_1 + 0xa8) + -1);
  (**(code **)(*param_2 + 0xc0))(param_2,param_5,iVar9 + *(int *)(param_1 + 0xa8) + -1);
  if (bVar2) {
    FUN_005fd4e0(param_2[0xf],0);
  }
  else {
    if (((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x90) & 1) == 0) ||
       (cVar3 = FUN_00781870(), cVar3 == '\0')) {
      uVar7 = 0xff000010;
    }
    else {
      uVar8 = FUN_00781840();
      uVar7 = FUN_007793c0(uVar8,0xff000010);
    }
    uVar7 = FUN_005fbf20(uVar7);
    FUN_005fd4e0(param_2[0xf],uVar7);
  }
  (**(code **)(*param_2 + 0xc0))(param_2,param_5,iVar9);
  (**(code **)(*param_2 + 0xc0))(param_2,iVar11,iVar9);
LAB_00ac095f:
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x2c8) = 0;
  return uVar4;
}

