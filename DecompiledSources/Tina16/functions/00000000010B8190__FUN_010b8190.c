/* Ghidra address: 010b8190 */
/* Ghidra symbol: FUN_010b8190 */


void FUN_010b8190(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  FUN_00414ff0(param_2 + 0x82,param_1 + 0x82);
  *(undefined1 *)(param_2 + 0x81) = *(undefined1 *)(param_1 + 0x81);
  *(undefined1 *)(param_2 + 0x182) = *(undefined1 *)(param_1 + 0x182);
  return;
}

