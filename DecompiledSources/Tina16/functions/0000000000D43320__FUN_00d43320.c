/* Ghidra address: 00d43320 */
/* Ghidra symbol: FUN_00d43320 */


void FUN_00d43320(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00d41b40(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 8))(param_1), cVar1 != '\0')) {
    FUN_00789550(param_1,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

