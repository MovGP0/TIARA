/* Ghidra address: 019a7df0 */
/* Ghidra symbol: FUN_019a7df0 */


int FUN_019a7df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 local_30;
  uint local_2c;
  
  iVar1 = 0;
  FUN_0199e960(param_2,param_3,param_4,param_5,0xffffffff,0xffffffff,&local_2c,&local_30);
  if (-1 < (int)local_2c) {
    do {
      iVar1 = iVar1 + 1;
      FUN_0199e960(param_2,param_3,param_4,param_5,local_2c,local_30,&local_2c,&local_30);
    } while (local_2c < 0x80000000);
  }
  return iVar1;
}

