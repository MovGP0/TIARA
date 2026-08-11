/* Ghidra address: 0049fdc0 */
/* Ghidra symbol: FUN_0049fdc0 */


void FUN_0049fdc0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  FUN_0041ddd0(&local_10,PTR_PTR_020053e0);
  FUN_00410ae0(*(undefined8 *)(param_1 + 0xc0),&local_28);
  local_20 = local_28;
  local_18 = 0x11;
  uVar1 = FUN_0044d530(&PTR_FUN_00471b40,1,local_10,&local_20,0);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

