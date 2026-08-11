/* Ghidra address: 01bb3de0 */
/* Ghidra symbol: FUN_01bb3de0 */


void FUN_01bb3de0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x738));
  *param_2 = dVar1;
  dVar1 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x740));
  *param_3 = dVar1;
  if (*PTR_DAT_020033c0 == '\x01') {
    *param_2 = *param_2 * 1000.0;
    *param_3 = *param_3 * 1000.0;
  }
  else {
    *param_2 = *param_2 * 39.37007874015748;
    *param_3 = *param_3 * 39.37007874015748;
  }
  return;
}

