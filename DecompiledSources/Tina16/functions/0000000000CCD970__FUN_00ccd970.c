/* Ghidra address: 00ccd970 */
/* Ghidra symbol: FUN_00ccd970 */


void FUN_00ccd970(uint param_1,int param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)0x0;
  local_28 = FUN_004afa30(DAT_01eadbd0);
  if (param_2 < *(int *)(local_28 + 0x10)) {
    local_20 = (longlong *)FUN_004aeac0(local_28,param_2);
  }
  FUN_00412130(*(undefined8 *)(DAT_01eadbd0 + 0x10));
  if ((param_1 & 1) == 1) {
    (**(code **)*local_20)(local_20);
  }
  else {
    (**(code **)(*local_20 + 8))(local_20);
  }
  return;
}

