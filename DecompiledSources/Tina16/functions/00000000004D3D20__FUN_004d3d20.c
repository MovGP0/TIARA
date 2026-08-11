/* Ghidra address: 004d3d20 */
/* Ghidra symbol: FUN_004d3d20 */


void FUN_004d3d20(longlong param_1)

{
  longlong lVar1;
  longlong local_28;
  longlong local_20;
  
  FUN_00414ad0(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
    local_20 = *(longlong *)(lVar1 + 0x60);
    local_28 = param_1;
    FUN_005974f0(local_20 + 8,&local_28);
    FUN_004d3c10(*(undefined8 *)(param_1 + 8),param_1);
  }
  return;
}

