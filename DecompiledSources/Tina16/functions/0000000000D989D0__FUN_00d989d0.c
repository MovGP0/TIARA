/* Ghidra address: 00d989d0 */
/* Ghidra symbol: FUN_00d989d0 */


void FUN_00d989d0(undefined8 param_1,undefined1 *param_2,char param_3)

{
  *param_2 = 0x14;
  if (param_3 == '\x02') {
    *(undefined4 *)(param_2 + 4) = 0x16;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if (param_3 == '\x03') {
    *(undefined4 *)(param_2 + 4) = 0x17;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if (param_3 == '\x04') {
    *(undefined4 *)(param_2 + 4) = 0x18;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}

