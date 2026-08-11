/* Ghidra address: 014d07a0 */
/* Ghidra symbol: FUN_014d07a0 */


void FUN_014d07a0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 double param_5,undefined8 param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  iVar2 = FUN_016ee690(param_1,param_3,0);
  iVar3 = FUN_016ee690(param_1,param_4,0);
  dVar7 = *(double *)(*(longlong *)(param_2 + 0x138) + (longlong)iVar2 * 8);
  dVar1 = *(double *)(*(longlong *)(param_2 + 0x138) + (longlong)iVar3 * 8);
  uVar4 = FUN_0040c850(param_6);
  uVar5 = FUN_0040c850(param_5);
  uVar6 = FUN_0040c850((dVar7 - dVar1) - param_5);
  dVar7 = (double)FUN_00b90630(uVar4,uVar5,uVar6);
  FUN_016ede00(param_1,param_2,iVar2,iVar3,param_5,
               dVar7 * *(double *)(param_2 + 0x6c0) + *(double *)(param_2 + 0x6b8));
  return;
}

