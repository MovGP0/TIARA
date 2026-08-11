/* Ghidra address: 014ba450 */
/* Ghidra symbol: FUN_014ba450 */


void FUN_014ba450(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if ((*(char *)(param_1 + 0x748) != '\0') && (*param_3 == 0xd)) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_10);
    FUN_00415dd0(param_1 + 0xd50,local_10,0);
    FUN_014ba390(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

