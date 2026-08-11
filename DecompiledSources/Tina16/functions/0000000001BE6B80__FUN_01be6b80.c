/* Ghidra address: 01be6b80 */
/* Ghidra symbol: FUN_01be6b80 */


void FUN_01be6b80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_20 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_2 + 8));
  lVar1 = FUN_01c03e40(param_1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x80),*(undefined4 *)(lVar1 + 0x8c))
  ;
  FUN_0064d000(param_1,local_40);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xa8))(*(longlong **)(param_1 + 0x4b0),local_40);
  FUN_0065dee0(param_1,param_2);
  FUN_006579d0(param_1,*(undefined8 *)(param_2 + 8),0,0);
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_20);
  return;
}

