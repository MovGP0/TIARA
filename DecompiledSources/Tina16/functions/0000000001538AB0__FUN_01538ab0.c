/* Ghidra address: 01538ab0 */
/* Ghidra symbol: FUN_01538ab0 */


void FUN_01538ab0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    cVar1 = FUN_01538980(param_1,uVar2);
    if (cVar1 != '\0') {
      *(longlong **)(**(longlong **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x2c) * 8) =
           param_2;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  return;
}

