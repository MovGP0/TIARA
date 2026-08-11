/* Ghidra address: 00a99800 */
/* Ghidra symbol: FUN_00a99800 */


void FUN_00a99800(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xb8);
  (**(code **)(*plVar1 + 0x458))(plVar1,param_1,param_3,param_4,param_5);
  return;
}

