/* Ghidra address: 012fb490 */
/* Ghidra symbol: FUN_012fb490 */


void FUN_012fb490(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_2 != 0) {
    puVar1 = *(undefined1 **)(param_2 + 0x18);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    if (iVar2 == 0) {
      *puVar1 = 1;
      puVar1[2] = 0;
      puVar1[1] = 0;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                        (*(longlong **)(param_1 + 0x838));
      if (iVar2 == 1) {
        *puVar1 = 0;
        puVar1[2] = 1;
        puVar1[1] = 0;
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))
                          (*(longlong **)(param_1 + 0x838));
        if (iVar2 == 2) {
          *puVar1 = 0;
          puVar1[2] = 0;
          puVar1[1] = 1;
        }
      }
    }
  }
  return;
}

