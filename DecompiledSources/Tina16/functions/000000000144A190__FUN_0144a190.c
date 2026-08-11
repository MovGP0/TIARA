/* Ghidra address: 0144a190 */
/* Ghidra symbol: FUN_0144a190 */


void FUN_0144a190(longlong *param_1,undefined8 *param_2,double *param_3,undefined8 param_4)

{
  int iVar1;
  double local_68;
  double local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  *param_3 = 0.0;
  param_3[1] = 0.0;
  for (iVar1 = 0; iVar1 <= (int)param_1[1]; iVar1 = iVar1 + 1) {
    FUN_01449630(&local_48,iVar1,local_58,param_4);
    FUN_01449560(*param_1 + (longlong)iVar1 * 0x10,local_58,&local_68,param_4);
    *param_3 = *param_3 + local_68;
    param_3[1] = param_3[1] + local_60;
  }
  return;
}

