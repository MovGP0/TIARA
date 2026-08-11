/* Ghidra address: 01ca51d0 */
/* Ghidra symbol: FUN_01ca51d0 */


void FUN_01ca51d0(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_30;
  longlong local_18;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 1;
  local_18 = FUN_01a33340(&DAT_01a310f8,1,0,0);
  FUN_01a33cd0(local_18,1);
  FUN_01a36470(local_18);
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  return;
}

