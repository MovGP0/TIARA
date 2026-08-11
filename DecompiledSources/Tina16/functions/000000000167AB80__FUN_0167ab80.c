/* Ghidra address: 0167ab80 */
/* Ghidra symbol: FUN_0167ab80 */


void FUN_0167ab80(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0x198,0);
  if (*(byte *)(local_30[0] + 9) < 3) {
    cVar1 = FUN_01d44bc0(*(undefined1 *)(param_2 + 0xed6));
    if (cVar1 == '\0') {
      FUN_016759b0(local_30[0],param_1,param_2,param_3);
    }
    else {
      FUN_01674990(local_30[0],param_1,param_2,param_3);
    }
  }
  else if (*(byte *)(local_30[0] + 9) == 3) {
    FUN_0167a2a0(local_30[0],param_1,param_2,param_3);
  }
  return;
}

