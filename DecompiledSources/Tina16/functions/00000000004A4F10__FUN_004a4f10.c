/* Ghidra address: 004a4f10 */
/* Ghidra symbol: FUN_004a4f10 */


void FUN_004a4f10(undefined8 param_1)

{
  int iVar1;
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_20 [2];
  
  if (DAT_02011630 == 0) {
    DAT_02011630 = FUN_004eb750(&PTR_FUN_004a3db8,1);
  }
  local_58 = DAT_02011630 + 8;
  local_20[0] = param_1;
  iVar1 = FUN_00596a10(local_58,local_20);
  if (iVar1 < 0) {
    local_68[0] = param_1;
    FUN_00597e50(DAT_02011630 + 8,local_68);
  }
  return;
}

