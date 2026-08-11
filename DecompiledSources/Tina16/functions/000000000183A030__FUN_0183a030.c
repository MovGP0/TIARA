/* Ghidra address: 0183a030 */
/* Ghidra symbol: FUN_0183a030 */


longlong FUN_0183a030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  longlong local_10;
  
  local_40 = auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_10 = FUN_01831ef0(&PTR_FUN_0182de80,1,*(undefined8 *)(param_1 + 0x38));
  FUN_01839be0(auStack_78,param_2,local_10);
  FUN_01836fd0(param_1,&local_48,param_2);
  local_28 = FUN_018240b0(local_48);
  FUN_0181e5f0(param_2,&local_50,L"pos1");
  local_30 = FUN_018240b0(local_50);
  FUN_01839fa0(auStack_78,&local_58,&local_28,&local_30);
  FUN_00414ad0(local_10 + 0xa0,local_58);
  FUN_01832da0(local_10,local_20);
  if (local_20[0] != 0) {
    FUN_00414ad0(param_1 + 8,local_20[0]);
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02002608);
    FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_58,3);
  FUN_00414480(local_20);
  return local_10;
}

