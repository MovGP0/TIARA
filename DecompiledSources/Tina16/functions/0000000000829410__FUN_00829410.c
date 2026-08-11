/* Ghidra address: 00829410 */
/* Ghidra symbol: FUN_00829410 */


void FUN_00829410(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 != '\0') {
    FUN_0082a780(param_1[5],param_2);
  }
  return;
}

