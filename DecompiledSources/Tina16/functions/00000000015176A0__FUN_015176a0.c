/* Ghidra address: 015176a0 */
/* Ghidra symbol: FUN_015176a0 */


void FUN_015176a0(undefined8 param_1,double *param_2)

{
  undefined1 local_9;
  
  if (*param_2 <= 1e-13 && *param_2 != 1e-13) {
    *param_2 = 1e-13;
  }
  if (100.0 < *param_2) {
    *param_2 = 100.0;
  }
  FUN_010c0d70(&local_9,param_2,0,0xfe,0x3f50624dd2f1a9fc);
  return;
}

