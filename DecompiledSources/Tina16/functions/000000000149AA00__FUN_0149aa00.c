/* Ghidra address: 0149aa00 */
/* Ghidra symbol: FUN_0149aa00 */


void FUN_0149aa00(longlong param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xbd0) = param_2;
  *(undefined4 *)(param_1 + 0xbd4) = param_3;
  *(undefined1 *)(param_1 + 0xbd8) = param_4;
  if (*(char *)(param_1 + 0xbd0) == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x818),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x820),0);
  }
  else if (*(char *)(param_1 + 0xbd0) == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x818),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x820),1);
  }
  cVar1 = *(char *)(param_1 + 0xbd8);
  if (cVar1 == '\0') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x828),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x830),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x838),0);
  }
  else if (cVar1 == '\x01') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x828),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x830),1);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x838),0);
  }
  else if (cVar1 == '\x02') {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x828),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x830),0);
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x838),1);
  }
  return;
}

