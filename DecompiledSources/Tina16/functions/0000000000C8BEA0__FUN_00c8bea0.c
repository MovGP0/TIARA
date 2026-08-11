/* Ghidra address: 00c8bea0 */
/* Ghidra symbol: FUN_00c8bea0 */


void FUN_00c8bea0(longlong param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30);
    FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(param_3 + 2));
  }
  uVar1 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x58))
                    (*(longlong **)PTR_DAT_020050b0,param_2);
  FUN_00874e80(uVar1,param_1 + 8,param_3);
  if (*(int *)(param_1 + 0x30) <= param_3) {
    *(int *)(param_1 + 0x30) = param_3 + 2;
  }
  return;
}

