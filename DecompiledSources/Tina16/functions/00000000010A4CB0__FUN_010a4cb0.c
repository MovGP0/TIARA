/* Ghidra address: 010a4cb0 */
/* Ghidra symbol: FUN_010a4cb0 */


void FUN_010a4cb0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x1a70) != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x878),&local_10);
    uVar1 = FUN_0043fc00(local_10);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94) = uVar1;
    FUN_010a3d40(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

