/* Ghidra address: 00f7f8e0 */
/* Ghidra symbol: FUN_00f7f8e0 */


undefined8 * FUN_00f7f8e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_44;
  undefined1 local_34 [4];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar4 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
  do {
    FUN_00416780(local_30,*(undefined2 *)(param_1 + 0x38));
    uVar3 = FUN_0040e860(local_30[0],local_34);
    FUN_00dae910(lVar4,uVar3);
    FUN_00f7f400(param_1);
    cVar2 = FUN_01b215f0(*(undefined2 *)(param_1 + 0x38));
  } while (cVar2 != '\0');
  iVar1 = *(int *)(lVar4 + 0x10);
  lVar5 = FUN_004095c0((longlong)(iVar1 * 4));
  iVar7 = *(int *)(lVar4 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar3 = FUN_00dae940(lVar4,iVar6);
      *(undefined4 *)(lVar5 + -4 + (longlong)(iVar6 + 1) * 4) = uVar3;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(lVar4);
  *param_2 = CONCAT44(uStack_44,iVar1);
  param_2[1] = lVar5;
  FUN_00414480(local_30);
  return param_2;
}

