/* Ghidra address: 016ab120 */
/* Ghidra symbol: FUN_016ab120 */


undefined8 FUN_016ab120(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_00c44460(local_58,0,0x3ff0000000000000);
  FUN_00c44720(param_2,local_58,local_28);
  FUN_00c444b0(PTR_DAT_02002618,local_28,local_38);
  FUN_00c44500(PTR_DAT_02002618,local_28,local_48);
  FUN_00c44790(local_38,local_48,local_28);
  FUN_016aadd0(local_58,local_28,0);
  FUN_00c44460(local_58,0,0xbfe0000000000000);
  FUN_00c44790(local_28,local_58,param_1);
  return param_1;
}

