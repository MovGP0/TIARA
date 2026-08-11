/* Ghidra address: 018bd8f0 */
/* Ghidra symbol: FUN_018bd8f0 */


undefined8 FUN_018bd8f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 local_48 [32];
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01927248);
  if (cVar1 == '\0') {
    dVar7 = (double)param_2[0x16];
  }
  else {
    dVar7 = 0.0;
    cVar1 = FUN_0195f670(param_2,3);
    if (cVar1 == '\0') {
      dVar7 = (double)(**(code **)(*param_2 + 800))(param_2);
    }
    if (dVar7 < (double)param_2[0x16]) {
      dVar7 = (double)param_2[0x16];
    }
  }
  dVar8 = (double)FUN_019508b0(param_2);
  iVar2 = FUN_0040c770(dVar8 * *(double *)(param_1 + 0xe8));
  dVar8 = (double)FUN_01950860(param_2);
  iVar3 = FUN_0040c770(dVar8 * *(double *)(param_1 + 0xf0));
  dVar8 = (double)FUN_019508b0(param_2);
  uVar4 = FUN_0040c770((dVar8 + (double)param_2[0x15]) * *(double *)(param_1 + 0xe8) + 20.0);
  dVar8 = (double)FUN_01950860(param_2);
  uVar5 = FUN_0040c770((dVar8 + dVar7) * *(double *)(param_1 + 0xf0) + 20.0);
  FUN_00498350(local_48,iVar2 + -0x14,iVar3 + -0x14,uVar4,uVar5);
  uVar4 = FUN_0040c770(*(undefined8 *)(param_1 + 0xf8));
  uVar5 = FUN_0040c770(*(undefined8 *)(param_1 + 0x100));
  FUN_00423b50(local_48,uVar4,uVar5);
  uVar6 = FUN_005ffa40(*(undefined8 *)(param_1 + 0xe0));
  iVar2 = thunk_FUN_04177e28(uVar6,local_48);
  if ((iVar2 == 0) &&
     (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xe0),&PTR_FUN_005f7f40), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

