/* Ghidra address: 01526480 */
/* Ghidra symbol: FUN_01526480 */


undefined8 FUN_01526480(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (((cVar1 == '\x05') && (cVar1 = FUN_017c3740(param_2), cVar1 == '\0')) &&
     (iVar2 = (**(code **)(*param_2 + 0x210))(param_2,0), iVar2 == *(int *)(param_1 + 0x60))) {
    return 1;
  }
  return 0;
}

