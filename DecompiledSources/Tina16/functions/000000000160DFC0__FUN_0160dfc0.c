/* Ghidra address: 0160dfc0 */
/* Ghidra symbol: FUN_0160dfc0 */


void FUN_0160dfc0(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (*PTR_DAT_02002b78 != '\0') {
    uVar1 = FUN_014c0b50();
    FUN_0043f750(local_20,param_1);
    FUN_004167d0(&local_28,param_2);
    FUN_014c4a70(uVar1,local_20[0],local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

