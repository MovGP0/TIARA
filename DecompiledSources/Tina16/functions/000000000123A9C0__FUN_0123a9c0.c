/* Ghidra address: 0123a9c0 */
/* Ghidra symbol: FUN_0123a9c0 */


void FUN_0123a9c0(undefined8 *param_1,short param_2,undefined8 *param_3)

{
  FUN_0040d200(param_3,0x1fd8,0);
  *(short *)((longlong)param_3 + 0x1fa4) = param_2;
  *(undefined2 *)((longlong)param_3 + 0x1fa6) = 0x42;
  *(undefined2 *)(param_3 + 0x3f5) = 0x41;
  param_3[9] = 0x3ff0000000000000;
  if ((param_2 == 0x4c) && (*(short *)((longlong)param_1 + 0x1fa4) == 0x50)) {
    *param_3 = *param_1;
    param_3[2] = param_1[2];
    param_3[4] = param_1[5];
    param_3[6] = param_1[7];
  }
  else if ((param_2 == 0x48) && (*(short *)((longlong)param_1 + 0x1fa4) == 0x50)) {
    *param_3 = *param_1;
    param_3[2] = param_1[2];
    param_3[4] = param_1[4];
    param_3[6] = param_1[6];
  }
  else if ((param_2 == 0x4c) && (*(short *)((longlong)param_1 + 0x1fa4) == 0x53)) {
    *param_3 = *param_1;
    param_3[2] = param_1[2];
    param_3[4] = param_1[4];
    param_3[6] = param_1[6];
  }
  else if ((param_2 == 0x48) && (*(short *)((longlong)param_1 + 0x1fa4) == 0x53)) {
    *param_3 = *param_1;
    param_3[2] = param_1[2];
    param_3[4] = param_1[5];
    param_3[6] = param_1[7];
  }
  return;
}

