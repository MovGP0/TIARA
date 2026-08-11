/* Ghidra address: 00452ab0 */
/* Ghidra symbol: FUN_00452ab0 */


longlong * FUN_00452ab0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0041ddd0(param_2,PTR_PTR_020025f8);
  iVar1 = FUN_00452c70(param_1,param_3);
  if (iVar1 != -1) {
    FUN_00452a70(param_1,param_2,iVar1);
  }
  if (*param_2 == 0) {
    FUN_0041ddd0(param_2,PTR_PTR_020025f8);
  }
  return param_2;
}

