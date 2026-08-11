/* Ghidra address: 010e4210 */
/* Ghidra symbol: FUN_010e4210 */


void FUN_010e4210(longlong param_1,ulonglong param_2,char param_3)

{
  undefined8 local_20;
  code *local_18;
  longlong local_10;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    local_18 = FUN_010e4410;
    local_10 = param_1;
    FUN_00f834f0(&local_18);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),1);
    FUN_004169a0(&local_20,&DAT_0202f9c8 + (param_2 & 0xff) * 0x29);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_20);
    if (param_3 != '\0') {
      local_18 = FUN_010e4410;
      local_10 = param_1;
      FUN_00f833f0(&local_18,5000);
    }
  }
  FUN_00414480(&local_20);
  return;
}

