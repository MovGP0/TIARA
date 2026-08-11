/* Ghidra address: 0162d8a0 */
/* Ghidra symbol: FUN_0162d8a0 */


void FUN_0162d8a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  double local_50;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_70 = 0;
  local_78 = 0;
  local_60[0] = 0;
  local_68 = 0;
  FUN_0162dce0(param_1,param_2);
  cVar2 = FUN_01613aa0(*(undefined8 *)(param_1 + 0x128),&DAT_0162dab8,local_40);
  if (cVar2 == '\0') {
    FUN_01613110(L"Pwl: N parameter not found");
  }
  iVar3 = FUN_0040c840(local_40[0]);
  cVar2 = FUN_01613aa0(*(undefined8 *)(param_1 + 0x128),L"repeatfrom",local_40);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0040c840(local_40[0]);
  }
  *(int *)(param_1 + 0x98) = iVar3;
  uVar5 = FUN_00409570((longlong)(iVar3 << 4));
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  dVar7 = 0.0;
  iVar6 = 1;
  if (0 < iVar3) {
    do {
      FUN_0043f750(&local_68,iVar6 + -1);
      FUN_00416ba0(local_60,&PTR_s_tem_Generics_Collections_0162db30,local_68);
      cVar2 = FUN_01613aa0(*(undefined8 *)(param_1 + 0x128),local_60[0],&local_50);
      if (cVar2 == '\0') {
        FUN_01613110(L"Pwl: rTi parameter not found");
      }
      FUN_0043f750(&local_78,iVar6 + -1);
      FUN_00416ba0(&local_70,&DAT_0162db8c,local_78);
      cVar2 = FUN_01613aa0(*(undefined8 *)(param_1 + 0x128),local_70,&local_48);
      if (cVar2 == '\0') {
        FUN_01613110(L"Pwl: rVi parameter not found");
      }
      dVar7 = dVar7 + local_50;
      lVar1 = *(longlong *)(param_1 + 0xa0);
      *(double *)(lVar1 + -0x10 + (longlong)iVar6 * 0x10) = dVar7;
      *(undefined8 *)(lVar1 + -8 + (longlong)iVar6 * 0x10) = local_48;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_78,4);
  return;
}

