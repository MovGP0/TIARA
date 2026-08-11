/* Ghidra address: 0164d870 */
/* Ghidra symbol: FUN_0164d870 */


undefined8
FUN_0164d870(longlong param_1,longlong param_2,longlong param_3,char param_4,longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int local_6c;
  undefined8 local_68 [3];
  longlong local_50 [5];
  
  (**(code **)(**(longlong **)(param_2 + 0x128) + 0x2d0))
            (*(longlong **)(param_2 + 0x128),0,local_50);
  lVar1 = *(longlong *)(local_50[0] + 0x38);
  if ((byte)(param_4 - 8U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)local_50[0] >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U)
            != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    iVar4 = *(int *)(lVar1 + 0x44);
    local_6c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar5 = (longlong)local_6c;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar5 * 0xc) == '\0') {
          FUN_017d1750(local_68,*(undefined8 *)(param_3 + 0x4c0),0,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 0xc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar5 * 0xc));
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) = local_68[0];
        }
        else {
          FUN_017d16e0(local_68,*(undefined8 *)(param_3 + 0x4c0),0,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar5 * 0xc));
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) = local_68[0];
        }
        local_6c = local_6c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_5 + 0x34) + -1;
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x44) + -1 < iVar4)) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
      FUN_004134c0(uVar2);
    }
    uVar2 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_5 + 0x34) + -1) * 8);
  }
  else if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    uVar2 = FUN_004134c0(uVar2);
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x44);
    lVar5 = 0;
    local_6c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = (longlong)local_6c;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar3 * 0xc) == '\0') {
          lVar5 = *(longlong *)(param_1 + 0x28);
          *(double *)(lVar5 + lVar3 * 8) =
               *(double *)
                (*(longlong *)(param_3 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8) -
               *(double *)
                (*(longlong *)(param_3 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar3 * 0xc) * 8);
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x28);
          *(undefined8 *)(lVar5 + lVar3 * 8) =
               *(undefined8 *)
                (*(longlong *)(param_3 + 0x118) +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar3 * 0xc) * 8);
        }
        local_6c = local_6c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_5 + 0x34) + -1;
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x44) + -1 < iVar4)) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)((ulonglong)lVar5 >> 8),1),0);
      FUN_004134c0(uVar2);
    }
    uVar2 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_5 + 0x34) + -1) * 8);
  }
  return uVar2;
}

