/* Ghidra address: 012f7b40 */
/* Ghidra symbol: FUN_012f7b40 */


void FUN_012f7b40(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  iVar1 = FUN_006dd6f0(uVar3);
  uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar1 + -1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x260))(*(longlong **)(param_1 + 0xa88));
  FUN_012e5390(uVar3,uVar2);
  return;
}

