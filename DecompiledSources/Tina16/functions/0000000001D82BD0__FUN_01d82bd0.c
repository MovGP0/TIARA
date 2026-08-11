/* Ghidra address: 01d82bd0 */
/* Ghidra symbol: FUN_01d82bd0 */


void FUN_01d82bd0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0x260))(*(longlong **)(param_1 + 0x908));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0x260))(*(longlong **)(param_1 + 0x908))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 200))(*(longlong **)(param_1 + 0xa88),uVar2);
    FUN_01d80da0(param_1,6,1,0);
  }
  return;
}

