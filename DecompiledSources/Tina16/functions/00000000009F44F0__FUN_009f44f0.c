/* Ghidra address: 009f44f0 */
/* Ghidra symbol: FUN_009f44f0 */


int FUN_009f44f0(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_3;
  while( true ) {
    if (pbVar1 <= param_1) {
      return 0;
    }
    if ((uint)*param_1 - (uint)*param_2 != 0) break;
    if (*param_1 == 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

