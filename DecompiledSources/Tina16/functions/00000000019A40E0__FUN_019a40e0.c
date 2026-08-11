/* Ghidra address: 019a40e0 */
/* Ghidra symbol: FUN_019a40e0 */


void FUN_019a40e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  
  if ((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if ((sVar2 != 0x3a) && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x96)) {
      return;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  return;
}

