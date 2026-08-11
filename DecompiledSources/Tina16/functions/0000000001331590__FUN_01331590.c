/* Ghidra address: 01331590 */
/* Ghidra symbol: FUN_01331590 */


void FUN_01331590(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [3];
  
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[2] = 0;
  local_40[1] = 0;
  local_40[0] = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
  iVar10 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                        (*(longlong **)(param_1 + 0x138),iVar10);
      cVar2 = FUN_01330f80(*(undefined8 *)(lVar7 + 8),L"CSENSOR");
      if ((((cVar2 == '\0') || (*(double *)(param_1 + 0x110) <= *(double *)(lVar7 + 0x10))) &&
          (lVar8 = FUN_017ff620(*(undefined8 *)(lVar7 + 0x40)), lVar8 != 0)) &&
         ((cVar2 = FUN_01d04d40(lVar8), cVar2 != '\0' && (*(char *)(lVar8 + 0x1a0) == '\x02')))) {
        plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x1a8) + 0xb0);
        iVar9 = 0;
        FUN_00414b50(local_40 + 2,*(undefined8 *)(lVar7 + 8));
        iVar4 = FUN_004170c0(&DAT_0133192c,*(undefined8 *)(lVar7 + 8),1);
        if (iVar4 == 0) {
          for (; iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar9 < iVar4; iVar9 = iVar9 + 1) {
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar9);
            FUN_01330d40(local_50,local_58);
            iVar4 = FUN_00416db0(local_50[0],local_40[2]);
            if (iVar4 == 0) break;
          }
          iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
          if (iVar9 < iVar4) {
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,iVar9);
            FUN_01330d40(&local_60,local_68);
            iVar4 = FUN_00416db0(local_60,local_40[2]);
            if (iVar4 == 0) {
              (**(code **)(*plVar1 + 0x18))(plVar1,local_40,iVar9);
              iVar4 = FUN_004170c0(L" IC=",local_40[0],1);
              if (0 < iVar4) {
                uVar5 = FUN_004170c0(L" IC=",local_40[0],1);
                uVar6 = 0;
                if (local_40[0] != 0) {
                  uVar6 = *(undefined4 *)(local_40[0] + -4);
                }
                FUN_00416e20(local_40,uVar5,uVar6);
              }
              FUN_016b9450(&local_78,*(undefined8 *)(lVar7 + 0x30));
              FUN_00416880(&local_80,local_78);
              FUN_00416cd0(&local_70,3,local_40[0],L" IC=",local_80);
              (**(code **)(*plVar1 + 0x40))(plVar1,iVar9,local_70);
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_80);
  FUN_004144d0(&local_78);
  FUN_00414560(&local_70,5);
  FUN_00414560(local_40,3);
  return;
}

