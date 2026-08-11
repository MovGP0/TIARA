/* Ghidra address: 00f2d080 */
/* Ghidra symbol: FUN_00f2d080 */


undefined8 FUN_00f2d080(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_18 = 0;
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  FUN_00419260(&local_18,&DAT_00406578,1,(longlong)iVar1);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_18,0);
  FUN_00419260(&local_18,&DAT_00406578,1,(longlong)iVar1);
  FUN_00414480(&local_10);
  local_20 = FUN_0045ae90();
  local_28 = local_18;
  if (local_18 != 0) {
    local_28 = *(longlong *)(local_18 + -8);
  }
  local_48 = (undefined4)local_28;
  FUN_0045aba0(local_20,&local_10,local_18,0);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00419430(&local_18,&DAT_00406578);
  FUN_00414480(&local_10);
  return param_2;
}

