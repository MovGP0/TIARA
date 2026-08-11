/* Ghidra address: 00c2f690 */
/* Ghidra symbol: FUN_00c2f690 */


void FUN_00c2f690(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 8,1);
  (**(code **)(*param_2 + 0x20))
            (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 8));
  return;
}

