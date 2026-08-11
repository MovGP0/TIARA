/* Ghidra address: 01538a60 */
/* Ghidra symbol: FUN_01538a60 */


void FUN_01538a60(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    cVar1 = FUN_01538980(param_1,uVar2);
    if (cVar1 != '\0') {
      **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
    }
  }
  return;
}

