/* Ghidra address: 01583b50 */
/* Ghidra symbol: FUN_01583b50 */


undefined8 *
FUN_01583b50(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar3 = FUN_01583710(param_1,param_3,param_4);
  if (iVar3 < 0) {
    FUN_00417740(param_2,&DAT_01577948);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar7 = (longlong)iVar3;
    *(undefined4 *)(param_1[1] + lVar7 * 0x18) = 0xffffffff;
    FUN_00417c40(param_2,param_1[1] + 8 + lVar7 * 0x18,&DAT_01577948);
    uVar2 = *(undefined1 *)(param_1[1] + 4 + lVar7 * 0x18);
    iVar4 = iVar3;
    while( true ) {
      iVar3 = iVar3 + 1;
      lVar7 = 0;
      if (param_1[1] != 0) {
        lVar7 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar3 == lVar7) {
        iVar3 = 0;
      }
      uVar5 = *(uint *)(param_1[1] + (longlong)iVar3 * 0x18);
      if (uVar5 == 0xffffffff) break;
      iVar6 = 0;
      if (param_1[1] != 0) {
        iVar6 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar5 = uVar5 & iVar6 - 1U;
      if (((((int)uVar5 <= iVar4) || (iVar3 < (int)uVar5)) &&
          ((iVar4 <= iVar3 || ((int)uVar5 <= iVar4)))) && ((iVar4 <= iVar3 || (iVar3 < (int)uVar5)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar4 * 0x18,param_1[1] + (longlong)iVar3 * 0x18,
                     &DAT_01578270);
        *(undefined4 *)(param_1[1] + (longlong)iVar3 * 0x18) = 0xffffffff;
        iVar4 = iVar3;
      }
    }
    lVar7 = (longlong)iVar4;
    *(undefined4 *)(param_1[1] + lVar7 * 0x18) = 0xffffffff;
    *(undefined1 *)(param_1[1] + 4 + lVar7 * 0x18) = 0;
    FUN_00417740(param_1[1] + 8 + lVar7 * 0x18,&DAT_01577948);
    puVar1 = (undefined8 *)(param_1[1] + 8 + lVar7 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,uVar2,param_5);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_5);
  }
  return param_2;
}

