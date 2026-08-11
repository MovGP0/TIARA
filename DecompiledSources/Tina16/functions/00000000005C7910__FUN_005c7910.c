/* Ghidra address: 005c7910 */
/* Ghidra symbol: FUN_005c7910 */


undefined8 FUN_005c7910(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_40 [48];
  undefined8 local_10;
  
  FUN_00417580(local_40,&DAT_005bc4e0);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_40,&DAT_005bc4e0);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_40,&DAT_005bc4e0);
  FUN_00417740(local_40,&DAT_005bc4e0);
  return param_2;
}

