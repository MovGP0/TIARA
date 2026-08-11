/* Ghidra address: 018b35f0 */
/* Ghidra symbol: FUN_018b35f0 */


void FUN_018b35f0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar2 = FUN_0188d920();
  plVar3 = (longlong *)FUN_0188d190(uVar2);
  (**(code **)(*plVar3 + 0x60))(plVar3);
  uVar2 = FUN_0188d920();
  lVar4 = FUN_0188d190(uVar2);
  iVar1 = *(int *)(lVar4 + 0xc) + -1;
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  if (0 < iVar1) {
    *(char *)(param_1 + 0x818) = (char)iVar1;
    (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x268))(*(longlong **)(param_1 + 0x7e0),iVar1);
  }
  return;
}

