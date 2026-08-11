/* Ghidra address: 01a00850 */
/* Ghidra symbol: FUN_01a00850 */


longlong *
FUN_01a00850(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  short *local_30;
  
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_30 = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  FUN_004167a0(&local_58,param_3);
  FUN_0043ea00(local_50,local_58);
  FUN_0043e130(param_2,local_50[0]);
  FUN_00450070(&local_60,*param_2,&DAT_01a00df0,&DAT_01a00e04,1);
  FUN_00414ad0(param_2,local_60);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = 0;
  if (*param_2 != 0) {
    iVar7 = *(int *)(*param_2 + -4);
  }
  iVar6 = 1;
  if (0 < iVar7) {
    do {
      if (*(short *)(*param_2 + -2 + (longlong)iVar6 * 2) == 0x20) {
        FUN_00416e20(param_2,iVar6,1);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = 1;
  iVar6 = 1;
  while( true ) {
    if (iVar6 == 0) {
      bVar1 = false;
    }
    else {
      iVar6 = 0;
      if (*param_2 != 0) {
        iVar6 = *(int *)(*param_2 + -4);
      }
      bVar1 = iVar7 < iVar6;
    }
    if (!bVar1) break;
    iVar6 = FUN_004170c0(&DAT_01a00e1c,*param_2,iVar7);
    iVar2 = FUN_004170c0(&DAT_01a00e30,*param_2,iVar7);
    if ((iVar6 < 1) || (iVar2 < 1)) {
      if (iVar6 == 0) {
        iVar3 = iVar2 + 2;
      }
      else {
        iVar3 = iVar6 + 2;
      }
    }
    else {
      iVar3 = FUN_00b905f0(iVar6,iVar2);
      iVar3 = iVar3 + 2;
    }
    if ((iVar6 != 0) || (iVar7 = iVar3, iVar6 = 0, iVar2 != 0)) {
      FUN_00414480(&local_30);
      iVar7 = iVar3;
      while( true ) {
        iVar6 = 0;
        if (*param_2 != 0) {
          iVar6 = *(int *)(*param_2 + -4);
        }
        if ((iVar6 < iVar7) || (*(short *)(*param_2 + -2 + (longlong)iVar7 * 2) == 0x29)) break;
        FUN_00416780(&local_68,*(undefined2 *)(*param_2 + -2 + (longlong)iVar7 * 2));
        FUN_00416ad0(&local_30,local_68);
        iVar7 = iVar7 + 1;
      }
      uVar4 = 0;
      if (local_30 != (short *)0x0) {
        uVar4 = *(undefined4 *)(local_30 + -2);
      }
      FUN_00416e20(param_2,iVar3,uVar4);
      if ((*local_30 == 0x4e) || (*local_30 == 0x56)) {
        uVar4 = 0;
        if (local_30 != (short *)0x0) {
          uVar4 = *(undefined4 *)(local_30 + -2);
        }
        FUN_00416dc0(&local_70,local_30,2,uVar4);
        iVar7 = FUN_0043fc00(local_70);
        if (*local_30 == 0x4e) {
          FUN_019f0400(param_1,&local_78,iVar7 + -1,0);
          FUN_00416ba0(&local_30,local_78,&DAT_01a00e44);
        }
        else {
          iVar6 = (**(code **)(*plVar5 + 0xb8))(plVar5,local_30);
          if (iVar6 == -1) {
            (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                      (*(longlong **)(param_1 + 0x58),&local_88);
            FUN_00416cd0(&local_80,3,local_88,&DAT_01a00e58,local_30);
            FUN_019ee820(param_1,&local_38,0x14,local_80,0xb);
            FUN_00416cd0(&local_90,3,local_30,&DAT_01a00e68,local_38);
            (**(code **)(*plVar5 + 0x78))(plVar5,local_90);
            FUN_00414b50(&local_30,local_38);
            iVar7 = param_4 + iVar7 * 2;
            FUN_019f0400(param_1,&local_98,iVar7 + -2,0);
            FUN_019f0400(param_1,&local_a0,iVar7 + -1,0);
            FUN_00416cd0(&local_40,5,local_30,&LAB_01a00e78,local_98,&LAB_01a00e78,local_a0);
            (**(code **)(*(longlong *)*param_5 + 0x78))((longlong *)*param_5,local_40);
          }
          else {
            FUN_004b5390(plVar5,&local_30,iVar6);
          }
        }
      }
      FUN_0043ea00(&local_a8,local_30);
      FUN_00416ea0(local_a8,param_2,iVar3);
      FUN_0043ea00(&local_b0,local_30);
      iVar7 = 0;
      if (local_b0 != 0) {
        iVar7 = *(int *)(local_b0 + -4);
      }
      iVar7 = iVar3 + iVar7;
      iVar6 = iVar3;
    }
  }
  FUN_00410f20(plVar5);
  FUN_00414560(&local_b0,0xd);
  FUN_00414560(&local_40,3);
  return param_2;
}

