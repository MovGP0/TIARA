/* Ghidra address: 019afd30 */
/* Ghidra symbol: FUN_019afd30 */


undefined8 FUN_019afd30(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if (((cVar1 == '\x05') && (cVar1 = FUN_017c3740(param_2), cVar1 == '\0')) &&
     (iVar2 = (**(code **)(*param_2 + 0x210))(param_2,0), iVar2 == *(int *)(param_1 + 0x68))) {
    return 1;
  }
  return 0;
}

