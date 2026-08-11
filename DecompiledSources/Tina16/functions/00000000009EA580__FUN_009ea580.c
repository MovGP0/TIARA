/* Ghidra address: 009ea580 */
/* Ghidra symbol: FUN_009ea580 */


void FUN_009ea580(longlong *param_1,int param_2,int param_3)

{
  (**(code **)(*param_1 + 0x68))
            (param_1,*(undefined8 *)(param_1[6] + (longlong)param_2 * 0x10),
             *(undefined8 *)(param_1[6] + (longlong)param_3 * 0x10));
  return;
}

