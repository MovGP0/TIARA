/* Ghidra address: 010b94c0 */
/* Ghidra symbol: FUN_010b94c0 */


void FUN_010b94c0(longlong param_1,char param_2,undefined8 *param_3)

{
  if (param_2 == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)param_3;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_3 + 4);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  }
  else if (param_2 == '\x05') {
    *(undefined8 *)(param_1 + 0x58) = *param_3;
    *(undefined8 *)(param_1 + 0x60) = param_3[1];
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_3 + 3);
  }
  return;
}

