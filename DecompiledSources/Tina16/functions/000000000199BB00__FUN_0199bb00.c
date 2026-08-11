/* Ghidra address: 0199bb00 */
/* Ghidra symbol: FUN_0199bb00 */


void FUN_0199bb00(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int local_50;
  int local_4c;
  longlong local_40 [2];
  
  iVar6 = *(int *)(param_2 + 0x10);
  local_50 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,local_50);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar5 + 0x118))(plVar5), cVar1 != '\0')) {
        iVar2 = (**(code **)(*plVar5 + 0x1c8))();
        local_4c = 0;
        if (-1 < iVar2 + -1) {
          do {
            iVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,local_4c);
            if (*(int *)(param_1 + 0x28) < iVar3) {
              *(int *)(param_1 + 0x28) = iVar3;
            }
            local_4c = local_4c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        cVar1 = FUN_0198a580(plVar5);
        if (cVar1 == '\x04') {
          iVar2 = FUN_01cfd2d0();
          local_4c = 0;
          if (-1 < iVar2 + -1) {
            do {
              cVar1 = FUN_01cfd030(plVar5,local_4c);
              if (cVar1 == '\t') {
                (**(code **)(*plVar5 + 0x2d0))(plVar5,local_4c,local_40);
                if (*(int *)(param_1 + 0x28) < (int)*(short *)(local_40[0] + 0x1f)) {
                  *(int *)(param_1 + 0x28) = (int)*(short *)(local_40[0] + 0x1f);
                }
              }
              local_4c = local_4c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        cVar1 = FUN_0198a580(plVar5);
        if ((cVar1 == '\x04') && (cVar1 = FUN_01d04d40(plVar5), cVar1 != '\0')) {
          cVar1 = FUN_01d04d50(plVar5);
          if (((cVar1 != '\0') || (cVar1 = FUN_01d04d70(plVar5), cVar1 != '\0')) &&
             (*(longlong *)(plVar5[0x35] + 8) != 0)) {
            FUN_0199bb00(param_1,*(undefined8 *)(plVar5[0x35] + 8));
          }
          cVar1 = FUN_01d04d70(plVar5);
          if (cVar1 != '\0') {
            iVar2 = (**(code **)(**(longlong **)(plVar5[0x35] + 0xe0) + 0x28))();
            local_4c = 0;
            if (-1 < iVar2 + -1) {
              do {
                uVar4 = (**(code **)(**(longlong **)(plVar5[0x35] + 0xe0) + 0x30))
                                  (*(longlong **)(plVar5[0x35] + 0xe0),local_4c);
                cVar1 = FUN_019b3c10(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xde8),uVar4,
                                     param_1 + 0x2c);
                if (cVar1 == '\0') {
                  (**(code **)(**(longlong **)(plVar5[0x35] + 0xe0) + 0x48))
                            (*(longlong **)(plVar5[0x35] + 0xe0),local_4c,0xffffffffffffffff);
                }
                else {
                  (**(code **)(**(longlong **)(plVar5[0x35] + 0xe0) + 0x48))
                            (*(longlong **)(plVar5[0x35] + 0xe0),local_4c,
                             (longlong)*(int *)(param_1 + 0x2c));
                }
                local_4c = local_4c + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
        }
      }
      local_50 = local_50 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (param_2 == *(longlong *)(param_1 + 0x50)) {
    FUN_019954b0(param_2,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

