/* Ghidra address: 01b50510 */
/* Ghidra symbol: FUN_01b50510 */


void FUN_01b50510(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60 [6];
  
  local_60[0] = 0;
  local_68 = 0;
  FUN_00414480(local_60);
  dVar6 = (double)FUN_01b50450(*(undefined8 *)(param_1 + 0x14a8));
  FUN_00b8fd60(local_60,dVar6,*PTR_DAT_02005310,0,1);
  if (*(longlong *)PTR_DAT_02003118 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02003118);
  }
  uVar8 = 0;
  uVar2 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,8,0,0);
  *(undefined8 *)PTR_DAT_02003118 = uVar2;
  FUN_01cc6020(*(undefined8 *)PTR_DAT_02003118);
  FUN_01cc2930(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),0,0,1,uVar8 & 0xffffffffffffff00,0
               ,1,0);
  iVar5 = *(int *)(param_1 + 0x1490);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01cc5240(*(undefined8 *)PTR_DAT_02003118,
                   *(double *)(*(longlong *)(param_1 + 0x1480) + (longlong)iVar3 * 0x10) / dVar6);
      for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x149c); iVar4 = iVar4 + 1) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1480) + 8 + (longlong)iVar3 * 0x10) +
                 (longlong)iVar4 * 0x10);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        uVar2 = FUN_00c44590(&local_78);
        uVar7 = FUN_00c445d0(&local_78);
        FUN_01cc5550(*(undefined8 *)PTR_DAT_02003118,uVar2,uVar7);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x1478);
  if (iVar5 == 1) {
    iVar5 = 2;
  }
  FUN_013dd1c0(*(undefined8 *)PTR_DAT_02003118,local_60[0],iVar5,0);
  FUN_00414560(&local_68,2);
  return;
}

