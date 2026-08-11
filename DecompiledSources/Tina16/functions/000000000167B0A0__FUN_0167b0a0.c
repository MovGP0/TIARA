/* Ghidra address: 0167b0a0 */
/* Ghidra symbol: FUN_0167b0a0 */


void FUN_0167b0a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x1d0,0);
  if (*(byte *)(local_30[0] + 9) < 3) {
    FUN_00dbb700(local_30[0],param_1,param_2,param_3);
  }
  else if (*(byte *)(local_30[0] + 9) == 3) {
    FUN_00dbc2c0(local_30[0],param_1,param_2,param_3);
  }
  return;
}

