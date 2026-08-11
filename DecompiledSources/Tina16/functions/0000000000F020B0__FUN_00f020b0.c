/* Ghidra address: 00f020b0 */
/* Ghidra symbol: FUN_00f020b0 */


void FUN_00f020b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    FUN_008087b0(*(undefined8 *)PTR_DAT_02005950,&local_10);
    FUN_00414ad0(param_1 + 0x350,local_10);
    *(undefined1 *)(param_1 + 0x348) = 3;
  }
  FUN_00658970(param_1,param_2);
  FUN_00f012b0(param_1,0);
  FUN_00414480(&local_10);
  return;
}

