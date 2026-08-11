/* Ghidra address: 0108a140 */
/* Ghidra symbol: FUN_0108a140 */


void FUN_0108a140(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xac0) + 0x18);
  cVar2 = FUN_010ae5f0(uVar1);
  FUN_010ae9a0(uVar1,cVar2 == '\0',1);
  (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x180))(*(longlong **)(param_1 + 0xa78));
  iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x798));
  if (iVar3 == 3) {
    FUN_01088c80(param_1);
  }
  return;
}

