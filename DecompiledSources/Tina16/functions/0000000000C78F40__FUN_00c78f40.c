/* Ghidra address: 00c78f40 */
/* Ghidra symbol: FUN_00c78f40 */


void FUN_00c78f40(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_40[0] = 0;
  *(ushort *)(param_1 + 0x71) = (ushort)param_2;
  iVar7 = 0;
  uVar6 = param_2;
  piVar8 = (int *)PTR_DAT_020026b0;
  do {
    iVar1 = *piVar8;
    if (iVar1 != 0x460) {
      if ((byte)iVar7 < 0x10) {
        bVar9 = (ushort)((ushort)((int)CONCAT62((int6)(uVar6 >> 0x10),1) << ((byte)iVar7 & 0x1f)) &
                        (ushort)param_2) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        uVar3 = thunk_FUN_03a99535(param_1[0x53],iVar1);
        uVar6 = 0;
        thunk_FUN_03ab0e43(uVar3,5);
      }
      else {
        uVar6 = 0;
        thunk_FUN_041b2403(param_1[0x53],0x469,(longlong)iVar1,0);
      }
    }
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar7 != 9);
  if ((param_2 & 8) != 0) {
    lVar2 = (**(code **)(*param_1 + 0x90))(param_1);
    if (((lVar2 != 0) && (param_1[0x77] != 0)) && (param_1[0x79] == 0)) {
      uVar3 = thunk_FUN_03a99535(param_1[0x53],1);
      thunk_FUN_03e49910(uVar3,&local_28);
      local_30 = local_28;
      local_2c = local_24;
      thunk_FUN_0417e313(param_1[0x53],&local_30);
      plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_007f0370,1,*(undefined8 *)PTR_DAT_02004030);
      param_1[0x79] = (longlong)plVar4;
      (**(code **)(*plVar4 + 0x148))(plVar4,0);
      (**(code **)(*(longlong *)param_1[0x79] + 0x130))((longlong *)param_1[0x79],0);
      FUN_00655f80(param_1[0x79],param_1[0x53]);
      FUN_007ff680(param_1[0x79],0);
      plVar4 = (longlong *)FUN_00c735d0(&PTR_FUN_00c70758,1,param_1[0x79]);
      param_1[0x78] = (longlong)plVar4;
      (**(code **)(*plVar4 + 0x148))(plVar4,0);
      (**(code **)(*(longlong *)param_1[0x78] + 0x130))((longlong *)param_1[0x78],param_1[0x79]);
      FUN_0064c650(param_1[0x78],5);
      FUN_00c74530(param_1[0x78],param_1[0x77]);
      uVar3 = FUN_00442b60(0x100);
      uVar5 = thunk_FUN_03a99535(param_1[0x53],1);
      thunk_FUN_041ca87a(uVar5,uVar3,0xff);
      if (*(longlong *)(param_1[0x43] + 8) == 0) {
        FUN_004167d0(local_40,uVar3);
        FUN_0064de00(param_1[0x78],local_40[0]);
      }
      else {
        FUN_0064de00(param_1[0x78],*(undefined8 *)(param_1[0x43] + 8));
      }
      lVar2 = param_1[0x78];
      *(longlong **)(lVar2 + 0x200) = param_1;
      *(code **)(lVar2 + 0x1f8) = FUN_00c7b190;
      FUN_00442c30(uVar3);
      FUN_00806af0(param_1[0x79],local_30);
      FUN_00806b40(param_1[0x79],local_2c);
      FUN_0064cbf0(param_1[0x79],local_20 - local_28);
      FUN_0064cc50(param_1[0x79],local_1c - local_24);
      FUN_008059a0(param_1[0x79]);
      uVar3 = FUN_0065b870(param_1[0x79]);
      uVar5 = thunk_FUN_03a99535(param_1[0x53],0x470);
      thunk_FUN_041cc6e2(uVar3,uVar5,local_30,local_2c,local_20 - local_28,local_1c - local_24,0x40)
      ;
      thunk_FUN_041b2403(param_1[0x53],0x469,1,0);
    }
  }
  if ((param_2 & 4) == 0) {
    FUN_00c78bb0(param_1,0);
    FUN_00c777b0(param_1,0);
  }
  else if ((char)param_1[0x54] == '\0') {
    FUN_00c777b0(param_1,0);
    FUN_00c78bb0(param_1,1);
  }
  else {
    FUN_00c78bb0(param_1,0);
    FUN_00c777b0(param_1,1);
  }
  if ((param_2 & 0x200) == 0) {
    thunk_FUN_0414fb0c(param_1[0x53],FUN_00c78e70,0);
  }
  else {
    thunk_FUN_0414fb0c(param_1[0x53],FUN_00c78e70,1);
  }
  if ((param_2 & 0x20) == 0) {
    thunk_FUN_041b2403(param_1[0x53],0x469,0x47c,0);
  }
  else {
    lVar2 = thunk_FUN_03a99535(param_1[0x53],0x47c);
    if (lVar2 != 0) {
      thunk_FUN_03ab0e43(lVar2,5);
    }
  }
  FUN_00414480(local_40);
  return;
}

