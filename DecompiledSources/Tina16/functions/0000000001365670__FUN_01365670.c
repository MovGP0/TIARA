/* Ghidra address: 01365670 */
/* Ghidra symbol: FUN_01365670 */


void FUN_01365670(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined8 *)FUN_017c04c0(0,&PTR_FUN_017c0190,param_3,0);
  FUN_00410f20(param_3);
  lVar2 = FUN_01365540(param_1,puVar1[0x5a]);
  uVar3 = (**(code **)*puVar1)(puVar1);
  FUN_00418590(uVar3,&DAT_017c0400);
  if (param_2 != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),iVar6);
        if (*plVar4 == param_2) {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),iVar6);
          FUN_00410f20(*(undefined8 *)(lVar5 + 8));
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xb8),iVar6);
          *(longlong *)(lVar5 + 8) = lVar2;
          return;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  plVar4 = (longlong *)FUN_004095c0(0x18);
  *plVar4 = param_2;
  plVar4[1] = lVar2;
  plVar4[2] = param_4;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),plVar4);
  return;
}

