/* Ghidra address: 016d7a10 */
/* Ghidra symbol: FUN_016d7a10 */


void FUN_016d7a10(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char *local_30;
  
  if (param_1 != 0) {
    iVar5 = *(int *)(param_1 + 0x2d8);
    iVar3 = 1;
    if (0 < iVar5) {
      do {
        lVar4 = (longlong)iVar3;
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128);
        sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((((sVar2 == 0xf) ||
              (plVar1 = *(longlong **)
                         (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
              sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0x10)) ||
             (plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0xd9)) ||
            ((plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0xda ||
             (plVar1 = *(longlong **)
                        (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
             sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0xa4)))) ||
           ((plVar1 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
            sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0xa6 ||
            (plVar1 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) + 0x128),
            sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0xa7)))) {
          local_30 = *(char **)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + lVar4 * 8) +
                               0x48);
          FUN_00b909d0(&local_30,0x10);
          if ((*local_30 == '\b') && (*(longlong *)(local_30 + 1) != 0)) {
            FUN_00410f20(*(undefined8 *)(local_30 + 1));
            local_30[1] = '\0';
            local_30[2] = '\0';
            local_30[3] = '\0';
            local_30[4] = '\0';
            local_30[5] = '\0';
            local_30[6] = '\0';
            local_30[7] = '\0';
            local_30[8] = '\0';
          }
          else if (((*local_30 != '\t') || (*(longlong *)(local_30 + 0x11) == 0)) &&
                  (*local_30 == '\v')) {
            FUN_004095f0(*(undefined8 *)(local_30 + 0x17));
            local_30[0x13] = '\0';
            local_30[0x14] = '\0';
            local_30[0x15] = '\0';
            local_30[0x16] = '\0';
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

