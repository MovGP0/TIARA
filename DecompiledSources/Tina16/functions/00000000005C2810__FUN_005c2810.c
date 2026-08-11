/* Ghidra address: 005c2810 */
/* Ghidra symbol: FUN_005c2810 */


undefined8 *
FUN_005c2810(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  iVar2 = FUN_005c2340(param_1,param_3,param_4);
  if (iVar2 < 0) {
    FUN_00417740(param_2,&DAT_005bc4e0);
    puVar8 = param_2;
    for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    lVar5 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar5 * 0x38) = 0xffffffff;
    FUN_00417c40(param_2,param_1[1] + 8 + lVar5 * 0x38,&DAT_005bc4e0);
    uVar1 = *(undefined2 *)(param_1[1] + 4 + lVar5 * 0x38);
    iVar3 = iVar2;
    while( true ) {
      iVar2 = iVar2 + 1;
      lVar5 = 0;
      if (param_1[1] != 0) {
        lVar5 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar2 == lVar5) {
        iVar2 = 0;
      }
      uVar4 = *(uint *)(param_1[1] + (longlong)iVar2 * 0x38);
      if (uVar4 == 0xffffffff) break;
      iVar6 = 0;
      if (param_1[1] != 0) {
        iVar6 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar4 = uVar4 & iVar6 - 1U;
      if (((((int)uVar4 <= iVar3) || (iVar2 < (int)uVar4)) &&
          ((iVar3 <= iVar2 || ((int)uVar4 <= iVar3)))) && ((iVar3 <= iVar2 || (iVar2 < (int)uVar4)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar3 * 0x38,param_1[1] + (longlong)iVar2 * 0x38,
                     &DAT_005bcf40);
        *(undefined4 *)(param_1[1] + (longlong)iVar2 * 0x38) = 0xffffffff;
        iVar3 = iVar2;
      }
    }
    lVar7 = (longlong)iVar3;
    *(undefined4 *)(param_1[1] + lVar7 * 0x38) = 0xffffffff;
    *(undefined2 *)(param_1[1] + 4 + lVar7 * 0x38) = 0;
    FUN_00417740(param_1[1] + 8 + lVar7 * 0x38,&DAT_005bc4e0);
    puVar8 = (undefined8 *)(param_1[1] + 8 + lVar7 * 0x38);
    for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar1,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_5);
  }
  return param_2;
}

