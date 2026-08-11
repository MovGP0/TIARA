/* Ghidra address: 00db7180 */
/* Ghidra symbol: FUN_00db7180 */


void FUN_00db7180(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x118,0);
  FUN_00db23a0(local_30[0],param_1,param_2,param_3);
  local_38 = 1;
  local_34 = *(double *)(local_30[0] + 0x108) * 0.1 <= *(double *)(local_30[0] + 8);
  local_33 = *(double *)(local_30[0] + 0x68) <= *(double *)(local_30[0] + 8);
  uVar1 = FUN_016ebdc0(param_1);
  FUN_01d04b50(uVar1,&local_38);
  return;
}

