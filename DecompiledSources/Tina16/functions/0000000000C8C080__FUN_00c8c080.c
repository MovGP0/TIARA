/* Ghidra address: 00c8c080 */
/* Ghidra symbol: FUN_00c8c080 */


void FUN_00c8c080(longlong param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30);
    FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(param_3 + 4));
  }
  uVar1 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x60))
                    (*(longlong **)PTR_DAT_020050b0,param_2);
  FUN_00874e90(uVar1,param_1 + 8,param_3);
  if (*(int *)(param_1 + 0x30) <= param_3) {
    *(int *)(param_1 + 0x30) = param_3 + 4;
  }
  return;
}

