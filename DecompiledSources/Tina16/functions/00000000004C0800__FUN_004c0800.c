/* Ghidra address: 004c0800 */
/* Ghidra symbol: FUN_004c0800 */


void FUN_004c0800(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  longlong local_10;
  
  local_10 = 0;
  FUN_00414480(&local_10);
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xb8),&PTR_FUN_00486f38);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 0x10));
  }
  if (local_10 == 0) {
    FUN_00410ae0(**(undefined8 **)(param_1 + 0xb8),&local_10);
  }
  local_58 = local_10;
  local_50 = 0x11;
  local_48 = *(undefined8 *)PTR_PTR_02002ae8;
  local_40 = 0x11;
  local_38 = *(undefined8 *)(param_1 + 0x88);
  local_30 = 0x11;
  local_28 = *(undefined8 *)(param_2 + 8);
  local_20 = 0x11;
  uVar2 = FUN_0044d8d0(&PTR_FUN_00471c70,1,PTR_PTR_02005138,&local_58,3);
  FUN_004134c0(uVar2);
  FUN_00414480(&local_10);
  return;
}

