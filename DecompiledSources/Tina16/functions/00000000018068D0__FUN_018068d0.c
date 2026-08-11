/* Ghidra address: 018068d0 */
/* Ghidra symbol: FUN_018068d0 */


void FUN_018068d0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30));
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = param_3;
    }
  }
  return;
}

