/* Ghidra address: 00f2c8c0 */
/* Ghidra symbol: FUN_00f2c8c0 */


undefined1 FUN_00f2c8c0(longlong *param_1)

{
  longlong lVar1;
  short local_28 [4];
  undefined1 local_20;
  longlong *local_10;
  
  lVar1 = param_1[1];
  local_10 = param_1 + 1;
  while (((ushort *)*local_10 < (ushort *)param_1[2] && (*(ushort *)*local_10 < 0x21))) {
    *local_10 = *local_10 + 2;
  }
  if ((short *)param_1[1] < (short *)param_1[2]) {
    local_28[0] = *(short *)param_1[1];
    if (local_28[0] == 0x2e) {
      if (lVar1 != *param_1) {
        FUN_00f2cd90(param_1);
      }
      else {
        FUN_00f2cc20(param_1,PTR_PTR_02001c50);
      }
    }
    else if (local_28[0] == 0x5b) {
      FUN_00f2cc80(param_1);
    }
    else if (lVar1 != *param_1) {
      local_20 = 9;
      FUN_00f2cc40(param_1,PTR_PTR_02005930,local_28,0);
    }
    else {
      FUN_00f2cd90(param_1);
    }
    param_1[1] = param_1[1] + 2;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 3;
  }
  return (char)param_1[5];
}

