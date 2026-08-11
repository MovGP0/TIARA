/* Ghidra address: 006051d0 */
/* Ghidra symbol: FUN_006051d0 */


void FUN_006051d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_29;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = auStack_98;
  local_20 = 0;
  local_28 = 0;
  local_40 = 0;
  local_10 = 0;
  local_38 = FUN_00410e60(&DAT_00605110,1);
  if (local_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_38 + 0x10;
  }
  FUN_0041b840(&local_40,lVar1);
  *(longlong **)(local_38 + 0x18) = param_2;
  (**(code **)(*param_2 + 0x18))(param_2,&local_29,1);
  FUN_00419260(&local_28,&DAT_00406578,1,local_29);
  (**(code **)(**(longlong **)(local_38 + 0x18) + 0x18))
            (*(longlong **)(local_38 + 0x18),local_28,local_29);
  FUN_00414480(&local_10);
  local_48 = FUN_0045ae90();
  local_50 = local_28;
  if (local_28 != 0) {
    local_50 = *(longlong *)(local_28 + -8);
  }
  local_78 = (undefined4)local_50;
  FUN_0045aba0(local_48,&local_10,local_28,0);
  FUN_00414b50(&local_20,local_10);
  FUN_00414480(&local_10);
  local_18 = FUN_00602e50(DAT_01dee058,local_20);
  if (local_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_38 + 0x20;
  }
  FUN_00603b30(param_1,local_18,lVar1);
  FUN_0041b800(&local_40);
  FUN_00419430(&local_28,&DAT_00406578);
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  return;
}

