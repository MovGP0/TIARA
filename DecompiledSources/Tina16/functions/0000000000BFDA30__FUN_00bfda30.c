/* Ghidra address: 00bfda30 */
/* Ghidra symbol: FUN_00bfda30 */


void FUN_00bfda30(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    FUN_00bf1e50(param_1);
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

