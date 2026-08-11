/* Ghidra address: 01a917c0 */
/* Ghidra symbol: FUN_01a917c0 */


undefined4 FUN_01a917c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar4 = FUN_01a914d0(param_1);
  if (iVar4 < 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = (longlong)iVar4;
    *(undefined4 *)(param_1[1] + lVar6 * 0xc) = 0xffffffff;
    uVar9 = *(undefined4 *)(param_1[1] + 8 + lVar6 * 0xc);
    uVar3 = *(undefined4 *)(param_1[1] + 4 + lVar6 * 0xc);
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
      uVar7 = *(uint *)(param_1[1] + (longlong)iVar4 * 0xc);
      if (uVar7 == 0xffffffff) break;
      iVar8 = 0;
      if (param_1[1] != 0) {
        iVar8 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar7 = uVar7 & iVar8 - 1U;
      if (((((int)uVar7 <= iVar5) || (iVar4 < (int)uVar7)) &&
          ((iVar5 <= iVar4 || ((int)uVar7 <= iVar5)))) && ((iVar5 <= iVar4 || (iVar4 < (int)uVar7)))
         ) {
        puVar1 = (undefined8 *)(param_1[1] + (longlong)iVar5 * 0xc);
        puVar2 = (undefined8 *)(param_1[1] + (longlong)iVar4 * 0xc);
        *puVar1 = *puVar2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
        *(undefined4 *)(param_1[1] + (longlong)iVar4 * 0xc) = 0xffffffff;
        iVar5 = iVar4;
      }
    }
    lVar6 = (longlong)iVar5;
    *(undefined4 *)(param_1[1] + lVar6 * 0xc) = 0xffffffff;
    *(undefined4 *)(param_1[1] + 4 + lVar6 * 0xc) = 0;
    *(undefined4 *)(param_1[1] + 8 + lVar6 * 0xc) = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar3,param_4);
    (**(code **)(*param_1 + 0x18))(param_1,uVar9,param_4);
  }
  return uVar9;
}

