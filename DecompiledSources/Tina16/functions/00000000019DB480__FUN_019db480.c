/* Ghidra address: 019db480 */
/* Ghidra symbol: FUN_019db480 */


void FUN_019db480(longlong param_1)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x810) != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    FUN_0043f750(&local_10,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0x68 + (longlong)iVar1 * 4));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x780),local_10);
  }
  FUN_00414480(&local_10);
  return;
}

