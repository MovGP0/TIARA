/* Ghidra address: 01d5a1d0 */
/* Ghidra symbol: FUN_01d5a1d0 */


void FUN_01d5a1d0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_016eacf0(param_1,2,2);
  }
  FUN_016ebb00(param_1,1,local_30,0x18);
  FUN_016ee260(param_1,&local_38,0x18,0);
  FUN_01d59f60(param_1,1,2,uVar1,local_30,local_38);
  FUN_016e9f40(param_1,FUN_01d5a180);
  return;
}

