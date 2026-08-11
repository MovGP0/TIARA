/* Ghidra address: 00f62650 */
/* Ghidra symbol: FUN_00f62650 */


undefined8 FUN_00f62650(undefined8 param_1,byte param_2)

{
  if (param_2 < 8) {
    if (param_2 == 7) {
      FUN_0041ddd0(param_1,PTR_PTR_020055a0);
    }
    else if (param_2 < 5) {
      if (param_2 == 4) {
        FUN_0041ddd0(param_1,PTR_PTR_02001628);
      }
      else if (param_2 == 1) {
        FUN_0041ddd0(param_1,PTR_PTR_02001280);
      }
      else if (param_2 == 2) {
        FUN_0041ddd0(param_1,PTR_PTR_02004a00);
      }
      else if (param_2 == 3) {
        FUN_0041ddd0(param_1,PTR_PTR_02003bf8);
      }
    }
    else if (param_2 == 5) {
      FUN_0041ddd0(param_1,PTR_PTR_020034d8);
    }
    else if (param_2 == 6) {
      FUN_0041ddd0(param_1,PTR_PTR_02003e40);
    }
  }
  else if (param_2 < 0xc) {
    if (param_2 == 0xb) {
      FUN_0041ddd0(param_1,PTR_PTR_02005410);
    }
    else if (param_2 == 8) {
      FUN_0041ddd0(param_1,PTR_PTR_020044f8);
    }
    else if (param_2 == 9) {
      FUN_0041ddd0(param_1,PTR_PTR_020033b0);
    }
  }
  else if (param_2 == 0xc) {
    FUN_0041ddd0(param_1,PTR_PTR_02002980);
  }
  else if (param_2 == 0xd) {
    FUN_0041ddd0(param_1,PTR_PTR_02002338);
  }
  return param_1;
}

