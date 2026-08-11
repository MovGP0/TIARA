/* Ghidra address: 016448f0 */
/* Ghidra symbol: FUN_016448f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016448f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  cVar2 = FUN_016350e0(param_3);
  if (cVar2 == '\0') {
    FUN_01634c00(param_3,*(undefined4 *)(param_3 + 0x5d0));
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(param_3 + 0x660),L"OPAMP1.IBIAS");
  if (iVar3 == 0) {
    _DAT_0210f84c = 1;
  }
  plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = (**(code **)(**(longlong **)(param_3 + 0x580) + 0x28))();
  local_e0 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_3 + 0x580) + 0x18))
                (*(longlong **)(param_3 + 0x580),&local_a8,local_e0);
      iVar4 = (**(code **)(*plVar8 + 0xb0))(plVar8,local_a8);
      if (iVar4 == -1) {
        (**(code **)(*plVar8 + 0x78))(plVar8,local_a8);
        FUN_01615910(local_a8,&local_c0,&local_c8,&DAT_01644cb0);
        FUN_016159e0(&local_b0,local_c0);
        FUN_016159e0(&local_b8,local_c8);
        FUN_01615910(local_b0,&local_78,&local_48,&DAT_01644cc0);
        iVar4 = FUN_0043fc00(local_48);
        FUN_01615910(local_b8,&local_70,&local_48,&DAT_01644cc0);
        uVar5 = FUN_0043fc00(local_48);
        iVar7 = -1;
        FUN_01635100(param_3,&local_90,uVar5);
        FUN_01635130(param_3,&local_a0,uVar5);
        if ((*(char *)(param_1 + 0x1108) == '\0') ||
           ((*(char *)(param_1 + 0x1108) != '\0' &&
            (((iVar6 = FUN_00416db0(local_a0,&DAT_01644cd0), iVar6 == 0 &&
              ((*(uint *)(param_3 + 0x5cc) & 0x10) != 0)) ||
             ((*(uint *)(param_3 + 0x5cc) & 0x10) == 0)))))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (iVar4 == -1) {
          iVar7 = 0;
        }
        if ((bool)(bVar1 & iVar7 != 0)) {
          iVar7 = FUN_01634fe0(param_2,iVar4,local_78);
        }
        if (bVar1) {
          FUN_01634ca0(param_3,uVar5,iVar7);
        }
        iVar4 = FUN_00416db0(local_78,L"ExtReserved1258");
        if (iVar4 != 0) {
          FUN_016420a0(param_1,*(undefined4 *)(param_3 + 0x5dc),uVar5,iVar7);
          FUN_01641e30(param_1,&local_d0,iVar7);
        }
      }
      local_e0 = local_e0 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(plVar8);
  FUN_00414560(&local_d0,0x13);
  return;
}

