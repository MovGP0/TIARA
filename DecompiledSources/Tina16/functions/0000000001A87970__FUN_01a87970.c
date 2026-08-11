/* Ghidra address: 01a87970 */
/* Ghidra symbol: FUN_01a87970 */


void FUN_01a87970(longlong param_1,byte param_2,char param_3)

{
  *(uint *)(*(longlong *)(param_1 + 0x7a0) + 0x50) = (uint)param_2;
  if (param_3 != '\0') {
    FUN_00f069f0(L"Curve width",(uint)param_2);
  }
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9a8),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9b0),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9b8),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9c0),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9c8),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9d0),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x9d8),0);
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x9c0),1);
    }
    else if (param_2 == 0) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x9a8),1);
    }
    else if (param_2 == 1) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x9b0),1);
    }
    else if (param_2 == 2) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x9b8),1);
    }
  }
  else if (param_2 == 4) {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x9c8),1);
  }
  else if (param_2 == 5) {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x9d0),1);
  }
  else if (param_2 == 6) {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x9d8),1);
  }
  return;
}

