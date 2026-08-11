/* Ghidra address: 01c16e70 */
/* Ghidra symbol: FUN_01c16e70 */


void FUN_01c16e70(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_58 [24];
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = param_1[0x78];
  local_30 = param_1[0x79];
  uVar2 = (**(code **)(*param_1 + 0x288))(param_1);
  FUN_00423b50(&local_38,(int)param_1[0x13],1);
  uVar4 = FUN_00781840();
  uVar5 = FUN_005ffa40(param_1[0x62]);
  plVar6 = (longlong *)FUN_00781840();
  (**(code **)(*plVar6 + 0x158))(plVar6,local_58,0x21);
  cVar1 = FUN_00779290(uVar4,uVar5,local_58,1,&local_40,uVar2);
  if (cVar1 == '\0') {
    iVar3 = FUN_004230c0(param_1 + 0x78);
    iVar3 = *(int *)((longlong)param_1 + 0x9c) - iVar3;
    local_38._4_4_ = iVar3 / 2;
    iVar3 = FUN_004230c0(param_1 + 0x78,(longlong)iVar3 % 2 & 0xffffffff);
    local_30 = CONCAT44(local_38._4_4_ + iVar3,(undefined4)local_30);
  }
  else {
    iVar3 = (*(int *)((longlong)param_1 + 0x9c) - local_3c) / 2;
    local_30 = CONCAT44(iVar3 + local_3c,(int)local_38 + local_40);
    local_38._4_4_ = iVar3;
  }
  uVar4 = FUN_00781840();
  uVar5 = FUN_005ffa40(param_1[0x62]);
  plVar6 = (longlong *)FUN_00781840();
  uVar7 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar6 + 0x158))(plVar6,local_58,(&DAT_01fe48c2)[uVar7 & 0xff]);
  FUN_00778dc0(uVar4,uVar5,local_58,&local_38,0,uVar2);
  return;
}

