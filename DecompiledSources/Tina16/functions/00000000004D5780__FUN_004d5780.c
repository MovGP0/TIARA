/* Ghidra address: 004d5780 */
/* Ghidra symbol: FUN_004d5780 */


longlong * FUN_004d5780(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 *local_30;
  undefined **local_20;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  (**(code **)(*local_res8 + 0x98))(local_res8,0,param_3,0);
  local_20 = (undefined **)*local_res8;
  if ((local_20 != &PTR_FUN_00488b20) && ((*(ushort *)((longlong)local_res8 + 0x34) & 0x10) == 0)) {
    cVar2 = FUN_004ae080(local_res8,&PTR_FUN_00488b20);
    if (cVar2 == '\0') {
      FUN_00410ae0(*local_res8,&local_48);
      local_40 = local_48;
      local_38 = 0x11;
      local_58 = 0;
      uVar3 = FUN_0044d8d0(&PTR_FUN_00472138,1,PTR_PTR_020033f8,&local_40);
      FUN_004134c0(uVar3);
    }
    if ((char)local_res8[0x15] != '\0') {
      (**(code **)(*local_res8 + 0x88))(local_res8);
    }
  }
  (**(code **)(*DAT_020115f0 + 0x30))(DAT_020115f0);
  FUN_00414480(&local_48);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

