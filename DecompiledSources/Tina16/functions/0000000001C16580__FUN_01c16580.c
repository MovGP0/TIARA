/* Ghidra address: 01c16580 */
/* Ghidra symbol: FUN_01c16580 */


void FUN_01c16580(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_58 [24];
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
  if (cVar1 != '\0') {
    uVar5 = FUN_00781840();
    uVar6 = FUN_005ffa40(param_1[0x62]);
    plVar7 = (longlong *)FUN_00781840();
    uVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
    (**(code **)(*plVar7 + 0x158))(plVar7,local_58,(&DAT_01fe48bc)[uVar8 & 0xff]);
    FUN_00778dc0(uVar5,uVar6,local_58,param_1 + 0x72,0,0);
    cVar1 = FUN_01c06f30(param_1);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x288))(param_1);
      uVar5 = FUN_00781840();
      uVar6 = FUN_005ffa40(param_1[0x62]);
      plVar7 = (longlong *)FUN_00781840();
      uVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
      (**(code **)(*plVar7 + 0x158))(plVar7,local_58,(&DAT_01fe48be)[uVar8 & 0xff]);
      FUN_00779290(uVar5,uVar6,local_58,1,&local_40,uVar2);
      FUN_004238d0(local_38,0,0,local_40,local_3c);
      iVar3 = FUN_004230a0(param_1 + 0x72);
      iVar4 = FUN_004230c0(param_1 + 0x72);
      FUN_00423b50(local_38,(int)param_1[0x72] + (iVar3 - local_40) / 2,
                   *(int *)((longlong)param_1 + 0x394) + (iVar4 - local_3c) / 2);
      uVar5 = FUN_00781840();
      uVar6 = FUN_005ffa40(param_1[0x62]);
      plVar7 = (longlong *)FUN_00781840();
      uVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
      (**(code **)(*plVar7 + 0x158))(plVar7,local_58,(&DAT_01fe48be)[uVar8 & 0xff]);
      FUN_00778dc0(uVar5,uVar6,local_58,local_38,0,uVar2);
    }
  }
  return;
}

