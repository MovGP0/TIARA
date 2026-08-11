/* Ghidra address: 004b2850 */
/* Ghidra symbol: FUN_004b2850 */


undefined8 FUN_004b2850(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 8));
  return param_2;
}

