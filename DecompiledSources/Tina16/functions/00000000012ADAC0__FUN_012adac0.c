/* Ghidra address: 012adac0 */
/* Ghidra symbol: FUN_012adac0 */


undefined4 FUN_012adac0(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *param_2 = uVar2;
  *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 0xdb8) + 8);
  return 0;
}

