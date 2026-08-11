/* Ghidra address: 010b7230 */
/* Ghidra symbol: FUN_010b7230 */


void FUN_010b7230(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined2 local_24;
  undefined2 local_22;
  longlong local_20;
  
  local_50 = auStack_98;
  FUN_0040d200(&local_38,0x18,0);
  local_38 = DAT_01f1162c;
  local_78 = param_4;
  FUN_00498350(&local_60,0,0,param_3);
  local_34 = local_60;
  uStack_2c = uStack_58;
  local_24 = param_5;
  local_22 = FUN_010b6c20(&local_38);
  local_44 = thunk_FUN_03a0580b(param_2,0,0);
  local_20 = thunk_FUN_0412a7bb(2,(longlong)local_44);
  if (local_20 == 0) {
    FUN_010b6bb0();
  }
  local_40 = thunk_FUN_0416a623(local_20);
  thunk_FUN_03a0580b(param_2,local_44,local_40);
  FUN_01d311c0(*param_1,&local_38,0x18);
  FUN_01d311c0(*param_1,local_40,local_44);
  thunk_FUN_04172795(local_20);
  thunk_FUN_03d5bf3d(local_20);
  return;
}

