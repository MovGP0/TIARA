/* Ghidra address: 00c8bc90 */
/* Ghidra symbol: FUN_00c8bc90 */


void FUN_00c8bc90(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  FUN_00878500(*(undefined8 *)(param_1 + 8),param_3,iVar1);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xc0))
            (*(longlong **)PTR_DAT_020050b0,&local_38,param_3);
  *param_3 = local_38;
  param_3[1] = uStack_30;
  if (param_2 < 0) {
    FUN_00c8b3f0(param_1,0x10);
  }
  return;
}

