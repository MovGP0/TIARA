/* Ghidra address: 0195c0d0 */
/* Ghidra symbol: FUN_0195c0d0 */


void FUN_0195c0d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = thunk_FUN_040ef593(0);
  FUN_01810040(local_10,0,param_2,param_3);
  uVar1 = FUN_00526ff0(0x3ff0000000000000,*param_2);
  *param_2 = uVar1;
  uVar1 = FUN_00526ff0(0x3ff0000000000000,*param_3);
  *param_3 = uVar1;
  thunk_FUN_041a9b5c(0,local_10);
  return;
}

