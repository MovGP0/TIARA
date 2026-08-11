/* Ghidra address: 00b5d680 */
/* Ghidra symbol: FUN_00b5d680 */


void FUN_00b5d680(longlong param_1,longlong param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined6 local_76;
  undefined2 uStack_70;
  ulonglong local_68;
  undefined2 uStack_60;
  ushort *local_50;
  longlong local_48;
  undefined8 local_40 [5];
  
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_76 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  iVar1 = FUN_00b24ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20));
  if ((int)(uint)param_3 < iVar1) {
    FUN_00b4da30(param_2,param_3);
    if ((uint)param_3 == *(uint *)(param_1 + 0x60)) {
      FUN_00414c70(&local_48,*(undefined8 *)(param_1 + 0x68));
    }
    else {
      iVar1 = FUN_00b4d170(param_2);
      if (-1 < iVar1) {
        iVar2 = FUN_00b1f850(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
        if (iVar1 < iVar2) {
          FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_68,iVar1);
          FUN_00b1c700(&local_48,local_68 & 0xffff);
          if (local_48 == 0) {
            FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_78,iVar1);
            FUN_00414be0(local_40,CONCAT26(uStack_70,local_76));
            iVar1 = FUN_00416420(local_40[0],0);
            if (iVar1 != 0) {
              FUN_00b1c810(&local_48,local_40[0]);
            }
          }
          *(uint *)(param_1 + 0x60) = (uint)param_3;
          FUN_00414bf0(param_1 + 0x68,local_48);
        }
      }
    }
    iVar1 = FUN_00415a60(local_48,&DAT_00b5d990);
    if (iVar1 == 0) {
      local_50 = (ushort *)(param_2 + 0x28);
      if (*local_50 < 0x20) {
        bVar3 = (1 << ((byte)*local_50 & 0x1f) & 0x1f407cU) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        dVar4 = (double)FUN_00448c80(0x76c,1,1);
        dVar5 = (double)FUN_00448c80(0x76c,3,1);
        dVar6 = (double)FUN_00464c60(param_2 + 0x28);
        dVar4 = (dVar4 + dVar6) - 1.0;
        if (dVar5 < dVar4) {
          dVar4 = dVar4 - 1.0;
        }
        FUN_004688a0(&local_90,dVar4);
        FUN_00b4f030(param_2,&local_90);
      }
    }
  }
  FUN_00460ba0(&local_90);
  FUN_00417740(&local_78,&DAT_00b1be28);
  FUN_00417740(&local_68,&DAT_00b1be28);
  FUN_004144d0(&local_48);
  FUN_00414520(local_40);
  return;
}

