/* Ghidra address: 014dfb10 */
/* Ghidra symbol: FUN_014dfb10 */


void FUN_014dfb10(char *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0xda8);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0xda8);
  }
  else if (cVar1 == '\x02') {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0xda8);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xda8);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0xdb0);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0xdb0);
  }
  else if (cVar1 == '\x03') {
    *(double *)(param_1 + 0x30) = 1.0 / *(double *)(param_2 + 0xdb0);
    *(double *)(param_1 + 0x40) = 1.0 / *(double *)(param_2 + 0xdb0);
  }
  else if (cVar1 == '\x04') {
    *(double *)(param_1 + 0x30) = 1.0 / *(double *)(param_2 + 0xdb0);
  }
  return;
}

