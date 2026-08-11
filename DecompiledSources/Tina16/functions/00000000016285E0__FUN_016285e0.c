/* Ghidra address: 016285e0 */
/* Ghidra symbol: FUN_016285e0 */


undefined8 *
FUN_016285e0(int param_1,longlong *param_2,longlong param_3,longlong param_4,undefined8 param_5,
            undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_90 = 0;
  local_50 = 0;
  local_78 = 0;
  local_80 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414610(param_6);
  local_a0 = (undefined8 *)FUN_01613760(param_1);
  cVar1 = FUN_01d3fd10(local_a0,0);
  if (((cVar1 == '\0') && (param_1 != 0x39)) ||
     (*(undefined1 *)(param_4 + 0x139e1) = 1, *(char *)(param_4 + 0x139e3) == '\0')) {
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(**(longlong **)(param_3 + 0x578) + 0x28))();
    iVar7 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar6 = (**(code **)(**(longlong **)(param_3 + 0x578) + 0x30))
                          (*(longlong **)(param_3 + 0x578),iVar7);
        FUN_01634bd0(param_3,&local_38,iVar7);
        if (*(char *)(lVar6 + 8) == '\0') {
          FUN_00414b50(&local_30,&DAT_016289fc);
        }
        else {
          FUN_00414b50(&local_30,&DAT_016289ec);
        }
        FUN_00416cd0(&local_40,3,local_38,&DAT_01628a0c,local_30);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_40);
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = param_6;
    FUN_01602900(local_a0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_3 + 0x650),plVar5,
                 param_6,*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_4 + 0x13a30) + 0x200) + 0x20),0);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_016274c0(local_a0,param_2,*(undefined8 *)(param_4 + 0x13980),param_4,CONCAT44(uVar8,uVar3),0
                 ,1,1);
    FUN_0163e150(param_4,local_a0,0);
    FUN_017ff4a0(local_a0,&local_48);
    FUN_00414ad0(*(longlong *)(param_4 + 0x18) + 0x578,local_48);
    FUN_017ff4a0(local_a0,&local_78);
    local_70 = local_78;
    local_68 = 0x11;
    FUN_004b37d0(plVar5,&local_80);
    local_60 = local_80;
    local_58 = 0x11;
    FUN_00442f70(&local_50,L"T_DigMacroComp: pComp^.GetShortUniqueID is: %s, PinTypes: %s",&local_70
                 ,1);
    FUN_01602e30(local_50,1);
    FUN_0043fbc0(&local_90,*(undefined8 *)(param_4 + 0x18),8);
    FUN_00416ba0(&local_88,L"T_DigMacroComp: HDLGlobals.FOwner is ",local_90);
    FUN_01602e30(local_88,1);
    FUN_00410f20(plVar5);
    *(int *)(param_4 + 0x74) = *(int *)(param_4 + 0x74) + 1;
  }
  else {
    uVar4 = (**(code **)*local_a0)(local_a0);
    FUN_00418590(uVar4,&DAT_01cf1390);
    local_a0 = (undefined8 *)0x0;
  }
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_50,5);
  FUN_00414480(&param_6);
  return local_a0;
}

