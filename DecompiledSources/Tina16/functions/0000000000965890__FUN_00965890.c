/* Ghidra address: 00965890 */
/* Ghidra symbol: FUN_00965890 */


void FUN_00965890(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0xab) != '\a') {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))(*(longlong **)(param_1 + 0x98));
    *(undefined1 *)(param_1 + 0xab) = 9;
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_00414520(param_1 + 0x10);
    local_1c = 0;
    while (*(char *)(param_1 + 0xab) == '\t') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
      plVar2 = *(longlong **)(param_1 + 0x20);
      iVar1 = (int)plVar2[5];
      if (iVar1 == 0x3c) {
        if ((int)plVar2[0x14] == 0x21) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar2 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar2[0x14] == 0x5b) {
            (**(code **)(*plVar2 + 0x28))(plVar2);
            local_1c = local_1c + 1;
          }
        }
      }
      else if (iVar1 == 0x5d) {
        if ((int)plVar2[0x14] == 0x5d) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
          while (plVar2 = *(longlong **)(param_1 + 0x20), (int)plVar2[0x14] == 0x5d) {
            (**(code **)(*plVar2 + 0x28))(plVar2);
          }
          plVar2 = *(longlong **)(param_1 + 0x20);
          if ((int)plVar2[0x14] == 0x3e) {
            (**(code **)(*plVar2 + 0x28))(plVar2);
            if (local_1c == 0) {
              *(undefined1 *)(param_1 + 0xab) = 2;
            }
            else {
              local_1c = local_1c + -1;
            }
          }
        }
      }
      else if (iVar1 == 0x9c) {
        *(undefined1 *)(param_1 + 0xab) = 7;
      }
    }
  }
  return;
}

