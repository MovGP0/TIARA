/* Ghidra address: 01127440 */
/* Ghidra symbol: FUN_01127440 */


void FUN_01127440(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x808));
  FUN_00725900(*(undefined8 *)(param_1 + 0x718),uVar2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0xa8))(*(longlong **)(param_1 + 0x718));
  if (cVar1 != '\0') {
    FUN_00bfafa0(*(undefined8 *)(param_1 + 0x808),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x718) + 0xd0));
  }
  return;
}

