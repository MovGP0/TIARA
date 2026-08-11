/* Ghidra address: 01605840 */
/* Ghidra symbol: FUN_01605840 */


longlong *
FUN_01605840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,byte param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_8c;
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
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004167d0(&local_50,param_1);
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  FUN_004167d0(&local_58,param_2);
  (**(code **)(*plVar6 + 0x60))(plVar6,local_58);
  (**(code **)(*plVar6 + 0x78))(plVar6,local_res18);
  iVar2 = (**(code **)(*plVar5 + 0x28))();
  local_8c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_38,local_8c);
      FUN_0043e1a0(&local_60,L"{$PRJ}");
      iVar3 = FUN_004170c0(local_60,local_38,1);
      if (iVar3 < 1) {
        FUN_0043e1a0(&local_68,L"{$SHARED}");
        iVar3 = FUN_004170c0(local_68,local_38,1);
        if (0 < iVar3) goto LAB_01605c39;
        iVar3 = (**(code **)(*plVar6 + 0x28))();
        iVar8 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_40,iVar8);
            FUN_00414b50(&local_48,&DAT_01605d2c);
            iVar4 = FUN_004170c0(local_48,local_40,1);
            if (0 < iVar4) {
              FUN_00450070(&local_70,local_40,local_48,0,1);
              FUN_00414b50(&local_40,local_70);
              FUN_00416cd0(&local_40,3,local_res18,&DAT_01605d44,local_40);
            }
            FUN_00441920(&local_48,local_38);
            FUN_00416cd0(&local_78,3,local_40,&DAT_01605d44,local_48);
            cVar1 = FUN_00440a20(local_78,1);
            if (cVar1 != '\0') {
              iVar3 = FUN_004170c0(L"arm-none-eabi",local_40,1);
              if (((param_6 & 0 < iVar3) != 0) || (0 >= iVar3)) {
                FUN_00416cd0(&local_80,3,local_40,&DAT_01605d44,local_48);
                iVar3 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_80);
                if (iVar3 == -1) {
                  FUN_00416cd0(&local_88,3,local_40,&DAT_01605d44,local_48);
                  (**(code **)(*plVar7 + 0x78))(plVar7,local_88);
                }
              }
              break;
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
LAB_01605c39:
        (**(code **)(*plVar7 + 0x78))(plVar7,local_38);
      }
      local_8c = local_8c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar6);
  FUN_00410f20(plVar5);
  FUN_00414560(&local_88,0xc);
  FUN_00414560(&local_res18,3);
  return plVar7;
}

