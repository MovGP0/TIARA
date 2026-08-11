/* Ghidra address: 004c3080 */
/* Ghidra symbol: FUN_004c3080 */


void FUN_004c3080(undefined8 param_1,int param_2)

{
  int local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00419260(&local_10,&DAT_00406578,1,0x100);
  while (0 < param_2) {
    if (param_2 < 0x101) {
      FUN_004bec10(param_1,local_10,(longlong)param_2);
      local_1c = 0;
      param_2 = local_1c;
    }
    else {
      FUN_004bec10(param_1,local_10,0x100);
      param_2 = param_2 + -0x100;
    }
  }
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

