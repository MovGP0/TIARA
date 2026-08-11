/* Ghidra address: 00d432d0 */
/* Ghidra symbol: FUN_00d432d0 */


void FUN_00d432d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_00d41b40(param_1);
  if (((cVar1 == '\0') && (cVar1 = FUN_00d41b20(param_1), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*param_1 + 8))(param_1), cVar1 != '\0')) {
    *(undefined8 *)(param_2 + 0x18) = 1;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

