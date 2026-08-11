/* Ghidra address: 0153a500 */
/* Ghidra symbol: FUN_0153a500 */


void FUN_0153a500(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar2 == 0x27) {
      *(longlong **)(**(longlong **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x2c) * 8) =
           param_2;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  return;
}

