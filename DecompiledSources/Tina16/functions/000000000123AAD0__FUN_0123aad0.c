/* Ghidra address: 0123aad0 */
/* Ghidra symbol: FUN_0123aad0 */


void FUN_0123aad0(undefined8 *param_1,short param_2)

{
  FUN_0040d200(param_1,0x1fd8,0);
  *(short *)((longlong)param_1 + 0x1fa4) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x1fa6) = 0x42;
  *(undefined2 *)(param_1 + 0x3f5) = 0x41;
  param_1[9] = 0x3ff0000000000000;
  if (param_2 == 0x4c) {
    *param_1 = DAT_01f2bc50;
    param_1[2] = DAT_01f2bc58;
    param_1[4] = DAT_01f2bc60;
    param_1[6] = DAT_01f2bc68;
  }
  else if (param_2 == 0x48) {
    *param_1 = DAT_01f2bc70;
    param_1[2] = DAT_01f2bc78;
    param_1[4] = DAT_01f2bc80;
    param_1[6] = DAT_01f2bc88;
  }
  else if (param_2 == 0x50) {
    param_1[2] = DAT_01f2bc98;
    param_1[3] = param_1[2];
    *param_1 = DAT_01f2bc90;
    param_1[6] = DAT_01f2bca0;
    param_1[4] = DAT_01f2bca8;
    param_1[5] = DAT_01f2bcb0;
    param_1[7] = DAT_01f2bcb8;
  }
  else if (param_2 == 0x53) {
    param_1[2] = DAT_01f2bcc8;
    *param_1 = DAT_01f2bcc0;
    param_1[1] = *param_1;
    param_1[6] = DAT_01f2bcd0;
    param_1[4] = DAT_01f2bcd8;
    param_1[5] = DAT_01f2bce0;
    param_1[7] = DAT_01f2bce8;
  }
  return;
}

