/* Ghidra address: 019a9e90 */
/* Ghidra symbol: FUN_019a9e90 */


undefined8 FUN_019a9e90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x04') && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x86)) {
    return 1;
  }
  return 0;
}

