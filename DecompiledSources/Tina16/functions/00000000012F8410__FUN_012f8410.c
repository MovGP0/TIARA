/* Ghidra address: 012f8410 */
/* Ghidra symbol: FUN_012f8410 */


void FUN_012f8410(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x988) + 0x260))(*(longlong **)(param_1 + 0x988));
  FUN_01306a20(param_1,1,uVar1);
  uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x700));
  FUN_013056e0(param_1,1,uVar2);
  return;
}

