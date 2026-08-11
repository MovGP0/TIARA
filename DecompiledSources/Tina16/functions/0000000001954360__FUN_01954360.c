/* Ghidra address: 01954360 */
/* Ghidra symbol: FUN_01954360 */


void FUN_01954360(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_68 [80];
  
  if (((*(longlong *)(param_1 + 0xe8) == 0) || (cVar1 = FUN_01953ba0(param_1), cVar1 == '\0')) &&
     (param_4 == '\0')) {
    return;
  }
  FUN_005fd670(*(undefined8 *)(param_2 + 0x78),0);
  FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),1);
  FUN_005fd640(*(undefined8 *)(param_2 + 0x78),0xe);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xffffff);
  dVar2 = (double)FUN_019508b0(param_1);
  dVar2 = dVar2 + *(double *)(param_1 + 0xa8) / 2.0;
  dVar3 = (double)FUN_01950860(param_1);
  dVar3 = dVar3 + *(double *)(param_1 + 0xb0) / 2.0;
  uVar4 = FUN_019508b0(param_1);
  uVar5 = FUN_01950860(param_1);
  FUN_019541e0(auStack_68,uVar4,uVar5);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01928b78);
  if (cVar1 == '\0') {
    dVar6 = (double)FUN_019508b0(param_1);
    uVar4 = FUN_01950860(param_1);
    FUN_019541e0(auStack_68,dVar6 + *(double *)(param_1 + 0xa8),uVar4);
    uVar4 = FUN_019508b0(param_1);
    dVar6 = (double)FUN_01950860(param_1);
    FUN_019541e0(auStack_68,uVar4,dVar6 + *(double *)(param_1 + 0xb0));
  }
  dVar6 = (double)FUN_019508b0(param_1);
  dVar7 = (double)FUN_01950860(param_1);
  FUN_019541e0(auStack_68,dVar6 + *(double *)(param_1 + 0xa8),dVar7 + *(double *)(param_1 + 0xb0));
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0xffffff);
  if ((param_4 != '\0') || (*(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) == 1)) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01928b78);
    if (cVar1 == '\0') {
      uVar4 = FUN_01950860(param_1);
      FUN_019541e0(auStack_68,dVar2,uVar4);
      dVar6 = (double)FUN_01950860(param_1);
      FUN_019541e0(auStack_68,dVar2,dVar6 + *(double *)(param_1 + 0xb0));
      uVar4 = FUN_019508b0(param_1);
      FUN_019541e0(auStack_68,uVar4,dVar3);
      dVar2 = (double)FUN_019508b0(param_1);
      FUN_019541e0(auStack_68,dVar2 + *(double *)(param_1 + 0xa8),dVar3);
    }
  }
  FUN_005fd640(*(undefined8 *)(param_2 + 0x78),4);
  return;
}

