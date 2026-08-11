/* Ghidra address: 004a0a40 */
/* Ghidra symbol: FUN_004a0a40 */


void FUN_004a0a40(undefined1 *param_1)

{
  char cVar1;
  undefined1 *local_res8;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00411e10(DAT_02011618,0xffffffff);
  local_res8 = param_1;
  while( true ) {
    cVar1 = FUN_004a01a0(DAT_02011618,local_res8);
    if (cVar1 != '\0') break;
    FUN_004a0140(DAT_02011618,local_res8);
    if (local_res8 == &LAB_00474bd8) break;
    local_res8 = (undefined1 *)FUN_00410ca0(local_res8);
  }
  FUN_00412130(DAT_02011618);
  return;
}

