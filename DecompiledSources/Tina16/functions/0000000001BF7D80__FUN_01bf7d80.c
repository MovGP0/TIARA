/* Ghidra address: 01bf7d80 */
/* Ghidra symbol: FUN_01bf7d80 */


void FUN_01bf7d80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  local_10 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b8d80(local_10,param_1);
  FUN_004b6dc0(local_10,0);
  uVar1 = (**(code **)*local_10)(local_10);
  FUN_004b8ba0(param_2,local_10,uVar1);
  FUN_00410f20(local_10);
  return;
}

