/* Ghidra address: 01b35050 */
/* Ghidra symbol: FUN_01b35050 */


undefined8 FUN_01b35050(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong local_res10 [3];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [10];
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  puVar5 = local_80;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417a80(local_80,&DAT_00401390,9);
  FUN_00414480(&local_88);
  iVar6 = 0;
  if (local_res10[0] != 0) {
    iVar6 = *(int *)(local_res10[0] + -4);
  }
  iVar4 = 1;
  if (0 < iVar6) {
    do {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)iVar4 * 2);
      if ((uVar1 < 0x41) || (0x5a < uVar1)) {
        FUN_00416780(&local_90,uVar1);
        FUN_00416ad0(&local_88,local_90);
      }
      else {
        iVar7 = 8;
        puVar5 = local_80;
        do {
          FUN_00416780(&local_98,uVar1);
          iVar2 = FUN_00416db0(local_98,*puVar5);
          if (iVar2 == 0) {
            FUN_00416780(&local_a0,uVar1);
            FUN_00416ad0(&local_88,local_a0);
          }
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414ad0(param_1,local_88);
  FUN_00414560(&local_a0,4);
  FUN_00417840(local_80,&DAT_00401390,9);
  FUN_00414480(local_res10);
  return param_1;
}

