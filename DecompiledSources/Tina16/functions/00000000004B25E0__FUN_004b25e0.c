/* Ghidra address: 004b25e0 */
/* Ghidra symbol: FUN_004b25e0 */


void FUN_004b25e0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  (**(code **)(*param_1 + 0x28))
            (param_1,*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8),4);
  lVar1 = param_1[2];
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8));
  return;
}

