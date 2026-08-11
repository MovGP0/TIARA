/* Ghidra address: 00778820 */
/* Ghidra symbol: FUN_00778820 */


void FUN_00778820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined1 local_34 [12];
  
  plVar1 = (longlong *)FUN_007810f0();
  (**(code **)(*plVar1 + 0x118))(plVar1,local_34,2);
  FUN_00778890(param_1,param_2,param_3,param_4,param_5,param_6,local_34);
  return;
}

