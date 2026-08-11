/* Ghidra address: 012f87b0 */
/* Ghidra symbol: FUN_012f87b0 */


void FUN_012f87b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x9a0) + 0x260))(*(longlong **)(param_1 + 0x9a0));
  FUN_01306bf0(param_1,uVar1);
  uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,1,uVar2);
  return;
}

