/* Ghidra address: 00d300c0 */
/* Ghidra symbol: FUN_00d300c0 */


undefined8 FUN_00d300c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  FUN_004144d0(param_1);
  uVar2 = FUN_00442b60(0x104);
  thunk_FUN_041a6fb0(param_2,param_3,&local_30);
  iVar1 = thunk_FUN_0413df99(local_30,uVar2);
  if (iVar1 != 0) {
    FUN_00415460(param_1,uVar2,0);
  }
  FUN_00442c30(uVar2);
  return param_1;
}

