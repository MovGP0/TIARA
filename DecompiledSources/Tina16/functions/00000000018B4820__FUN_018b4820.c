/* Ghidra address: 018b4820 */
/* Ghidra symbol: FUN_018b4820 */


void FUN_018b4820(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0));
  bVar4 = iVar1 == 0;
  if (bVar4) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x128))(*(longlong **)(param_1 + 0x798),!bVar4);
  if (!bVar4) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    if (iVar1 == 0) {
      uVar3 = FUN_0188d920();
      uVar3 = FUN_0188d190(uVar3);
      uVar2 = FUN_0188b8b0(uVar3,9);
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),uVar2)
      ;
    }
  }
  return;
}

