/* Ghidra address: 00b01b00 */
/* Ghidra symbol: FUN_00b01b00 */


void FUN_00b01b00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x11) == '\0') {
    FUN_006d6750(*(undefined8 *)(param_1 + 0x6f8),0);
  }
  else {
    FUN_006d6750(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x6b0));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x10) == '\0') {
    FUN_006d6750(*(undefined8 *)(param_1 + 0x6b8),0);
  }
  else {
    FUN_006d6750(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(param_1 + 0x6b0));
  }
  FUN_006d6750(*(undefined8 *)(param_1 + 0x6c0),0);
  if ((*(char *)(*(longlong *)(param_1 + 0x730) + 0x11) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x730) + 0x10) == '\0')) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),0);
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x28))(*(longlong **)(param_1 + 0x738));
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))
            (*(longlong **)(param_1 + 0x710),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),1 < (int)uVar1) & 0xffffffff);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))
            (*(longlong **)(param_1 + 0x718),
             CONCAT71((int7)((ulonglong)uVar1 >> 8),0 < (int)uVar1) & 0xffffffff);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x6d8),
               *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 0xa9));
  return;
}

