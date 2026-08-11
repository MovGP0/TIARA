/* Ghidra address: 01ba66d0 */
/* Ghidra symbol: FUN_01ba66d0 */


undefined8 FUN_01ba66d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x778);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    if (iVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x780);
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                        (*(longlong **)(param_1 + 0x748));
      if (iVar1 == 2) {
        uVar2 = *(undefined8 *)(param_1 + 0x788);
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                          (*(longlong **)(param_1 + 0x748));
        if (iVar1 == 3) {
          uVar2 = *(undefined8 *)(param_1 + 0x790);
        }
        else {
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                            (*(longlong **)(param_1 + 0x748));
          if (iVar1 == 4) {
            uVar2 = *(undefined8 *)(param_1 + 0x798);
          }
          else {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                              (*(longlong **)(param_1 + 0x748));
            if (iVar1 == 5) {
              uVar2 = *(undefined8 *)(param_1 + 0x7a0);
            }
            else {
              iVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))
                                (*(longlong **)(param_1 + 0x748));
              if (iVar1 == 6) {
                uVar2 = *(undefined8 *)(param_1 + 0x7a8);
              }
              else {
                uVar2 = *(undefined8 *)(param_1 + 0x7b0);
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

