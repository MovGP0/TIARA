/* Ghidra address: 0040dde0 */
/* Ghidra symbol: FUN_0040dde0 */


longlong FUN_0040dde0(longlong param_1,char *param_2,int param_3,int *param_4)

{
  char cVar1;
  char local_39 [9];
  
  if (*(char *)(param_1 + 0x2ea) == '\0') {
    *param_4 = 0;
    if (((*(short *)(param_1 + 8) == -0x284f) || (cVar1 = FUN_0040d3d0(param_1), cVar1 != '\0')) &&
       (0 < param_3)) {
      while( true ) {
        if (param_3 < 1) {
          return param_1;
        }
        cVar1 = FUN_0040d420(param_1,local_39);
        if (local_39[0] != '\0') {
          return param_1;
        }
        if (cVar1 == '\n') break;
        if (cVar1 == '\r') {
          cVar1 = FUN_0040d420(param_1,local_39);
          if (cVar1 == '\x1a') {
            return param_1;
          }
          if (cVar1 == '\n') {
            FUN_0040dcd0(param_1);
            return param_1;
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        }
        else {
          *param_2 = cVar1;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
          *param_4 = *param_4 + 1;
        }
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  else {
    param_1 = FUN_0040dcf0(param_1,param_2,param_3,param_4,*(undefined2 *)(param_1 + 0x2e8));
  }
  return param_1;
}

