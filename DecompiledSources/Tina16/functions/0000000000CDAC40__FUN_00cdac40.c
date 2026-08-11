/* Ghidra address: 00cdac40 */
/* Ghidra symbol: FUN_00cdac40 */


undefined8 FUN_00cdac40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00419430(param_2,&DAT_0086e978);
  local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_00cdad00(param_1,param_3,local_18);
  FUN_004b6dc0(local_18,0);
  FUN_00878880(local_18,param_2,0xffffffffffffffff,0);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  return param_2;
}

