/* Ghidra address: 007427b0 */
/* Ghidra symbol: FUN_007427b0 */


void FUN_007427b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x310);
  FUN_005fd4e0(plVar1[0xf]);
  (**(code **)(*plVar1 + 200))(plVar1,param_3,param_4);
  (**(code **)(*plVar1 + 0xc0))(plVar1,param_5,param_6);
  return;
}

