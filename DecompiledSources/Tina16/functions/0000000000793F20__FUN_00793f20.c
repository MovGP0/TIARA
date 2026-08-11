/* Ghidra address: 00793f20 */
/* Ghidra symbol: FUN_00793f20 */


undefined8 *
FUN_00793f20(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = FUN_00793bb0(param_1,param_3,param_4);
  if (iVar4 < 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    lVar6 = (longlong)iVar4;
    *(undefined4 *)(param_1[1] + lVar6 * 0x28) = 0xffffffff;
    puVar2 = (undefined8 *)(param_1[1] + 0x10 + lVar6 * 0x28);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    uVar3 = *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x28);
    iVar5 = iVar4;
    while( true ) {
      iVar4 = iVar4 + 1;
      lVar6 = 0;
      if (param_1[1] != 0) {
        lVar6 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar4 == lVar6) {
        iVar4 = 0;
      }
      uVar7 = *(uint *)(param_1[1] + (longlong)iVar4 * 0x28);
      if (uVar7 == 0xffffffff) break;
      iVar8 = 0;
      if (param_1[1] != 0) {
        iVar8 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar7 = uVar7 & iVar8 - 1U;
      if (((((int)uVar7 <= iVar5) || (iVar4 < (int)uVar7)) &&
          ((iVar5 <= iVar4 || ((int)uVar7 <= iVar5)))) && ((iVar5 <= iVar4 || (iVar4 < (int)uVar7)))
         ) {
        puVar2 = (undefined8 *)(param_1[1] + (longlong)iVar5 * 0x28);
        puVar1 = (undefined8 *)(param_1[1] + (longlong)iVar4 * 0x28);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        puVar2[4] = puVar1[4];
        *(undefined4 *)(param_1[1] + (longlong)iVar4 * 0x28) = 0xffffffff;
        iVar5 = iVar4;
      }
    }
    lVar6 = (longlong)iVar5;
    *(undefined4 *)(param_1[1] + lVar6 * 0x28) = 0xffffffff;
    *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x28) = 0;
    puVar2 = (undefined8 *)(param_1[1] + 0x10 + lVar6 * 0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar3,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_5);
  }
  return param_2;
}

