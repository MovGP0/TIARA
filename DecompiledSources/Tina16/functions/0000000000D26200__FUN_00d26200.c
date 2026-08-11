/* Ghidra address: 00d26200 */
/* Ghidra symbol: FUN_00d26200 */


void FUN_00d26200(undefined8 param_1,uint param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = 0xc;
  do {
    *param_3 = param_2;
    param_2 = param_2 * 2;
    if ((param_2 & 0x10000) != 0) {
      param_2 = param_2 ^ 0x11011;
    }
    param_3 = param_3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

