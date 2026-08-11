/* Ghidra address: 01155a80 */
/* Ghidra symbol: FUN_01155a80 */


void FUN_01155a80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x128))(param_1,0);
  FUN_01155500(param_1,*(undefined1 *)(param_1[0xda] + 0x4a8));
  (**(code **)(*param_1 + 0x128))(param_1,1);
  *(bool *)param_3 = (char)param_1[0xf9] == '\0';
  *(undefined1 *)(param_1 + 0xf9) = 0;
  return;
}

