/* Ghidra address: 019aede0 */
/* Ghidra symbol: FUN_019aede0 */


void FUN_019aede0(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int iVar9;
  int local_14c;
  undefined1 local_148 [256];
  longlong local_48;
  longlong local_40 [2];
  
  local_48 = 0;
  if ((param_2 != 0) ||
     (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x28))
                        (*(longlong **)(param_1 + 0x420)), 0 < iVar4)) {
    iVar4 = *(int *)(param_1 + 0x10);
    local_14c = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar8 = (longlong *)FUN_00b94e60(param_1,local_14c);
        cVar1 = FUN_0198a580(plVar8);
        if (cVar1 == '\x04') {
          sVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if ((sVar2 == 0x39) &&
             ((((char)plVar8[0x34] == '\x01' || ((char)plVar8[0x34] == '\x02')) &&
              (*(longlong *)(plVar8[0x35] + 8) != 0)))) {
            FUN_019aede0(*(undefined8 *)(plVar8[0x35] + 8),plVar8,param_3,0);
          }
          if (((param_2 != 0) && (*(char *)(param_2 + 0x1a0) == '\x02')) || (param_4 != '\0')) {
            iVar5 = (**(code **)(*plVar8 + 0x1c8))();
            iVar9 = 0;
            if (-1 < iVar5 + -1) {
              do {
                (**(code **)(*plVar8 + 0x240))(plVar8,local_148,iVar9);
                FUN_004169a0(&local_48,local_148);
                if ((local_48 != 0) && (iVar6 = FUN_004170c0(&DAT_019af098,local_48,1), iVar6 == 1))
                {
                  uVar7 = FUN_019aecf0(param_3,local_48);
                  (**(code **)(*plVar8 + 0x208))(plVar8,iVar9,uVar7);
                }
                iVar9 = iVar9 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            iVar5 = FUN_01cfd2d0();
            iVar9 = 0;
            if (-1 < iVar5 + -1) {
              do {
                cVar1 = FUN_01cfd030(plVar8,iVar9);
                if (cVar1 == '\t') {
                  (**(code **)(*plVar8 + 0x2d0))(plVar8,iVar9,local_40);
                  FUN_004169a0(&local_48,local_40[0]);
                  if ((local_48 != 0) &&
                     (iVar6 = FUN_004170c0(&DAT_019af098,local_48,1), iVar6 == 1)) {
                    uVar3 = FUN_019aecf0(param_3,local_48);
                    *(undefined2 *)(local_40[0] + 0x1f) = uVar3;
                  }
                }
                iVar9 = iVar9 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
        }
        local_14c = local_14c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(&local_48);
  return;
}

