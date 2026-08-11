/* Ghidra address: 017b2110 */
/* Ghidra symbol: FUN_017b2110 */


void FUN_017b2110(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00c5a4c0(*(undefined8 *)(param_2 + 0x6e8),*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_2 + 0x7e0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x7e4) = 0x800000;
  FUN_0064dbe0(*(undefined8 *)(param_2 + 0x6f0),0);
  FUN_0064dbe0(*(undefined8 *)(param_2 + 0x720),1);
  *(undefined4 *)(param_2 + 0x7e4) = *(undefined4 *)(param_1 + 0x5b);
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x778),1);
  }
  else if (cVar1 == '\x01') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x788),1);
  }
  else if (cVar1 == '\x02') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x780),1);
  }
  else if (cVar1 == '\x03') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 2000),1);
  }
  cVar1 = *(char *)(param_1 + 0x5f);
  if (cVar1 == '\0') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x7a0),1);
  }
  else if (cVar1 == '\x01') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x7b0),1);
  }
  else if (cVar1 == '\x02') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x7a8),1);
  }
  else if (cVar1 == '\x03') {
    FUN_0082a6c0(*(undefined8 *)(param_2 + 0x7d8),1);
  }
  return;
}

