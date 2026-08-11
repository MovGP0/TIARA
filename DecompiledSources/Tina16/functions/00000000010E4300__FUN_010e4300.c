/* Ghidra address: 010e4300 */
/* Ghidra symbol: FUN_010e4300 */


void FUN_010e4300(longlong param_1,byte param_2,ushort param_3,char param_4)

{
  undefined8 local_20;
  code *local_18;
  longlong local_10;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    local_18 = FUN_010e4410;
    local_10 = param_1;
    FUN_00f834f0(&local_18);
    FUN_004169a0(&local_20,&DAT_0202f9c8 + (ulonglong)param_2 * 0x29);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_20);
    local_18 = FUN_010e4460;
    local_10 = param_1;
    FUN_00f833f0(&local_18,param_3);
    if (param_4 != '\0') {
      local_18 = FUN_010e4410;
      local_10 = param_1;
      FUN_00f833f0(&local_18,param_3 + 5000);
    }
  }
  FUN_00414480(&local_20);
  return;
}

