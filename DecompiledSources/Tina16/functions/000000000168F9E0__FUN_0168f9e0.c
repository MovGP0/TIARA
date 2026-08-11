/* Ghidra address: 0168f9e0 */
/* Ghidra symbol: FUN_0168f9e0 */


void FUN_0168f9e0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x2a8,0);
  if (*(byte *)(local_30[0] + 3) < 3) {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      FUN_0168b1a0(local_30[0],param_1,param_2,param_3);
    }
    else {
      FUN_016873b0(local_30[0],param_1,param_2,param_3);
    }
  }
  else if ((byte)(*(byte *)(local_30[0] + 3) - 3) < 2) {
    FUN_016863f0(local_30[0],param_1,param_2,param_3);
  }
  return;
}

