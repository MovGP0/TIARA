/* Ghidra address: 01c27330 */
/* Ghidra symbol: FUN_01c27330 */


void FUN_01c27330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  while( true ) {
    iVar1 = FUN_01c273c0(param_1);
    if (iVar1 < 1) break;
    iVar1 = FUN_01c273c0(param_1);
    lVar2 = FUN_01c27400(param_1,iVar1 + -1);
    FUN_00419430(lVar2 + 0x18,&DAT_01c20ee8);
    FUN_00418590(lVar2,&DAT_01c20f28);
    iVar1 = FUN_01c273c0(param_1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar1 + -1);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10));
  return;
}

