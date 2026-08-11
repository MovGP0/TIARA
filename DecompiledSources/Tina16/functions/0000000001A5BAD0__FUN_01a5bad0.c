/* Ghidra address: 01a5bad0 */
/* Ghidra symbol: FUN_01a5bad0 */


void FUN_01a5bad0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x2ae8) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x2ae8) = 0;
  }
  FUN_01a5bac0(param_1);
  FUN_0043e1a0(&local_10,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_00414ad0(param_1 + 0x890,local_10);
  FUN_01a5b280(param_1,0,0);
  FUN_00414480(&local_10);
  return;
}

