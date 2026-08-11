/* Ghidra address: 0096da40 */
/* Ghidra symbol: FUN_0096da40 */


void FUN_0096da40(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(*(longlong **)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    plVar1 = *(longlong **)(param_1 + 0x10);
    if ((int)plVar1[5] == 0x26) {
      if ((int)plVar1[0x14] == 0x23) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        *(undefined1 *)(param_1 + 0x20) = 0;
        *(undefined1 *)(param_1 + 8) = 0x62;
      }
      else {
        *(undefined1 *)(param_1 + 0x20) = 2;
        *(undefined1 *)(param_1 + 8) = 0x66;
      }
      *(undefined1 *)(param_1 + 8) = 0;
      while (plVar1 = *(longlong **)(param_1 + 0x10), (int)plVar1[0x14] != 0x9c) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x28) == 0x3b) {
          *(undefined1 *)(param_1 + 8) = 0;
          return;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                  (*(longlong **)(param_1 + 0x28),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28));
      }
    }
    else if ((int)plVar1[5] == 0x9c) {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 4;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                (*(longlong **)(param_1 + 0x28),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28));
    }
  }
  return;
}

