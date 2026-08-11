/* Ghidra address: 0199bf50 */
/* Ghidra symbol: FUN_0199bf50 */


void FUN_0199bf50(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int local_88;
  int local_84;
  int local_80;
  int local_38 [2];
  longlong local_30;
  
  local_80 = 0;
  local_88 = 1;
  if (0 < param_2) {
    do {
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x3c8) + (longlong)local_88 * 8);
      if (lVar1 == 0) {
        local_80 = local_80 + 1;
        local_38[0] = local_88;
        iVar3 = FUN_00596920(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xdf0) + 8,local_38);
        if (-1 < iVar3) {
          FUN_005995b0(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xdf0) + 8,iVar3,5);
        }
      }
      else if (0 < local_80) {
        iVar3 = *(int *)(lVar1 + 0x10);
        local_84 = 0;
        if (-1 < iVar3 + -1) {
          do {
            puVar5 = (undefined8 *)FUN_004aeac0(lVar1,local_84);
            if (*(int *)(puVar5 + 1) < 0) {
              (**(code **)(*(longlong *)*puVar5 + 0x2d0))
                        ((longlong *)*puVar5,*(undefined4 *)((longlong)puVar5 + 0xc),&local_30);
              if (-1 < *(short *)(local_30 + 0x1f)) {
                *(short *)(local_30 + 0x1f) = *(short *)(local_30 + 0x1f) - (short)local_80;
              }
            }
            else {
              iVar4 = (**(code **)(*(longlong *)*puVar5 + 0x210))
                                ((longlong *)*puVar5,*(int *)(puVar5 + 1));
              if (-1 < iVar4) {
                cVar2 = FUN_0198a580(*puVar5);
                if (cVar2 == '\x04') {
                  cVar2 = FUN_0199ba80(param_1,iVar4);
                  if (cVar2 == '\0') {
                    uVar6 = FUN_0164a540(&DAT_0161f838,1,*puVar5,*(undefined4 *)(puVar5 + 1),iVar4,
                                         iVar4 - local_80);
                    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x3c0),uVar6);
                  }
                }
                (**(code **)(*(longlong *)*puVar5 + 0x208))
                          ((longlong *)*puVar5,*(undefined4 *)(puVar5 + 1),iVar4 - local_80,0);
              }
            }
            local_84 = local_84 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_019b3c70(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xde8),local_88,
                     local_88 - local_80);
      }
      local_88 = local_88 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (0 < local_80) {
    FUN_0199b9b0(param_1);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    FUN_0199bb00(param_1,*(undefined8 *)(param_1 + 0x50));
    iVar3 = FUN_019954d0(*(undefined8 *)(param_1 + 0x50));
    FUN_019aed30(*(undefined8 *)(param_1 + 0x50),iVar3 + 1);
    FUN_019aede0(*(undefined8 *)(param_1 + 0x50),0,*(undefined8 *)(param_1 + 0x50),0);
    FUN_019aeb50(*(undefined8 *)(param_1 + 0x50));
    FUN_0199be10(param_1,*(undefined8 *)(param_1 + 0x50));
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 1000) + 0x10);
    local_88 = 0;
    if (-1 < iVar3 + -1) {
      do {
        puVar7 = (undefined4 *)
                 FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 1000),local_88);
        cVar2 = FUN_019b3c10(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xde8),puVar7[1],
                             param_1 + 0x2c);
        if (cVar2 == '\0') {
          puVar7[1] = 0xffffffff;
        }
        else {
          puVar7[1] = *(undefined4 *)(param_1 + 0x2c);
        }
        cVar2 = FUN_019b3c10(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xde8),*puVar7,
                             param_1 + 0x2c);
        if (cVar2 == '\0') {
          *puVar7 = 0xffffffff;
        }
        else {
          *puVar7 = *(undefined4 *)(param_1 + 0x2c);
        }
        local_88 = local_88 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

