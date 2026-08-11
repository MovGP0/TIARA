/* Ghidra address: 016ab350 */
/* Ghidra symbol: FUN_016ab350 */


undefined8 FUN_016ab350(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_00c44460(local_48,0,0x3ff0000000000000);
  FUN_00c44720(param_2,local_48,local_28);
  FUN_00c44720(param_2,param_2,local_38);
  FUN_00c44500(PTR_DAT_02002618,local_38,local_38);
  FUN_00c449c0(local_38,local_38);
  FUN_00c444b0(local_28,local_38,local_28);
  FUN_016aadd0(local_48,local_28,0);
  FUN_00c44460(local_48,0,0xbff0000000000000);
  FUN_00c44720(local_28,local_48,param_1);
  return param_1;
}

