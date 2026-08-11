/* Ghidra address: 017c3ea0 */
/* Ghidra symbol: FUN_017c3ea0 */


undefined8 FUN_017c3ea0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_3);
  *(undefined1 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x18) = 1;
  *(undefined2 *)(param_3 + 0x1c) = 0;
  FUN_00414ad0(param_3 + 0x20,local_res10[0]);
  uVar1 = 0;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x20) + -4);
  }
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_017c39e0(param_1,param_3);
  FUN_00414480(local_res10);
  return param_1;
}

