/* Ghidra address: 0132f210 */
/* Ghidra symbol: FUN_0132f210 */


undefined8 FUN_0132f210(ushort *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 *local_60;
  int local_4c;
  uint local_48;
  int local_44;
  longlong local_40;
  undefined8 local_38 [3];
  undefined8 local_20;
  
  local_60 = auStack_98;
  *param_3 = 0;
  local_48 = (uint)*param_1;
  iVar1 = local_48 + 1;
  FUN_017c5880(local_38,iVar1,0);
  FUN_017c5220(&local_40,iVar1);
  local_20 = FUN_0132c700((undefined2)local_48);
  for (local_44 = 0; local_44 <= (int)(local_48 - 1); local_44 = local_44 + 1) {
    for (local_4c = 0; local_4c <= (int)(local_48 - 1); local_4c = local_4c + 1) {
      uVar2 = FUN_0132ec30(param_1,(undefined2)local_44,(undefined2)local_4c);
      local_78 = local_4c + 1;
      FUN_017dc850(local_38[0],0,uVar2,local_44 + 1);
    }
  }
  for (local_44 = 0; local_44 <= (int)(local_48 - 1); local_44 = local_44 + 1) {
    uVar2 = FUN_0132daf0(param_2,(undefined2)local_44);
    local_78 = local_48 + 1;
    FUN_017dc850(local_38[0],0,uVar2,local_44 + 1);
  }
  FUN_017da6e0(local_38[0]);
  FUN_017db330(local_38[0],local_40);
  for (local_4c = 0; local_4c <= (int)(local_48 - 1); local_4c = local_4c + 1) {
    FUN_0132dbe0(local_20,(undefined2)local_4c,
                 *(undefined8 *)(local_40 + (longlong)(local_4c + 1) * 8));
  }
  FUN_017c58d0(local_38);
  FUN_017c52d0(&local_40);
  return local_20;
}

