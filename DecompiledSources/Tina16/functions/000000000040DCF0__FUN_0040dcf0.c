/* Ghidra address: 0040dcf0 */
/* Ghidra symbol: FUN_0040dcf0 */


longlong FUN_0040dcf0(longlong param_1,char *param_2,int param_3,int *param_4,short param_5)

{
  char cVar1;
  char local_39 [9];
  
  *param_4 = 0;
  if (((*(short *)(param_1 + 8) == -0x284f) || (cVar1 = FUN_0040d3d0(param_1), cVar1 != '\0')) &&
     (0 < param_3)) {
    if (param_5 == 0) {
      param_5 = DAT_02006a28;
    }
    do {
      while( true ) {
        if (param_3 < 1) {
          return param_1;
        }
        cVar1 = FUN_0040d560(param_1,local_39,param_5);
        if (local_39[0] != '\0') {
          return param_1;
        }
        if (cVar1 == '\n') {
          return param_1;
        }
        if (cVar1 == '\r') break;
        *param_2 = cVar1;
        FUN_0040d780(param_1);
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        *param_4 = *param_4 + 1;
      }
      FUN_0040d780(param_1);
      cVar1 = FUN_0040d560(param_1,local_39,param_5);
    } while (cVar1 != '\n');
    FUN_0040d780(param_1);
    FUN_0040dcd0(param_1);
  }
  return param_1;
}

