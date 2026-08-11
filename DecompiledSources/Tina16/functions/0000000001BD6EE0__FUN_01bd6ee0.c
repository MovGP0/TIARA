/* Ghidra address: 01bd6ee0 */
/* Ghidra symbol: FUN_01bd6ee0 */


void FUN_01bd6ee0(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(byte *)((longlong)param_1 + 0x4c3) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) <<
             (*(byte *)((longlong)param_1 + 0x4c3) & 0x1f) & 0xcU) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    local_30 = CONCAT44(param_3 + -1,param_2 + -1);
    iVar3 = FUN_0064d120(param_1);
    local_38 = CONCAT44((iVar3 - param_3) + 1,param_2 + -1);
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,0);
    local_30 = CONCAT44(param_2 + -1,param_3 + iVar3);
    iVar3 = FUN_0064d0b0(param_1);
    iVar4 = (**(code **)(*param_1 + 0x2b0))(param_1,1);
    local_38 = CONCAT44(param_2 + -1,(iVar3 - param_3) - iVar4);
  }
  plVar1 = (longlong *)param_1[0x96];
  FUN_005fd6d0(plVar1[0xf],1);
  plVar6 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar6 + 0x98))(plVar6);
  if (cVar2 == '\0') {
LAB_01bd6ffd:
    lVar8 = FUN_01c03e40(param_1);
    FUN_005fd4e0(plVar1[0xf],*(undefined4 *)(lVar8 + 0xa4));
  }
  else {
    uVar7 = FUN_00781840();
    cVar2 = FUN_00779360(uVar7);
    if (cVar2 != '\0') goto LAB_01bd6ffd;
    uVar7 = FUN_00781840();
    uVar5 = FUN_007793c0(uVar7,0xff000010);
    FUN_005fd4e0(plVar1[0xf],uVar5);
  }
  (**(code **)(*plVar1 + 200))(plVar1,local_30 & 0xffffffff,local_30._4_4_);
  (**(code **)(*plVar1 + 0xc0))(plVar1,local_38 & 0xffffffff,local_38._4_4_);
  plVar6 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar6 + 0x98))(plVar6);
  if (cVar2 != '\0') {
    uVar7 = FUN_00781840();
    cVar2 = FUN_00779360(uVar7);
    if (cVar2 == '\0') {
      uVar7 = FUN_00781840();
      uVar5 = FUN_007793c0(uVar7,0xff000014);
      FUN_005fd4e0(plVar1[0xf],uVar5);
      goto LAB_01bd709a;
    }
  }
  uVar7 = FUN_01c03e40(param_1);
  uVar5 = FUN_01bff2c0(uVar7);
  FUN_005fd4e0(plVar1[0xf],uVar5);
LAB_01bd709a:
  if ((int)local_30 == (int)local_38) {
    (**(code **)(*plVar1 + 200))(plVar1,(int)local_30 + 1,local_30._4_4_);
    (**(code **)(*plVar1 + 0xc0))(plVar1,(int)local_30 + 1,local_38._4_4_);
  }
  else {
    (**(code **)(*plVar1 + 200))(plVar1,local_30 & 0xffffffff,local_30._4_4_ + 1);
    (**(code **)(*plVar1 + 0xc0))(plVar1,local_38 & 0xffffffff,local_38._4_4_ + 1);
  }
  return;
}

