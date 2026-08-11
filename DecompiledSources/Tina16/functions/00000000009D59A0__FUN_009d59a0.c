/* Ghidra address: 009d59a0 */
/* Ghidra symbol: FUN_009d59a0 */


undefined4 FUN_009d59a0(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x168))(*(longlong **)(param_1 + 0x18));
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      *param_2 = 7;
    }
    else if (bVar1 < 4) {
      if (bVar1 == 3) {
        *param_2 = 3;
      }
      else if (bVar1 == 0) {
        *param_2 = 0;
      }
      else if (bVar1 == 1) {
        *param_2 = 1;
      }
      else if (bVar1 == 2) {
        *param_2 = 2;
      }
    }
    else if (bVar1 == 4) {
      *param_2 = 4;
    }
    else if (bVar1 == 5) {
      *param_2 = 5;
    }
  }
  else if (bVar1 < 10) {
    if (bVar1 == 9) {
      *param_2 = 0xb;
    }
    else if (bVar1 == 7) {
      *param_2 = 8;
    }
    else if (bVar1 == 8) {
      *param_2 = 9;
    }
  }
  else if (bVar1 == 10) {
    *param_2 = 10;
  }
  else if (bVar1 == 0xb) {
    *param_2 = 2;
  }
  return 0;
}

