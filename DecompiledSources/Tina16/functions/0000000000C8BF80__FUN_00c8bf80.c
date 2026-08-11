/* Ghidra address: 00c8bf80 */
/* Ghidra symbol: FUN_00c8bf80 */


void FUN_00c8bf80(longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 local_38 [24];
  
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30);
    FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(param_3 + 0x10));
  }
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x70))
            (*(longlong **)PTR_DAT_020050b0,local_38,param_2);
  FUN_00874eb0(local_38,param_1 + 8,param_3);
  if (*(int *)(param_1 + 0x30) <= param_3) {
    *(int *)(param_1 + 0x30) = param_3 + 0x10;
  }
  return;
}

