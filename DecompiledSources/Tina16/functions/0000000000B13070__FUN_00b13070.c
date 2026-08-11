/* Ghidra address: 00b13070 */
/* Ghidra symbol: FUN_00b13070 */


void FUN_00b13070(longlong *param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_004b5ad0(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1[0xf] + (longlong)param_2 * 8));
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (param_2 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_00409a70(param_1[0xf] + (longlong)(param_2 + 1) * 8,param_1[0xf] + (longlong)param_2 * 8,
                 (longlong)((iVar1 - param_2) * 8));
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  FUN_00419260(param_1 + 0xf,&DAT_00b0f928,1,(longlong)iVar1);
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

