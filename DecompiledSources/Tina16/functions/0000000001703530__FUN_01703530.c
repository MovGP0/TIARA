/* Ghidra address: 01703530 */
/* Ghidra symbol: FUN_01703530 */


void FUN_01703530(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_20);
  if (local_20[0] == 0) {
LAB_01703597:
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x4e0));
    if ((int)uVar2 < 1) {
      uVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x550));
      if ((int)uVar2 < 1) goto LAB_01703597;
    }
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x128))(*(longlong **)(param_1 + 0x6b8),uVar1);
  FUN_00414480(local_20);
  return;
}

