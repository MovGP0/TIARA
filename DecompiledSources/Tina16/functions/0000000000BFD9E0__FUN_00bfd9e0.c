/* Ghidra address: 00bfd9e0 */
/* Ghidra symbol: FUN_00bfd9e0 */


void FUN_00bfd9e0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (cVar1 == '\0') {
    FUN_00c08be0(param_1,0);
  }
  return;
}

