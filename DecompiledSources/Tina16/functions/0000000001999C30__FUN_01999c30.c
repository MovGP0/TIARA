/* Ghidra address: 01999c30 */
/* Ghidra symbol: FUN_01999c30 */


void FUN_01999c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  longlong local_40 [2];
  
  cVar2 = (**(code **)(*param_2 + 0x118))(param_2);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*param_2 + 0x1c8))(param_2);
    local_4c = 0;
    if (-1 < iVar3 + -1) {
      do {
        iVar4 = (**(code **)(*param_2 + 0x210))(param_2,local_4c);
        if ((-1 < iVar4) && (iVar4 < 99999)) {
          if (*(char *)(*(longlong *)(param_1 + 0x50) + 0xe0) == '\x0e') {
            (**(code **)(*param_2 + 0x208))
                      (param_2,local_4c,
                       *(undefined4 *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) + 0x28) +
                        (longlong)iVar4 * 8),0);
            iVar6 = *(int *)(*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) + 0x28
                              ) + (longlong)iVar4 * 8);
            iVar5 = *(int *)(param_1 + 0x2c);
            if (*(int *)(param_1 + 0x2c) <= iVar6) {
              iVar5 = iVar6;
            }
            *(int *)(param_1 + 0x2c) = iVar5;
          }
          (**(code **)(*param_2 + 0x218))
                    (param_2,local_4c,
                     *(undefined4 *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460)
                        + 0x28) + 4 + (longlong)iVar4 * 8));
        }
        local_4c = local_4c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    cVar2 = FUN_0198a580(param_2);
    if (cVar2 == '\x04') {
      if ((char)param_2[0x34] == '\x02') {
        lVar1 = param_2[0x35];
        iVar3 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            iVar6 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                              (*(longlong **)(lVar1 + 0xd8),iVar4);
            if (((*(char *)(*(longlong *)(param_1 + 0x50) + 0xe0) == '\x0e') && (-1 < iVar6)) &&
               (iVar6 < 99999)) {
              (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x48))
                        (*(longlong **)(lVar1 + 0xd8),iVar4,
                         (longlong)
                         *(int *)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) +
                                   0x28) + (longlong)iVar6 * 8));
              iVar6 = *(int *)(*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) +
                                0x28) + (longlong)iVar6 * 8);
              iVar5 = *(int *)(param_1 + 0x2c);
              if (*(int *)(param_1 + 0x2c) <= iVar6) {
                iVar5 = iVar6;
              }
              *(int *)(param_1 + 0x2c) = iVar5;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = FUN_01cfd2d0();
        iVar4 = 0;
        if (-1 < iVar3 + -1) {
          do {
            cVar2 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar4,local_40);
            if (((cVar2 == '\t') && (iVar6 = (int)*(short *)(local_40[0] + 0x1f), -1 < iVar6)) &&
               (iVar6 < 99999)) {
              if (*(char *)(*(longlong *)(param_1 + 0x50) + 0xe0) == '\x0e') {
                *(undefined2 *)(local_40[0] + 0x1f) =
                     *(undefined2 *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460)
                        + 0x28) + (longlong)iVar6 * 8);
                iVar5 = *(int *)(*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) +
                                  0x28) + (longlong)iVar6 * 8);
                iVar7 = *(int *)(param_1 + 0x2c);
                if (*(int *)(param_1 + 0x2c) <= iVar5) {
                  iVar7 = iVar5;
                }
                *(int *)(param_1 + 0x2c) = iVar7;
              }
              *(undefined2 *)(local_40[0] + 0x21) =
                   *(undefined2 *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xd0) + 0x460) +
                      0x28) + 4 + (longlong)iVar6 * 8);
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  return;
}

