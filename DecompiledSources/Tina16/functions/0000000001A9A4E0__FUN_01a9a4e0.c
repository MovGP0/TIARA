/* Ghidra address: 01a9a4e0 */
/* Ghidra symbol: FUN_01a9a4e0 */


void FUN_01a9a4e0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = thunk_FUN_041de4d6(*(undefined8 *)(param_1 + 0x140));
  if (iVar1 == 0) {
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
  }
  else {
    thunk_FUN_03cc0d62(&local_30);
    thunk_FUN_0417e313(*(undefined8 *)(param_1 + 0x140),&local_30);
    FUN_01a982d0(param_1,local_30,local_2c,param_2,param_3);
  }
  return;
}

