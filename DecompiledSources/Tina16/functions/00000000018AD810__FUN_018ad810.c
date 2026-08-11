/* Ghidra address: 018ad810 */
/* Ghidra symbol: FUN_018ad810 */


void FUN_018ad810(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  
  iVar1 = FUN_00416d10(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  if (iVar1 < 0) {
    *param_6 = 1;
  }
  iVar1 = FUN_00416db0(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  if (iVar1 == 0) {
    *param_6 = 0;
  }
  iVar1 = FUN_00416d10(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  if (0 < iVar1) {
    *param_6 = 0xffffffff;
  }
  return;
}

