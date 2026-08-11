/* Ghidra address: 00fd1350 */
/* Ghidra symbol: FUN_00fd1350 */


void FUN_00fd1350(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x7e0) == 8) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))
                        (*(longlong **)(param_1 + 0x6b0));
      *(byte *)(param_1 + 0x7f1) = *(byte *)(param_1 + 0x6fc + (longlong)(iVar2 + 1) * 4) | 0x80;
      goto LAB_00fd13f6;
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(undefined1 *)(param_1 + 0x7f1) = *(undefined1 *)(param_1 + 0x6fc + (longlong)(iVar2 + 1) * 4);
LAB_00fd13f6:
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    *(undefined1 *)(param_1 + 0x7f0) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7f0) = 0;
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e8),&local_10);
  FUN_00414ad0(param_1 + 0x7f8,local_10);
  FUN_00414480(&local_10);
  return;
}

