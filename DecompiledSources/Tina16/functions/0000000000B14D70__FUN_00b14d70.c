/* Ghidra address: 00b14d70 */
/* Ghidra symbol: FUN_00b14d70 */


void FUN_00b14d70(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 local_828 [2048];
  
  if (param_2 == 0) {
    FUN_004144d0(param_3);
  }
  else if (param_2 < 0x400) {
    uVar1 = thunk_FUN_041c7398(DAT_020147d8,0,param_1,param_2,local_828,0x800,0,0);
    FUN_004147f0(param_3,local_828,uVar1,0);
  }
  else {
    uVar1 = thunk_FUN_041c7398(DAT_020147d8,0,param_1,param_2,0,0,0,0);
    FUN_004147f0(param_3,0,uVar1,0);
    thunk_FUN_041c7398(DAT_020147d8,0,param_1,param_2,*param_3,uVar1,0,0);
  }
  return;
}

