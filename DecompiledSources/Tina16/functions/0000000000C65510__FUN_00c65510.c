/* Ghidra address: 00c65510 */
/* Ghidra symbol: FUN_00c65510 */


void FUN_00c65510(longlong param_1)

{
  undefined1 local_28 [24];
  
  thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0x68),local_28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_007fdf50(*(longlong *)(param_1 + 0x18),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x18),0);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_007fdf50(*(longlong *)(param_1 + 8),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 8),0);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_007fdf50(*(longlong *)(param_1 + 0x10),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x10),0);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_007fdf50(*(longlong *)(param_1 + 0x20),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x20),0);
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_007fdf50(*(longlong *)(param_1 + 0x60),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x60),0);
  }
  return;
}

