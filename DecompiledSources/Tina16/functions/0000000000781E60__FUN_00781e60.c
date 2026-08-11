/* Ghidra address: 00781e60 */
/* Ghidra symbol: FUN_00781e60 */


undefined8 FUN_00781e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_4 >> 0x10 == 0) {
    FUN_0043f780(local_30,param_4);
    FUN_00416ba0(local_20,&LAB_00781f94,local_30[0]);
  }
  else {
    FUN_004167d0(local_20,param_4);
  }
  FUN_00780e40(param_1,&local_50,local_20[0],2);
  uVar1 = FUN_00780b50(param_1,param_2,param_3,param_4,&local_50);
  FUN_00417740(&local_50,&DAT_0075cb10);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return uVar1;
}

