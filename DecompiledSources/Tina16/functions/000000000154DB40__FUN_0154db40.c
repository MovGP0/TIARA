/* Ghidra address: 0154db40 */
/* Ghidra symbol: FUN_0154db40 */


void FUN_0154db40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int local_84;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_84 = -1;
  bVar2 = false;
  lVar1 = *(longlong *)(param_1 + 0x748);
  do {
    local_84 = local_84 + 1;
    if (local_84 < *(int *)(lVar1 + 0x10)) {
      uVar8 = FUN_00b94e60(lVar1,local_84);
      cVar3 = FUN_0198a580(uVar8);
      if (cVar3 == '\x04') {
        plVar9 = (longlong *)FUN_00b94e60(lVar1,local_84);
        sVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (sVar4 == 0x86) {
          plVar9 = (longlong *)FUN_00b94e60(lVar1,local_84);
          uVar5 = (**(code **)(*plVar9 + 0x210))(plVar9,0);
          lVar10 = FUN_019afd80(*(undefined8 *)(param_1 + 0x748),uVar5);
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x2d8) != '\0')) {
            FUN_0043f750(&local_60,uVar5);
            FUN_00416ba0(&local_50,local_60,&DAT_0154dde8);
            plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
            FUN_017c4360(lVar10,plVar9);
            iVar6 = (**(code **)(*plVar9 + 0x28))();
            local_7c = 0;
            if (-1 < iVar6 + -1) {
              do {
                (**(code **)(*plVar9 + 0x18))(plVar9,&local_68,local_7c);
                plVar11 = (longlong *)FUN_019aff50(*(undefined8 *)(param_1 + 0x748),local_68);
                uVar5 = (**(code **)(*plVar11 + 0x210))(plVar11,0);
                FUN_0043f750(&local_70,uVar5);
                FUN_00416ad0(&local_50,local_70);
                iVar7 = (**(code **)(*plVar9 + 0x28))(plVar9);
                if (local_7c < iVar7 + -1) {
                  FUN_00416ad0(&local_50,&LAB_0154ddf8);
                }
                local_7c = local_7c + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
                      (*(longlong **)(param_1 + 0x18),local_50,lVar10);
            plVar11 = (longlong *)FUN_00b94e60(lVar1,local_84);
            (**(code **)(*plVar11 + 0x288))(plVar11,&local_78);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                      (*(longlong **)(param_1 + 0x20),local_78);
            FUN_00410f20(plVar9);
          }
        }
      }
    }
    else {
      bVar2 = true;
    }
  } while (!bVar2);
  FUN_00414560(&local_78,8);
  return;
}

