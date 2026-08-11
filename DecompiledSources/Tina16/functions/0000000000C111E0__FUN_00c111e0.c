/* Ghidra address: 00c111e0 */
/* Ghidra symbol: FUN_00c111e0 */


undefined8 FUN_00c111e0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  undefined8 local_18;
  
  local_20 = auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  if (local_28 != 0) {
    local_18 = *(undefined8 *)(local_28 + 0x5e8);
    iVar1 = FUN_004aeba0(local_18,param_1);
    if (iVar1 == -1) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x18);
}

