/* Ghidra address: 00cf2eb0 */
/* Ghidra symbol: FUN_00cf2eb0 */


undefined8 * FUN_00cf2eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined1 local_25 [16];
  undefined1 local_15 [5];
  undefined8 local_10;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_30 = 0;
  FUN_00879e50();
  local_10 = FUN_008b1f70(&PTR_FUN_008b1c10,1);
  FUN_00874790(&local_58);
  FUN_008b1190(local_10,&local_30,param_2,local_58);
  FUN_00410f20(local_10);
  FUN_00409a70(local_30,local_25,0x10);
  FUN_0040d200(local_15,5,0);
  FUN_00cf2c10(local_25,param_3,local_48);
  FUN_00419260(param_1,&DAT_0086e978,1,0x18);
  FUN_00409a70(local_48,*param_1,0x18);
  FUN_0041b800(&local_58);
  FUN_00419430(&local_30,&DAT_0086e978);
  return param_1;
}

