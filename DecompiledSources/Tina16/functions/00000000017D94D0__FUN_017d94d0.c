/* Ghidra address: 017d94d0 */
/* Ghidra symbol: FUN_017d94d0 */


undefined8 FUN_017d94d0(undefined8 param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong lStack_30;
  
  local_40 = *param_2;
  lStack_38 = param_2[1];
  lStack_30 = param_2[2];
  local_50 = *param_4;
  uStack_48 = param_4[1];
  pdVar1 = (double *)(local_40 + (longlong)param_3 * 0x18);
  FUN_00409a70(pdVar1,local_60,0x10);
  FUN_00c44500(local_60,&local_50,local_60);
  FUN_00409a70(local_60,pdVar1,0x10);
  if ((*pdVar1 == 0.0) && (pdVar1[1] == 0.0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

