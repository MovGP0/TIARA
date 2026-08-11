/* Ghidra address: 017efd70 */
/* Ghidra symbol: FUN_017efd70 */


void FUN_017efd70(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  local_20[0] = FUN_00bb7750(1,uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x868) + 0x2b0))(*(longlong **)(param_1 + 0x868),local_20);
  return;
}

