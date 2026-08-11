/* Ghidra address: 010e1210 */
/* Ghidra symbol: FUN_010e1210 */


void FUN_010e1210(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_2c;
  
  if (param_1 != 0) {
    local_2c = 1;
    do {
      iVar2 = 0;
      do {
        lVar3 = (longlong)local_2c;
        lVar4 = (longlong)iVar2;
        if (*(longlong *)(param_1 + -0x38 + lVar3 * 0x40 + lVar4 * 8) != 0) {
          plVar1 = *(longlong **)(param_1 + -0x38 + lVar3 * 0x40 + lVar4 * 8);
          if (*(char *)((longlong)plVar1 + 0x7ed) != '\0') {
            (**(code **)(*plVar1 + 0x480))(plVar1);
          }
          if (*(char *)((longlong)plVar1 + 0xa9) != '\0') {
            *(undefined1 *)(plVar1 + 0x11a) = 1;
            FUN_00805990(plVar1);
          }
          FUN_00805200(plVar1);
          plVar1[0x118] = 0;
          *(undefined8 *)(param_1 + -0x38 + lVar3 * 0x40 + lVar4 * 8) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      local_2c = local_2c + 1;
    } while (local_2c != 0x11);
  }
  return;
}

