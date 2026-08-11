/* Ghidra address: 0164e750 */
/* Ghidra symbol: FUN_0164e750 */


ulonglong FUN_0164e750(longlong param_1,longlong param_2,char param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_38 [2];
  
  uVar4 = 0;
  if ((byte)(param_3 - 8U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    if (*(char *)(param_1 + 0xc) == '\x02') {
      iVar3 = *(int *)(param_1 + 4);
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar2 = (longlong)iVar5;
          if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar2 * 0xc) == '\0') {
            FUN_017d1750(local_38,*(undefined8 *)(param_2 + 0x4c0),0,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 0xc),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar2 * 0xc));
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8) = local_38[0];
          }
          else {
            FUN_017d16e0(local_38,*(undefined8 *)(param_2 + 0x4c0),0,
                         *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 0xc));
            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8) = local_38[0];
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
          uVar4 = 0;
        } while (iVar3 != 0);
      }
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    FUN_004134c0(uVar1);
  }
  else {
    iVar3 = *(int *)(param_1 + 4);
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = (longlong)iVar5;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar2 * 0xc) == '\0') {
          uVar4 = lVar2 * 3;
          *(double *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8) =
               *(double *)
                (*(longlong *)(param_2 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 0xc) * 8) -
               *(double *)
                (*(longlong *)(param_2 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar2 * 0xc) * 8);
        }
        else {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar2 * 8) =
               *(undefined8 *)
                (*(longlong *)(param_2 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 0xc) * 8);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4 & 0xffffffff;
}

