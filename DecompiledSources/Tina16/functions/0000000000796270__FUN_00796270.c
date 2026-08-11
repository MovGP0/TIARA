/* Ghidra address: 00796270 */
/* Ghidra symbol: FUN_00796270 */


undefined8 *
FUN_00796270(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = FUN_00795ed0(param_1,param_3,param_4);
  if (iVar2 < 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar4 = (longlong)iVar2;
    *(undefined4 *)(param_1[1] + lVar4 * 0x20) = 0xffffffff;
    puVar1 = (undefined8 *)(param_1[1] + 0x10 + lVar4 * 0x20);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    FUN_00414b50(local_30,*(undefined8 *)(param_1[1] + 8 + lVar4 * 0x20));
    iVar3 = iVar2;
    while( true ) {
      iVar2 = iVar2 + 1;
      lVar4 = 0;
      if (param_1[1] != 0) {
        lVar4 = *(longlong *)(param_1[1] + -8);
      }
      if (iVar2 == lVar4) {
        iVar2 = 0;
      }
      uVar5 = *(uint *)(param_1[1] + (longlong)iVar2 * 0x20);
      if (uVar5 == 0xffffffff) break;
      iVar6 = 0;
      if (param_1[1] != 0) {
        iVar6 = (int)*(undefined8 *)(param_1[1] + -8);
      }
      uVar5 = uVar5 & iVar6 - 1U;
      if (((((int)uVar5 <= iVar3) || (iVar2 < (int)uVar5)) &&
          ((iVar3 <= iVar2 || ((int)uVar5 <= iVar3)))) && ((iVar3 <= iVar2 || (iVar2 < (int)uVar5)))
         ) {
        FUN_00417c40(param_1[1] + (longlong)iVar3 * 0x20,param_1[1] + (longlong)iVar2 * 0x20,
                     &DAT_0076fec0);
        *(undefined4 *)(param_1[1] + (longlong)iVar2 * 0x20) = 0xffffffff;
        iVar3 = iVar2;
      }
    }
    lVar4 = (longlong)iVar3;
    *(undefined4 *)(param_1[1] + lVar4 * 0x20) = 0xffffffff;
    FUN_00414480(param_1[1] + 8 + lVar4 * 0x20);
    puVar1 = (undefined8 *)(param_1[1] + 0x10 + lVar4 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    (**(code **)(*param_1 + 0x10))(param_1,local_30[0],param_5);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_5);
  }
  FUN_00414480(local_30);
  return param_2;
}

