/* Ghidra address: 00423190 */
/* Ghidra symbol: FUN_00423190 */


void FUN_00423190(uint *param_1)

{
  if ((int)param_1[3] < (int)param_1[1]) {
    param_1[1] = param_1[1] ^ param_1[3];
    param_1[3] = param_1[3] ^ param_1[1];
    param_1[1] = param_1[1] ^ param_1[3];
  }
  if ((int)param_1[2] < (int)*param_1) {
    *param_1 = *param_1 ^ param_1[2];
    param_1[2] = param_1[2] ^ *param_1;
    *param_1 = *param_1 ^ param_1[2];
  }
  return;
}

