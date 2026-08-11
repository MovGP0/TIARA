/* Ghidra address: 009dcaa0 */
/* Ghidra symbol: FUN_009dcaa0 */


undefined4 FUN_009dcaa0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  undefined1 *local_28;
  undefined8 local_10;
  
  local_28 = auStack_58;
  local_10 = FUN_009d3b20(&PTR_FUN_009d38a0,1,param_2);
  uVar1 = FUN_009dc720(param_1,local_10,local_30);
  FUN_0041d630(uVar1);
  *param_3 = local_30[0];
  FUN_00410f20(local_10);
  return 0;
}

