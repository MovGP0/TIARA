/* Ghidra address: 017d7160 */
/* Ghidra symbol: FUN_017d7160 */


uint FUN_017d7160(char param_1,uint param_2)

{
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else if (param_2 == 8) {
        param_2 = 5;
      }
      else if (param_2 == 0x65) {
        param_2 = 7;
      }
      else if (param_2 == 0x66) {
        param_2 = 3;
      }
      else {
        param_2 = 6;
      }
    }
    else if (param_1 == '\x02') {
      if (param_2 < 0x80000000) {
        if (param_2 == 0) {
          return 0;
        }
        if (param_2 == 1) {
          return 3;
        }
      }
      else {
        if (param_2 == 0xffffffff) {
          return 3;
        }
        if (param_2 == 0xfffffffc) {
          return 4;
        }
        if (param_2 == 0xfffffffd) {
          return 7;
        }
        if (param_2 == 0xfffffffe) {
          return 5;
        }
      }
      param_2 = 6;
    }
  }
  return param_2;
}

