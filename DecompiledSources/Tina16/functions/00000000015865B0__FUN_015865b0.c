/* Ghidra address: 015865b0 */
/* Ghidra symbol: FUN_015865b0 */


undefined8 FUN_015865b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_52 [66];
  undefined8 local_10;
  
  FUN_00417580(local_52,&DAT_015764a8);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_52,&DAT_015764a8);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_52,&DAT_015764a8);
  FUN_00417740(local_52,&DAT_015764a8);
  return param_2;
}

