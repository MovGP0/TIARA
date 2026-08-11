/* Ghidra address: 0131c840 */
/* Ghidra symbol: FUN_0131c840 */


void FUN_0131c840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  *(undefined8 *)(param_1 + 0x48) = param_2;
  FUN_00414ad0(param_1 + 0x58,local_res20);
  FUN_00414ad0(param_1 + 0x60,param_5);
  FUN_00414ad0(param_1 + 0x68,param_6);
  FUN_00414ad0(param_1 + 0x70,param_7);
  FUN_00414ad0(param_1 + 0x78,param_8);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(undefined1 *)(param_1 + 0x98) = param_9;
  *(undefined4 *)(param_1 + 0x9c) = param_10;
  *(undefined1 *)(param_1 + 0x50) = param_11;
  FUN_00414560(&local_res20,5);
  return;
}

