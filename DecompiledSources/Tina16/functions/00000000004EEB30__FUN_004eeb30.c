/* Ghidra address: 004eeb30 */
/* Ghidra symbol: FUN_004eeb30 */


undefined8 FUN_004eeb30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar4 = FUN_004ee830(param_1);
  if (iVar4 < 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = (longlong)iVar4;
    *(undefined4 *)(param_1[1] + lVar6 * 0x18) = 0xffffffff;
    uVar9 = *(undefined8 *)(param_1[1] + 0x10 + lVar6 * 0x18);
    uVar3 = *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x18);
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
      uVar7 = *(uint *)(param_1[1] + (longlong)iVar4 * 0x18);
      if (uVar7 == 0xffffffff) break;
      iVar8 = 0;
      if (param_1[1] != 0) {
        iVar8 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar7 = uVar7 & iVar8 - 1U;
      if (((((int)uVar7 <= iVar5) || (iVar4 < (int)uVar7)) &&
          ((iVar5 <= iVar4 || ((int)uVar7 <= iVar5)))) && ((iVar5 <= iVar4 || (iVar4 < (int)uVar7)))
         ) {
        puVar1 = (undefined8 *)(param_1[1] + (longlong)iVar5 * 0x18);
        puVar2 = (undefined8 *)(param_1[1] + (longlong)iVar4 * 0x18);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        *(undefined4 *)(param_1[1] + (longlong)iVar4 * 0x18) = 0xffffffff;
        iVar5 = iVar4;
      }
    }
    lVar6 = (longlong)iVar5;
    *(undefined4 *)(param_1[1] + lVar6 * 0x18) = 0xffffffff;
    *(undefined8 *)(param_1[1] + 8 + lVar6 * 0x18) = 0;
    *(undefined8 *)(param_1[1] + 0x10 + lVar6 * 0x18) = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar3,param_4);
    (**(code **)(*param_1 + 0x18))(param_1,uVar9,param_4);
  }
  return uVar9;
}

