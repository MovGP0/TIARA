/* Ghidra address: 016913a0 */
/* Ghidra symbol: FUN_016913a0 */


void FUN_016913a0(longlong param_1,undefined4 param_2)

{
  undefined1 local_118 [264];
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1c0);
    if (*(char *)(param_1 + 399) == '\0') {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined1 *)(param_1 + 400) = 0;
      *(undefined1 *)(param_1 + 0x1a8) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x180);
      *(undefined1 *)(param_1 + 400) = 1;
      *(undefined1 *)(param_1 + 0x1a8) = 0;
    }
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x154);
    *(undefined1 *)(param_1 + 0x174) = *(undefined1 *)(param_1 + 0x153);
    *(undefined1 *)(param_1 + 0x175) = *(undefined1 *)(param_1 + 0x152);
    *(undefined4 *)(param_1 + 0x178) = param_2;
    FUN_00416910(local_118,*(undefined8 *)(param_1 + 0x1c8),0xff);
    FUN_013b31e0(*(undefined8 *)(param_1 + 0x1d8),local_118,param_1 + 400,param_1 + 0x160);
  }
  return;
}

