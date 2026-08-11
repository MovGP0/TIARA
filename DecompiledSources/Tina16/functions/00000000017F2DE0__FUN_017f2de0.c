/* Ghidra address: 017f2de0 */
/* Ghidra symbol: FUN_017f2de0 */


void FUN_017f2de0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xb00) = param_2;
  *(undefined4 *)(param_1 + 0xb04) = param_3;
  *(undefined1 *)(param_1 + 0xb08) = param_4;
  if (*(char *)(param_1 + 0xb00) == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x840),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x848),0);
  }
  else if (*(char *)(param_1 + 0xb00) == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x840),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x848),1);
  }
  cVar1 = *(char *)(param_1 + 0xb08);
  if (cVar1 == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x850),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x858),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x860),0);
  }
  else if (cVar1 == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x850),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x858),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x860),0);
  }
  else if (cVar1 == '\x02') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x850),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x858),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x860),1);
  }
  return;
}

