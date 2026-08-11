/* Ghidra address: 004b6810 */
/* Ghidra symbol: FUN_004b6810 */


void FUN_004b6810(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x70))
            (param_1,*(undefined8 *)(param_1[7] + (longlong)param_2 * 0x10),
             *(undefined8 *)(param_1[7] + (longlong)param_3 * 0x10));
  return;
}

