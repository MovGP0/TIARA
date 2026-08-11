/* Ghidra address: 016ab430 */
/* Ghidra symbol: FUN_016ab430 */


undefined8 FUN_016ab430(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_00c44720(param_2,param_2,local_28);
  FUN_00c44500(local_28,PTR_DAT_02002618,local_28);
  FUN_00c449c0(local_28,local_28);
  FUN_00c444b0(param_2,local_28,local_28);
  FUN_016aadd0(local_38,local_28,0);
  FUN_00c44460(local_38,0,0xbff0000000000000);
  FUN_00c44720(local_28,local_38,param_1);
  return param_1;
}

