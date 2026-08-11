/* Ghidra address: 0175af80 */
/* Ghidra symbol: FUN_0175af80 */


void FUN_0175af80(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_0175af60(param_1,param_2);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_1 + 0x50);
    *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(param_1 + 0x51);
    *(undefined1 *)(param_2 + 0x52) = *(undefined1 *)(param_1 + 0x52);
    *(undefined1 *)(param_2 + 0x53) = *(undefined1 *)(param_1 + 0x53);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  }
  return;
}

