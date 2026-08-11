/* Ghidra address: 0060c600 */
/* Ghidra symbol: FUN_0060c600 */


undefined8 FUN_0060c600(undefined8 param_1,uint *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_4;
  if (param_4 - 1U < 0x80000000) {
    do {
      iVar2 = param_4;
      if (param_4 - 1U < 0x80000000) {
        do {
          if ((*param_2 & 0xff000000) != 0) {
            return 1;
          }
          param_2 = param_2 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

