/* Ghidra address: 010715c0 */
/* Ghidra symbol: FUN_010715c0 */


void FUN_010715c0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar2 = *param_2;
  uVar1 = *(undefined2 *)(param_2 + 1);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_00414610(local_res20);
  *(undefined4 *)(param_1 + 0x718) = uVar2;
  *(undefined2 *)(param_1 + 0x71c) = uVar1;
  FUN_0041b840(param_1 + 0x728,local_res18);
  FUN_00414ad0(param_1 + 0x730,local_res20);
  *(undefined4 *)(param_1 + 0x738) = param_5;
  *(undefined8 *)(param_1 + 0x740) = param_6;
  *(undefined8 *)(param_1 + 0x758) = param_7;
  FUN_0041b800(&local_res18);
  FUN_00414480(&local_res20);
  return;
}

