/* Ghidra address: 0088f280 */
/* Ghidra symbol: FUN_0088f280 */


int FUN_0088f280(int param_1)

{
  if (param_1 < 7) {
    if (param_1 == 6) {
      param_1 = 8;
    }
    else if (param_1 < 4) {
      if (param_1 == 3) {
        param_1 = 0x2726;
      }
      else if (param_1 == 1) {
        param_1 = 0;
      }
      else if (param_1 == 2) {
        param_1 = 0x2afa;
      }
    }
    else if (param_1 == 4) {
      param_1 = 0x2afb;
    }
    else if (param_1 == 5) {
      param_1 = 0x273f;
    }
  }
  else if (param_1 < 10) {
    if (param_1 == 9) {
      param_1 = 0x277d;
    }
    else if (param_1 == 7) {
      param_1 = 0x2afc;
    }
    else if (param_1 == 8) {
      param_1 = 0x2af9;
    }
  }
  else if (param_1 == 10) {
    param_1 = 0x273c;
  }
  else if (param_1 == 0xb) {
    param_1 = 0;
    FUN_00874a00();
  }
  return param_1;
}

