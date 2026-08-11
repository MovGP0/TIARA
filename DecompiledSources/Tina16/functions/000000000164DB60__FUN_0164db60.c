/* Ghidra address: 0164db60 */
/* Ghidra symbol: FUN_0164db60 */


void FUN_0164db60(char *param_1,longlong param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  undefined7 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 unaff_XMM7_Qa;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar7;
  longlong local_80 [5];
  double local_58;
  double local_50 [5];
  
  (**(code **)(**(longlong **)(param_2 + 0x128) + 0x2d0))
            (*(longlong **)(param_2 + 0x128),0,local_80);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  lVar1 = *(longlong *)(local_80[0] + 0x38);
  if ((byte)(param_4 - 8) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)local_80[0] >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U)
            != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    return;
  }
  iVar5 = *(int *)(lVar1 + 0x44);
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      lVar4 = (longlong)(iVar3 + -1);
      FUN_016ed220(param_2,*param_1 + (char)iVar3 + '\x01',
                   *(double *)(*(longlong *)(lVar1 + 0x38) + lVar4 * 8) * 1.0,0);
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
      *(double *)(lVar1 + 0x20) =
           *(double *)(lVar1 + 0x20) +
           *(double *)(*(longlong *)(lVar1 + 0x38) + lVar4 * 8) *
           *(double *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar2 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_1[0x6c] == '\0') {
    FUN_016ed320(param_2,*param_1 + '\x01',
                 (*(double *)(lVar1 + 0x18) - *(double *)(lVar1 + 0x20)) * 1.0,
                 *(undefined8 *)PTR_DAT_02003468,0);
  }
  else {
    if (param_1[0x6d] != '\0') {
      if (param_4 < 8) {
        bVar6 = ((int)CONCAT71(uVar2,1) << (param_4 & 0x1f) & 0xe0U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        uVar7 = 0;
        FUN_016ed460(param_2,*param_1 + '\x01',
                     (*(double *)(lVar1 + 0x18) - *(double *)(lVar1 + 0x20)) * 1.0 + local_50[0],
                     local_58 + *(double *)(param_3 + 0x430),*(undefined8 *)(param_3 + 0x3b8),0);
        goto LAB_0164dd72;
      }
    }
    FUN_016ed320(param_2,*param_1 + '\x01',
                 (*(double *)(lVar1 + 0x18) - *(double *)(lVar1 + 0x20)) * 1.0,
                 *(undefined8 *)(param_3 + 0x430),0);
  }
LAB_0164dd72:
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 1) * 8) =
       *(undefined8 *)(param_1 + 0x78);
  if ((param_1[0x6c] != '\0') && (param_1[0x6d] != '\0')) {
    if (param_4 < 8) {
      bVar6 = ((int)CONCAT71(uVar2,1) << (param_4 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 3) * 8)
           = unaff_XMM7_Qa;
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x9c) + 3) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 3) * 8);
      }
      if (param_4 == 6) {
        FUN_00dafac0(param_2,param_3,&local_58,local_50,*(undefined8 *)(param_3 + 0x3b8),
                     CONCAT44(uVar7,*(ushort *)(param_1 + 0x98) + 3),0,1);
      }
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        *(undefined8 *)
         (*(longlong *)(param_3 + 0x1c0) + (longlong)(*(int *)(param_1 + 0x9c) + 4) * 8) =
             *(undefined8 *)
              (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0x9c) + 4) * 8);
      }
    }
  }
  return;
}

