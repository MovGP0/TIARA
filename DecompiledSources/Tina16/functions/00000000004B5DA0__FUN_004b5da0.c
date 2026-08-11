/* Ghidra address: 004b5da0 */
/* Ghidra symbol: FUN_004b5da0 */


undefined8 FUN_004b5da0(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x40) <= param_2) {
    FUN_004b3510(param_1,PTR_PTR_02004940,param_2);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)param_2 * 0x10);
}

