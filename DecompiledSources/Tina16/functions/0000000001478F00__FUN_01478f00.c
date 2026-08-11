/* Ghidra address: 01478f00 */
/* Ghidra symbol: FUN_01478f00 */


void FUN_01478f00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x358) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x358));
  }
  if (*(longlong *)(param_2 + 0x350) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x350));
  }
  if (*(longlong *)(param_2 + 0x348) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x348));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x390) + 8);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  return;
}

