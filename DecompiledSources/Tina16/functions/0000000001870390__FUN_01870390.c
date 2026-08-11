/* Ghidra address: 01870390 */
/* Ghidra symbol: FUN_01870390 */


void FUN_01870390(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar6 = FUN_0180bfb0();
    uVar6 = FUN_01809e30(uVar6);
    dVar7 = (double)FUN_019508b0(lVar1);
    uVar2 = FUN_0040c770(((dVar7 + *(double *)(lVar1 + 0xa8)) * *(double *)(param_1 + 0x48)) / 2.0);
    dVar7 = (double)FUN_01950860(lVar1);
    uVar3 = FUN_0040c770((dVar7 - *(double *)(lVar1 + 0x1f8)) * *(double *)(param_1 + 0x48));
    FUN_007d6c70(uVar6,param_2,uVar2,uVar3,0x70,1);
    uVar6 = FUN_005ffa40(param_2);
    dVar7 = (double)FUN_019508b0(lVar1);
    uVar2 = FUN_0040c770(dVar7 * *(double *)(param_1 + 0x48));
    dVar7 = (double)FUN_01950860(lVar1);
    uVar3 = FUN_0040c770((dVar7 - *(double *)(lVar1 + 0x1f8)) * *(double *)(param_1 + 0x48));
    dVar7 = (double)FUN_019508b0(lVar1);
    uVar4 = FUN_0040c770((dVar7 + *(double *)(lVar1 + 0xa8)) * *(double *)(param_1 + 0x48));
    dVar7 = (double)FUN_01950860(lVar1);
    uVar5 = FUN_0040c770(dVar7 * *(double *)(param_1 + 0x48));
    FUN_0180c8f0(uVar6,uVar2,uVar3,uVar4,uVar5,0x808080);
  }
  return;
}

