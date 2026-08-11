/* Ghidra address: 01500530 */
/* Ghidra symbol: FUN_01500530 */


void FUN_01500530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(undefined8 *)(param_1 + 0x790) = param_2;
  *(undefined8 *)(param_1 + 0x798) = param_3;
  FUN_00414ad0(param_1 + 0x7a0,local_res20);
  uVar1 = FUN_019a4600();
  FUN_019af580(uVar1,param_3);
  FUN_00414480(&local_res20);
  return;
}

