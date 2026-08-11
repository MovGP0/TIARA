/* Ghidra address: 016aae20 */
/* Ghidra symbol: FUN_016aae20 */


undefined8 FUN_016aae20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  undefined1 local_28 [24];
  
  FUN_016aadd0(local_28,param_2,0);
  uVar1 = FUN_0040c2f0(0x4024000000000000);
  FUN_00c44460(local_38,uVar1,0);
  FUN_00c44790(local_28,local_38,param_1);
  return param_1;
}

