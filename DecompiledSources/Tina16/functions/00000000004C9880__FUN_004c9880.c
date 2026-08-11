/* Ghidra address: 004c9880 */
/* Ghidra symbol: FUN_004c9880 */


undefined8 FUN_004c9880(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(short *)(param_1 + 0x58) != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
  }
  FUN_004c9990(param_1,&local_10);
  uVar1 = FUN_00448650(local_10,param_1 + 0x80);
  if (*(short *)(param_1 + 0x58) != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
  }
  FUN_00414480(&local_10);
  return uVar1;
}

