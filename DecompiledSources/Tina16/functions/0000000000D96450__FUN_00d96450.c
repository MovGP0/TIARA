/* Ghidra address: 00d96450 */
/* Ghidra symbol: FUN_00d96450 */


void FUN_00d96450(undefined8 param_1,undefined1 *param_2,char param_3)

{
  *param_2 = 0xf;
  if (param_3 == '\x02') {
    *(undefined4 *)(param_2 + 4) = 0x31;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if (param_3 == '\x03') {
    *(undefined4 *)(param_2 + 4) = 0x32;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if (param_3 == '\x04') {
    *(undefined4 *)(param_2 + 4) = 0x33;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if (param_3 == '\x05') {
    *(undefined4 *)(param_2 + 4) = 0x34;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}

