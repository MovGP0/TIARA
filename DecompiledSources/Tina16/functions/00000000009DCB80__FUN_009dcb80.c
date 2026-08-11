/* Ghidra address: 009dcb80 */
/* Ghidra symbol: FUN_009dcb80 */


undefined4 FUN_009dcb80(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined8 local_10;
  
  local_28 = auStack_48;
  local_10 = FUN_009d3b20(&PTR_FUN_009d38a0,1,param_2);
  uVar1 = FUN_009dc930(param_1,local_10);
  FUN_0041d630(uVar1);
  FUN_00410f20(local_10);
  return 0;
}

