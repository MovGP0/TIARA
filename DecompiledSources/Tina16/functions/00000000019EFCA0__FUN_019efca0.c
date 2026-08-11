/* Ghidra address: 019efca0 */
/* Ghidra symbol: FUN_019efca0 */


undefined8 FUN_019efca0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0198a580(param_2), cVar1 == '\x04')) &&
      (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 == 0x3a)) &&
     (iVar3 = (**(code **)(*param_2 + 0x210))(param_2,0),
     iVar3 == *(int *)(*(longlong *)(param_1 + 0x70) + 0xc0))) {
    return 1;
  }
  return 0;
}

