/* Ghidra address: 01b8c850 */
/* Ghidra symbol: FUN_01b8c850 */


undefined1 FUN_01b8c850(undefined8 param_1,undefined2 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined2 *local_res10 [3];
  undefined1 local_81;
  undefined1 *local_70;
  undefined2 *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = (undefined2 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_81 = 0;
  if (param_3 == 0) {
    if ((local_res10[0] != (undefined2 *)0x0) &&
       (cVar2 = FUN_01b7fd00(*local_res10[0]), cVar2 != '\0')) {
      local_81 = 1;
    }
  }
  else {
    cVar2 = FUN_01488350(param_3,L"Analysis",local_40);
    if ((cVar2 != '\0') && (cVar2 = FUN_01486310(local_40[0],L"Npanes",&local_58), cVar2 != '\0')) {
      iVar7 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
      uVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar1 = *(longlong *)(local_58 + 0x10);
          if (*(uint *)(lVar1 + 0x10) <= uVar5) {
            FUN_00594f90();
          }
          cVar2 = FUN_019bf100(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8),
                               &local_48);
          if ((cVar2 != '\0') && (cVar2 = FUN_01486310(local_48,L"traces",&local_60), cVar2 != '\0')
             ) {
            iVar8 = *(int *)(*(longlong *)(local_60 + 0x10) + 0x10);
            uVar6 = 0;
            if (-1 < iVar8 + -1) {
              do {
                lVar1 = *(longlong *)(local_60 + 0x10);
                if (*(uint *)(lVar1 + 0x10) <= uVar6) {
                  FUN_00594f90();
                }
                cVar2 = FUN_019bf100(*(undefined8 *)
                                      (*(longlong *)(lVar1 + 8) + (longlong)(int)uVar6 * 8),
                                     &local_50);
                if (cVar2 != '\0') {
                  uVar4 = FUN_00414480(&local_68);
                  cVar2 = FUN_019bf120(local_50,L"name",uVar4);
                  if (cVar2 != '\0') {
                    uVar4 = FUN_00414480(&local_70);
                    cVar2 = FUN_019bf120(local_50,L"type",uVar4);
                    if (cVar2 != '\0') {
                      if (local_68 == local_res10[0]) {
                        bVar9 = true;
                      }
                      else if ((local_68 == (undefined2 *)0x0) ||
                              (local_res10[0] == (undefined2 *)0x0)) {
                        bVar9 = false;
                      }
                      else {
                        iVar3 = FUN_0043e420(local_68,local_res10[0]);
                        bVar9 = iVar3 == 0;
                      }
                      if (bVar9) {
                        if (local_70 == &LAB_01b8cba4) {
                          bVar9 = true;
                        }
                        else if (local_70 == (undefined1 *)0x0) {
                          bVar9 = false;
                        }
                        else {
                          iVar3 = FUN_0043e420(local_70,&LAB_01b8cba4);
                          bVar9 = iVar3 == 0;
                        }
                        if (bVar9) {
                          local_81 = 1;
                          goto LAB_01b8cab1;
                        }
                      }
                    }
                  }
                }
                uVar6 = uVar6 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
LAB_01b8cab1:
  FUN_00414560(&local_70,2);
  FUN_00414480(local_res10);
  return local_81;
}

