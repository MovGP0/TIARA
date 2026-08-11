/* Ghidra address: 00448880 */
/* Ghidra symbol: FUN_00448880 */


void FUN_00448880(int *param_1)

{
  int local_28 [2];
  undefined1 local_20;
  int local_18;
  undefined1 local_10;
  
  local_18 = *param_1;
  if (((local_18 < 0) || (param_1[1] < 1)) || (DAT_01dc0598 <= local_18)) {
    local_28[0] = param_1[1];
    local_20 = 0;
    local_10 = 0;
    FUN_0043dbd0(PTR_PTR_02005c78,local_28,1);
  }
  return;
}

