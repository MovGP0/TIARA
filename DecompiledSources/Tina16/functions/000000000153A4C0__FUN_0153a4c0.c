/* Ghidra address: 0153a4c0 */
/* Ghidra symbol: FUN_0153a4c0 */


void FUN_0153a4c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar2 == 0x27) {
      **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
    }
  }
  return;
}

