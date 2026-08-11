/* Ghidra address: 01686380 */
/* Ghidra symbol: FUN_01686380 */


void FUN_01686380(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x140,0);
  if (*(byte *)(local_30[0] + 3) < 3) {
    FUN_01685210(local_30[0],param_1,param_2,param_3);
  }
  else if ((byte)(*(byte *)(local_30[0] + 3) - 3) < 2) {
    FUN_01685950(local_30[0],param_1,param_2,param_3);
  }
  return;
}

