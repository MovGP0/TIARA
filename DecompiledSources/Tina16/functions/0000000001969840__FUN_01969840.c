/* Ghidra address: 01969840 */
/* Ghidra symbol: FUN_01969840 */


void FUN_01969840(longlong param_1,longlong *param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_01967ea0(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_005fcd80(param_2[0xe],L"Tahoma");
  uVar1 = FUN_0040c770(param_4 * 8.0);
  FUN_005fce30(param_2[0xe],uVar1);
  FUN_005fc860(param_2[0xe],0);
  FUN_005fce70(param_2[0xe],0);
  if ((*(longlong *)(param_1 + 0x240) != 0) && (*(double *)(param_1 + 0x1f8) != 0.0)) {
    iVar2 = FUN_005fdff0(param_2,*(undefined8 *)(param_1 + 0x240));
    uVar1 = FUN_0040c770((*(double *)(param_1 + 0xa8) * param_3 - (double)iVar2) - 3.0);
    iVar2 = FUN_0040c770((*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x1f8)) * param_4);
    (**(code **)(*param_2 + 0x120))(param_2,uVar1,iVar2 + 3,*(undefined8 *)(param_1 + 0x240));
  }
  return;
}

