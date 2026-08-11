/* Ghidra address: 00788830 */
/* Ghidra symbol: FUN_00788830 */


undefined4
FUN_00788830(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  local_40 = auStack_78;
  local_28 = *param_3;
  uStack_20 = *(undefined4 *)(param_3 + 1);
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_1c = thunk_FUN_03b57162(param_2);
  thunk_FUN_03b994b9(param_2,1);
  uVar3 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar3,&local_28,2,&local_34);
  if (cVar1 == '\0') {
    local_34 = FUN_00788c20(param_1);
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    local_34 = FUN_00788c20(param_1);
  }
  thunk_FUN_0412a071(param_2,local_34);
  uVar2 = FUN_0060f550(param_6);
  local_30 = FUN_0060f500(uVar2);
  uVar3 = FUN_00416740(local_res20);
  local_58 = local_30;
  local_2c = thunk_FUN_041a24be(param_2,uVar3,0xffffffff,param_5);
  thunk_FUN_0402759f(param_2,local_1c);
  FUN_00414480(&local_res20);
  return local_2c;
}

