/* Ghidra address: 006a5680 */
/* Ghidra symbol: FUN_006a5680 */


void FUN_006a5680(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_10 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b8d80(local_10,param_2);
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_006a5560(param_1,DAT_020123f2,local_10[1],uVar1);
  FUN_00410f20(local_10);
  return;
}

