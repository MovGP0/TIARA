/* Ghidra address: 01ba7720 */
/* Ghidra symbol: FUN_01ba7720 */


void FUN_01ba7720(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  if (iVar1 == 0) {
    FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x778));
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    if (iVar1 == 1) {
      FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x780));
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                        (*(longlong **)(param_1 + 0x748));
      if (iVar1 == 2) {
        FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x788));
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                          (*(longlong **)(param_1 + 0x748));
        if (iVar1 == 3) {
          FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x790));
        }
        else {
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                            (*(longlong **)(param_1 + 0x748));
          if (iVar1 == 4) {
            FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x798));
          }
          else {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                              (*(longlong **)(param_1 + 0x748));
            if (iVar1 == 5) {
              FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x7a0));
            }
            else {
              iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                                (*(longlong **)(param_1 + 0x748));
              if (iVar1 == 6) {
                FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x7a8));
              }
              else {
                FUN_01ba5ef0(param_1,*(undefined8 *)(param_1 + 0x7b0));
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x7c1) = 1;
  return;
}

