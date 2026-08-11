/* Ghidra address: 01b7c390 */
/* Ghidra symbol: FUN_01b7c390 */


void FUN_01b7c390(longlong param_1)

{
  undefined8 local_20;
  undefined1 local_18 [16];
  
  local_20 = 0;
  FUN_0043dc90(local_18);
  FUN_0043dec0(&local_20,local_18);
  FUN_01aa02c0(*(undefined8 *)(param_1 + 0x800),L"-NEW-",local_20,0,PTR_DAT_02003ad0,
               PTR_DAT_02005048);
  FUN_00414480(&local_20);
  return;
}

