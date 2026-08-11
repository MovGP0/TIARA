/* Ghidra address: 004b65b0 */
/* Ghidra symbol: FUN_004b65b0 */


void FUN_004b65b0(longlong *param_1,uint param_2,undefined8 param_3)

{
  if (*(uint *)(param_1 + 8) <= param_2) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  (**(code **)(*param_1 + 0x130))(param_1);
  *(undefined8 *)(param_1[7] + 8 + (longlong)(int)param_2 * 0x10) = param_3;
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

