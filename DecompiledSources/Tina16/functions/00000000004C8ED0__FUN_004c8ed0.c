/* Ghidra address: 004c8ed0 */
/* Ghidra symbol: FUN_004c8ed0 */


void FUN_004c8ed0(longlong param_1,short param_2)

{
  short local_18 [4];
  undefined1 local_10;
  
  if (*(short *)(param_1 + 0x56) != param_2) {
    if (param_2 == 1) {
      FUN_004c8dd0(param_1,PTR_PTR_02003260);
    }
    else {
      if (param_2 != 2) {
        if ((ushort)(param_2 - 3U) < 2) {
          FUN_004c8dd0(param_1,PTR_PTR_02005850);
          return;
        }
        if (param_2 != 5) {
          local_10 = 9;
          local_18[0] = param_2;
          FUN_004c8e40(param_1,PTR_PTR_02004448,local_18,0);
          return;
        }
      }
      FUN_004c8dd0(param_1,PTR_DAT_02002910);
    }
  }
  return;
}

