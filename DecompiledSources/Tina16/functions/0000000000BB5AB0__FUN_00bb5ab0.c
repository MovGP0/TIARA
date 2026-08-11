/* Ghidra address: 00bb5ab0 */
/* Ghidra symbol: FUN_00bb5ab0 */


undefined8 FUN_00bb5ab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = param_3;
  uVar1 = FUN_0041b800(&local_18);
  FUN_005963a0(param_1 + 8,&local_10,uVar1);
  FUN_0041b840(param_2,local_18);
  FUN_0041b800(&local_18);
  return param_2;
}

