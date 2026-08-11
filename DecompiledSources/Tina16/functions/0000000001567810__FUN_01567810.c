/* Ghidra address: 01567810 */
/* Ghidra symbol: FUN_01567810 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01567810(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar11;
  undefined1 *puVar10;
  int local_98;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong local_58 [2];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_40 = 0;
  local_48 = (undefined1 *)0x0;
  local_58[1] = 0;
  FUN_01d03160(param_2);
  (**(code **)(*param_2 + 0x288))(param_2,&local_40);
  local_84 = (**(code **)(*param_2 + 0x210))(param_2,0);
  plVar9 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar5 = (**(code **)(*param_2 + 0x1c8))(param_2);
  local_98 = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_84 = (**(code **)(*param_2 + 0x210))(param_2,local_98);
      puVar10 = local_5c;
      cVar2 = FUN_0160e4d0(*(undefined8 *)(param_1 + 0x18),local_84,3,0,puVar10);
      uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
      if (cVar2 != '\0') {
        FUN_0043f750(&local_70,local_84);
        (**(code **)(*plVar9 + 0x78))(plVar9,local_70);
      }
      local_98 = local_98 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar6 = FUN_01d03160(param_2);
  cVar2 = FUN_01d3d5c0(uVar6);
  if (cVar2 != '\0') {
    FUN_01d3f830(param_2,local_38);
    FUN_015f87c0(*(undefined8 *)(param_1 + 0x790),param_2,local_34);
  }
  cVar2 = FUN_0154d320(param_1,param_2);
  if ((cVar2 != '\0') || (iVar5 = (**(code **)(*plVar9 + 0x28))(plVar9), 0 < iVar5)) {
    puVar10 = (undefined1 *)CONCAT44(uVar11,0xfffffffd);
    FUN_0155fcf0(param_1,&local_48,param_2,param_1 + 0x960,puVar10,*(undefined1 *)(param_1 + 0x94b))
    ;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x9a8) + 0xb0))
                      (*(longlong **)(param_1 + 0x9a8),local_48);
    if (iVar5 != -1) {
      FUN_017ff4a0(param_2,&local_78);
      FUN_00416ad0(&local_48,local_78);
    }
    (**(code **)(**(longlong **)(param_1 + 0x9a8) + 0x78))(*(longlong **)(param_1 + 0x9a8),local_48)
    ;
    iVar7 = (**(code **)(*param_2 + 0x1c8))(param_2);
    bVar1 = false;
    local_58[0] = 0;
    local_98 = 0;
    iVar5 = iVar7;
    if (-1 < iVar7 + -1) {
      do {
        uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
        local_84 = (**(code **)(*param_2 + 0x210))(param_2,local_98);
        puVar10 = (undefined1 *)CONCAT44(uVar11,local_84);
        FUN_0155fcf0(param_1,&local_48,param_2,param_1 + 0x960,puVar10,
                     *(undefined1 *)(param_1 + 0x94b));
        if (*(char *)(param_1 + 0x958) == '\0') {
LAB_01567b35:
          local_58[0] = 0;
          bVar4 = 0;
          if (local_84 == 0) {
            bVar4 = FUN_01566aa0(param_1);
          }
          if ((bVar4 & local_84 == 0) == 0) {
            if (cVar2 == '\0') {
              FUN_0043f750(&local_80,local_84);
              iVar8 = (**(code **)(*plVar9 + 0xb0))(plVar9,local_80);
              if (iVar8 < 0) goto LAB_01567bae;
            }
            puVar10 = local_48;
            FUN_0154d5a0(param_1,local_84,local_98,iVar7,local_48,local_58);
          }
        }
        else {
          if ((bVar1) ||
             (cVar3 = FUN_00e147f0(*(undefined8 *)(param_1 + 0x9c8),local_84), cVar3 != '\0')) {
LAB_01567b27:
            bVar1 = true;
          }
          else {
            if (local_84 != 0) {
              puVar10 = local_60;
              cVar3 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),local_84,1,local_68,puVar10,0);
              if (cVar3 != '\0') goto LAB_01567b27;
            }
            bVar1 = false;
          }
          if (bVar1) goto LAB_01567b35;
        }
LAB_01567bae:
        local_98 = local_98 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_84 == 0) goto LAB_01567c27;
    (**(code **)(*param_2 + 0x1f0))(param_2,0,&local_2c,&local_30);
    if ((local_2c != -1) && (local_58[0] != 0)) {
      *(undefined4 *)(local_58[0] + 0x68) = local_30;
      *(int *)(local_58[0] + 0x6c) = local_2c;
    }
  }
  FUN_00410f20(plVar9);
LAB_01567c27:
  FUN_00414560(&local_80,3);
  FUN_00414560(local_58 + 1,3);
  return;
}

