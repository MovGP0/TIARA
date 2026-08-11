/* Ghidra address: 01b0f160 */
/* Ghidra symbol: FUN_01b0f160 */


void FUN_01b0f160(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  puVar1 = auStack_68;
  if (*(char *)(param_1 + 0xed6) != '\0') {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020030c8,L"\\pwl_comps.log");
    local_28 = (longlong *)FUN_004d72d0(&PTR_FUN_00495ae0,1);
    if (*(longlong *)(param_1 + 0x1380) != 0) {
      FUN_01b105b0(*(longlong *)(param_1 + 0x1380),local_28);
    }
    (**(code **)(*local_28 + -0x60))(local_28,&local_48);
    local_20 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_48);
    FUN_004b9df0(local_20,local_30);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  return;
}

