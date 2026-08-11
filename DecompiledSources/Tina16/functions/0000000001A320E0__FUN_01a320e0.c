/* Ghidra address: 01a320e0 */
/* Ghidra symbol: FUN_01a320e0 */


void FUN_01a320e0(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined8 local_20;
  undefined8 local_18;
  byte *local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_10 = (byte *)FUN_01cfd6a0(param_1);
  FUN_00b909d0(&local_10,0x10);
  if (*local_10 < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)local_10 >> 8),1) << (*local_10 & 0x1f) & 0x90U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined8 *)(param_2 + 2) = **(undefined8 **)(local_10 + 1);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(*(longlong *)(local_10 + 1) + 0x10);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(*(longlong *)(local_10 + 1) + 8);
  }
  *param_2 = 1;
  FUN_00414560(&local_20,2);
  return;
}

