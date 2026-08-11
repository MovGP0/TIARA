/* Ghidra address: 01d3f310 */
/* Ghidra symbol: FUN_01d3f310 */


void FUN_01d3f310(int param_1,undefined4 *param_2)

{
  bool bVar1;
  
  *param_2 = 0xffffffff;
  if ((((param_1 == 0x467) || (param_1 == 0x468)) || (param_1 == 0x463)) ||
     (((param_1 == 0x469 || (param_1 == 0x46a)) || ((param_1 == 0x46b || (param_1 == 0x46c)))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_1 < 0x46a) {
      if (param_1 == 0x469) {
        *param_2 = 5;
      }
      else if (param_1 == 0x463) {
        *param_2 = 4;
      }
      else if (param_1 == 0x467) {
        *param_2 = 2;
      }
      else if (param_1 == 0x468) {
        *param_2 = 3;
      }
    }
    else if (param_1 == 0x46a) {
      *param_2 = 6;
    }
    else if (param_1 == 0x46b) {
      *param_2 = 7;
    }
    else if (param_1 == 0x46c) {
      *param_2 = 8;
    }
  }
  return;
}

