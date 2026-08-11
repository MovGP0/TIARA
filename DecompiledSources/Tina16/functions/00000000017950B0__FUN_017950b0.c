/* Ghidra address: 017950b0 */
/* Ghidra symbol: FUN_017950b0 */


void FUN_017950b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

