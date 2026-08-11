/* Ghidra address: 00bfe520 */
/* Ghidra symbol: FUN_00bfe520 */


void FUN_00bfe520(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    FUN_00bf9d90(param_1);
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

