/* Ghidra address: 01587af0 */
/* Ghidra symbol: FUN_01587af0 */


undefined8 FUN_01587af0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [24];
  undefined8 local_10;
  
  FUN_00417580(local_28,&DAT_01577a50);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_28,&DAT_01577a50);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_28,&DAT_01577a50);
  FUN_00417740(local_28,&DAT_01577a50);
  return param_2;
}

