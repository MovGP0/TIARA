/* Ghidra address: 0184fba0 */
/* Ghidra symbol: FUN_0184fba0 */


void FUN_0184fba0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    do {
      FUN_0184f110(param_1);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if ((*(char *)(lVar1 + 0x80) != '\0') || (*(char *)(lVar1 + 0x82) != '\0')) break;
      *(undefined1 *)(lVar1 + 0x81) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                (*(longlong **)(param_1 + 0x28),&local_30);
      iVar2 = FUN_004644a0(&local_30);
    } while ((iVar2 != 0) != (*(char *)(param_1 + 0x30) == '\0'));
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x80) = 0;
  }
  FUN_00460ba0(&local_30);
  return;
}

