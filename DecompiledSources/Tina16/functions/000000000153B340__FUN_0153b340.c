/* Ghidra address: 0153b340 */
/* Ghidra symbol: FUN_0153b340 */


void FUN_0153b340(longlong param_1)

{
  if (param_1 == 0) {
    param_1 = FUN_019a4600();
  }
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x488) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0xf10) != 0)) {
    FUN_01af11d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x488) + 0xf10) + 8),
                 *(undefined8 *)PTR_DAT_02004030);
  }
  return;
}

