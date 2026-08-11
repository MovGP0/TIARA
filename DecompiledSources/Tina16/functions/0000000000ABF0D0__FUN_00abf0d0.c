/* Ghidra address: 00abf0d0 */
/* Ghidra symbol: FUN_00abf0d0 */


void FUN_00abf0d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_00a73df0(*(undefined8 *)(param_1 + 0x38),param_5);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x58) = param_6;
  FUN_00a9c3a0(param_1,param_2,&local_38,param_4,param_5,param_6,param_7,param_8);
  return;
}

