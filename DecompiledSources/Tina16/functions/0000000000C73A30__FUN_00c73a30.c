/* Ghidra address: 00c73a30 */
/* Ghidra symbol: FUN_00c73a30 */


void FUN_00c73a30(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uVar12;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_78 = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  FUN_005ffb10(param_1[0xa4],uVar7);
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  uVar1 = *(uint *)(param_2 + 0x10);
  bVar10 = (uVar1 & 1) != 0;
  bVar11 = (uVar1 & 0x10) != 0;
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar2 == '\0') {
    uVar8 = 1;
  }
  else if (bVar10) {
    uVar8 = 2;
  }
  else {
    uVar8 = 0;
  }
  uVar9 = 0x2010;
  if (bVar10) {
    uVar9 = 0x2210;
  }
  if ((uVar1 & 4) != 0) {
    uVar9 = uVar9 | 0x100;
  }
  if (*(char *)((longlong)param_1 + 0x53c) != '\0' || bVar11) {
    FUN_005fd4e0(*(undefined8 *)(param_1[0xa4] + 0x78),0xff000006);
    FUN_005fd6d0(*(undefined8 *)(param_1[0xa4] + 0x78),1);
    FUN_005fdcb0(*(undefined8 *)(param_1[0xa4] + 0x80),1);
    uVar12 = CONCAT44(uVar4,local_2c);
    (**(code **)(*(longlong *)param_1[0xa4] + 0xf8))
              ((longlong *)param_1[0xa4],local_38,local_34,local_30,uVar12);
    uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
    thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
  }
  if (bVar10) {
    lVar5 = FUN_00c741c0(param_1);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_00c741c0(param_1);
      iVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
      local_30 = (local_30 - iVar3) - *(int *)((longlong)param_1 + 0x534);
    }
    FUN_005fd4e0(*(undefined8 *)(param_1[0xa4] + 0x78),0xff000010);
    FUN_005fd6d0(*(undefined8 *)(param_1[0xa4] + 0x78),1);
    FUN_005fdab0(*(undefined8 *)(param_1[0xa4] + 0x80),0xff00000f);
    (**(code **)(*(longlong *)param_1[0xa4] + 0xf8))
              ((longlong *)param_1[0xa4],local_38,local_34,local_30,CONCAT44(uVar4,local_2c));
    thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
  }
  else if ((char)param_1[0xa3] == '\0') {
    thunk_FUN_03ea73e5(uVar7,&local_38,4,uVar9);
  }
  else {
    plVar6 = (longlong *)FUN_00c741c0(param_1);
    iVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
    local_38 = (local_30 - iVar3) - *(int *)((longlong)param_1 + 0x534);
    FUN_005fd4e0(*(undefined8 *)(param_1[0xa4] + 0x78),0xff000010);
    FUN_005fd6d0(*(undefined8 *)(param_1[0xa4] + 0x78),1);
    FUN_005fdab0(*(undefined8 *)(param_1[0xa4] + 0x80),0xff00000f);
    (**(code **)(*(longlong *)param_1[0xa4] + 0xf8))
              ((longlong *)param_1[0xa4],local_38,local_34,local_30,CONCAT44(uVar4,local_2c));
  }
  if (*(char *)((longlong)param_1 + 0x53c) != '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
    thunk_FUN_04176532(&local_38,0xffffffff,0xffffffff);
  }
  FUN_005ff880(param_1[0xa4],param_1[0x17]);
  if (bVar10) {
    FUN_00429ca0(&local_38,1,1);
  }
  local_70 = FUN_00498310(0,0);
  FUN_0064dd90(param_1,&local_78);
  uVar4 = FUN_006520b0(param_1,0);
  FUN_00c734f0(param_1[0xa5],local_68,param_1[0xa4],&local_38,&local_70,local_78,(int)param_1[0xa7],
               *(undefined4 *)((longlong)param_1 + 0x534),uVar8,0,uVar4,bVar10,(char)param_1[0xa3]);
  if ((bVar11 & *(byte *)((longlong)param_1 + 0x53c)) != 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
    thunk_FUN_04176532(&local_38,0xfffffffc,0xfffffffc);
    FUN_005fd4e0(*(undefined8 *)(param_1[0xa4] + 0x78),0xff000006);
    FUN_005fdab0(*(undefined8 *)(param_1[0xa4] + 0x80),0xff00000f);
    plVar6 = (longlong *)FUN_00c741c0(param_1);
    iVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
    local_30 = ((int)param_1[0x13] - iVar3) + *(int *)((longlong)param_1 + 0x534) * -2 + -1;
    uVar7 = FUN_005ffa40(param_1[0xa4]);
    thunk_FUN_03b3ef59(uVar7,&local_38);
  }
  FUN_005ffb10(param_1[0xa4],0);
  FUN_00414480(&local_78);
  return;
}

