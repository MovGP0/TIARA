/* Ghidra address: 00a1ffd0 */
/* Ghidra symbol: FUN_00a1ffd0 */


void FUN_00a1ffd0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + 0x18) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x1d0) + 8))();
                    /* WARNING: Could not recover jumptable at 0x00a1ffff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1d0) + 0x10))(param_1);
  return;
}

