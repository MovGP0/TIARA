/* Ghidra address: 0114d430 */
/* Ghidra symbol: FUN_0114d430 */


void FUN_0114d430(longlong param_1,double param_2,double param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  ulonglong uVar12;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_88 = 0;
  local_80 = 0;
  dVar8 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  uVar12 = 0;
  lVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,8,0,0);
  *(longlong *)(param_1 + 0x7c0) = lVar4;
  if (*(longlong *)(param_1 + 0x7b8) == 0) {
    puVar5 = (undefined8 *)FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,0);
    FUN_01cc3760(*(undefined8 *)(lVar4 + 8),*puVar5);
  }
  else {
    FUN_01cc37d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x7b8) + 8) + 8),&local_80);
    FUN_01cc3760(*(undefined8 *)(lVar4 + 8),local_80);
  }
  uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x7c0) + 8);
  FUN_01cc0ae0(*(undefined8 *)(param_1 + 0x7b0),&local_88);
  FUN_01cc2930(uVar10,local_88,0,1,uVar12 & 0xffffffffffffff00,0,
               *(undefined1 *)(*(longlong *)(param_1 + 0x7b0) + 0x3a),0);
  lVar4 = *(longlong *)(param_1 + 0x7c0);
  iVar1 = 1 << (*(byte *)(param_1 + 0x7c8) & 0x1f);
  iVar2 = FUN_0040c840(*(double *)(param_1 + 0x7d9) *
                       (*(double *)(param_1 + 0x7d1) - *(double *)(param_1 + 0x7c9)));
  iVar3 = FUN_0040c840((*(double *)(param_1 + 0x7e1) *
                        (*(double *)(param_1 + 0x7d1) - *(double *)(param_1 + 0x7c9)) - dVar8) + 1.0
                      );
  iVar3 = (iVar3 - iVar2) + 1;
  if (iVar1 / 2 < iVar3) {
    iVar3 = iVar1 / 2;
  }
  dVar11 = (*(double *)(param_1 + 0x7d1) - *(double *)(param_1 + 0x7c9)) / (double)iVar1;
  dVar8 = 1.0 / ((double)iVar1 * dVar11);
  *(double *)(lVar4 + 0x38) = param_3 * dVar8;
  *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(param_1 + 0x7e9);
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      iVar7 = iVar6 + iVar2;
      FUN_01cc5240(lVar4,(double)iVar7 * dVar8);
      if (PTR_DAT_02004010[0x81a] == '\0') {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar7 * 0x10);
        local_78 = *puVar5;
        uStack_70 = puVar5[1];
      }
      else {
        FUN_010bf090(param_4,((double)(iVar6 + iVar2) * 6.283185307179586) /
                             (double)(iVar1 * *(int *)PTR_DAT_020056c0),&local_78);
        FUN_00c44790(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar7 * 0x10,&local_78,&local_78);
      }
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x768) + 0x4a8);
      if (iVar7 == 0) {
        dVar9 = (double)FUN_00c44590(&local_78);
        uVar10 = FUN_00c445d0(&local_78);
        FUN_01cc52d0(lVar4,param_2 * dVar11 * dVar9,uVar10);
      }
      else if (iVar7 == 1) {
        dVar9 = (double)FUN_00c44590(&local_78);
        uVar10 = FUN_00c445d0(&local_78);
        FUN_01cc52d0(lVar4,(param_2 * dVar9) / (double)iVar1,uVar10);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_88,2);
  return;
}

