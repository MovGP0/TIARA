/* Ghidra address: 012f6eb0 */
/* Ghidra symbol: FUN_012f6eb0 */


void FUN_012f6eb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  char local_2e9;
  wchar_t *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  wchar_t *local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [16];
  uint local_298;
  undefined8 local_290;
  
  local_2e8 = (wchar_t *)0x0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = (wchar_t *)0x0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  FUN_00417580(local_2a8,&DAT_00432b90);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_2c0);
  if (local_2c0 != 0) {
    FUN_006df690(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    uVar3 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_2c8);
    FUN_00416ad0(&local_2c8,L"\\*.*");
    iVar1 = FUN_00441230(local_2c8,0x30,local_2a8);
    while (iVar1 == 0) {
      FUN_00414480(&local_2b0);
      if ((local_298 & 0x20) == 0x20) {
        FUN_00441a10(&local_2d0,local_290);
        if (local_2d0 == L".TSC") {
          bVar8 = true;
        }
        else if (local_2d0 == (wchar_t *)0x0) {
          bVar8 = false;
        }
        else {
          iVar1 = FUN_0043e420(local_2d0,L".TSC");
          bVar8 = iVar1 == 0;
        }
        if (bVar8) {
          FUN_004414c0(&local_2b0,local_290,0);
        }
      }
      if (local_2b0 == 0) {
        iVar1 = FUN_00441290(local_2a8);
      }
      else {
        local_2e9 = '\0';
        iVar1 = FUN_006decb0();
        iVar7 = 0;
        if (-1 < iVar1 + -1) {
          do {
            lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar7);
            if ((*(uint *)(*(longlong *)(lVar5 + 0x18) + 4) & 0x20) == 0x20) {
              lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar7);
              iVar2 = FUN_00416db0(local_2b0,*(undefined8 *)(lVar5 + 0x10));
              if (iVar2 == 0) {
                local_2e9 = '\x01';
                break;
              }
            }
            iVar7 = iVar7 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        if (local_2e9 == '\0') {
          FUN_004414c0(&local_2d8,local_290,0);
          uVar4 = FUN_012f2410(0x20);
          FUN_006dee70(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar3,local_2d8,uVar4
                      );
        }
        iVar1 = FUN_00441290(local_2a8);
      }
    }
    FUN_004412c0(local_2a8);
    lVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    iVar1 = FUN_006decb0();
    iVar7 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar6 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar7);
        if ((*(uint *)(*(longlong *)(lVar6 + 0x18) + 4) & 0x20) == 0x20) {
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_2e0);
          FUN_00416ad0(&local_2e0,L"\\*.*");
          iVar2 = FUN_00441230(local_2e0,0x30,local_2a8);
          while (iVar2 == 0) {
            FUN_00414480(&local_2b0);
            if ((local_298 & 0x20) == 0x20) {
              FUN_00441a10(&local_2e8,local_290);
              if (local_2e8 == L".TSC") {
                bVar8 = true;
              }
              else if (local_2e8 == (wchar_t *)0x0) {
                bVar8 = false;
              }
              else {
                iVar2 = FUN_0043e420(local_2e8,L".TSC");
                bVar8 = iVar2 == 0;
              }
              if (bVar8) {
                FUN_004414c0(&local_2b0,local_290,0);
              }
            }
            if (local_2b0 == 0) {
              iVar2 = FUN_00441290(local_2a8);
            }
            else {
              local_2e9 = '\0';
              lVar6 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar7);
              iVar2 = FUN_00416db0(local_2b0,*(undefined8 *)(lVar6 + 0x10));
              if (iVar2 == 0) {
                local_2e9 = '\x01';
                break;
              }
              iVar2 = FUN_00441290(local_2a8);
            }
          }
          if (local_2e9 == '\0') {
            uVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),iVar7);
            FUN_004ae7e0(lVar5,uVar3);
          }
        }
        iVar7 = iVar7 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004412c0(local_2a8);
    iVar1 = *(int *)(lVar5 + 0x10);
    iVar7 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar3 = FUN_004aeac0(lVar5,iVar7);
        FUN_006ded10(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar3);
        iVar7 = iVar7 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (lVar5 != 0) {
      FUN_00410f20(lVar5);
    }
    FUN_006e1e60(*(undefined8 *)(param_1 + 0x700),FUN_012f3410,0,1);
    FUN_006e23c0(*(undefined8 *)(param_1 + 0x700));
    lVar5 = *(longlong *)(param_1 + 0x700);
    uVar3 = FUN_006df4b0(*(undefined8 *)(lVar5 + 0x550));
    FUN_006e24b0(lVar5,uVar3);
    FUN_006df710(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550));
    FUN_01303240(param_1,3,0,0);
  }
  FUN_00414480(&local_2e8);
  FUN_00414480(&local_2e0);
  FUN_00414560(&local_2d8,2);
  FUN_00414560(&local_2c8,2);
  FUN_00414560(&local_2b8,2);
  FUN_00417740(local_2a8,&DAT_00432b90);
  return;
}

