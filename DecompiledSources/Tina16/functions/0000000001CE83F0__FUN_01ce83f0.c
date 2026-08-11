/* Ghidra address: 01ce83f0 */
/* Ghidra symbol: FUN_01ce83f0 */


undefined1 FUN_01ce83f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_29 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(char *)(param_1 + 0x58) == '\0') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar4);
        FUN_01cc0ae0(*(undefined8 *)(lVar3 + 0xe0),&local_20);
        iVar2 = FUN_004170c0(&LAB_01ce8534,local_20,1);
        if (0 < iVar2) {
          local_29 = 1;
          break;
        }
      }
      else if (*(char *)(param_1 + 0x58) == '\x01') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar4);
        FUN_01cc0ae0(*(undefined8 *)(lVar3 + 0x98),&local_20);
        iVar2 = FUN_004170c0(&LAB_01ce8534,local_20,1);
        if (0 < iVar2) {
          local_29 = 1;
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return local_29;
}

