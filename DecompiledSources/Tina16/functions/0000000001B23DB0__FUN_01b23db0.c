/* Ghidra address: 01b23db0 */
/* Ghidra symbol: FUN_01b23db0 */


undefined8 FUN_01b23db0(uint param_1)

{
  if (*(uint *)(DAT_02110ce8 + 0x10) <= param_1) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(DAT_02110ce8 + 8) + (longlong)(int)param_1 * 8);
}

