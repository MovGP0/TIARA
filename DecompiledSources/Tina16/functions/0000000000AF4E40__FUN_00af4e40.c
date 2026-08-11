/* Ghidra address: 00af4e40 */
/* Ghidra symbol: FUN_00af4e40 */


void FUN_00af4e40(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_30;
  
  thunk_FUN_03cc0d62(&local_30);
  DAT_01e7f238 = 0;
  lVar1 = param_1[0xeb];
  local_30 = FUN_0064d3a0(param_1[0xe8],&local_30);
  while ((((((*(ushort *)(param_1 + 0x114) & 0x40) != 0 &&
            ((*(ushort *)(param_1 + 0x114) & 0x80) != 0)) &&
           ((local_30._4_4_ < 1 || (*(int *)((longlong)param_1 + 0x9c) < local_30._4_4_)))) ||
          (((*(ushort *)(param_1 + 0x114) & 0x100) != 0 &&
           (uVar2 = local_30._4_4_ - (int)param_1[0x12a], uVar4 = (int)uVar2 >> 0x1f,
           0x14 < (int)((uVar2 ^ uVar4) - uVar4))))) && (param_1[0x116] != 0))) {
    uVar2 = FUN_00427dd0();
    if (DAT_01e7f238 + 100U < uVar2) {
      DAT_01e7f238 = FUN_00427dd0();
      if ((*(ushort *)(param_1 + 0x114) & 0x80) == 0) {
        iVar5 = local_30._4_4_ - (int)param_1[0x12a];
        if (iVar5 < 1) {
          iVar5 = iVar5 + 0x10;
          FUN_0064e140(param_1[0xe8],0x2778);
        }
        else {
          iVar5 = iVar5 + -0x10;
          FUN_0064e140(param_1[0xe8],0x2779);
        }
        iVar5 = *(int *)(lVar1 + 0x494) + iVar5 / 4;
      }
      else if (local_30._4_4_ < -0xf) {
        iVar5 = *(int *)(lVar1 + 0x494) + (uint)*(ushort *)(lVar1 + 0x4a8) * -8;
      }
      else if (local_30._4_4_ < 1) {
        iVar5 = *(int *)(lVar1 + 0x494) - (uint)*(ushort *)(lVar1 + 0x4a8);
      }
      else if (*(int *)((longlong)param_1 + 0x9c) + 0xf < local_30._4_4_) {
        iVar5 = *(int *)(lVar1 + 0x494) + (uint)*(ushort *)(lVar1 + 0x4a8) * 8;
      }
      else {
        iVar5 = *(int *)(lVar1 + 0x494) + (uint)*(ushort *)(lVar1 + 0x4a8);
      }
      iVar3 = (int)param_1[0x121] - *(int *)(param_1[0xe8] + 0x9c);
      if (iVar5 < iVar3) {
        iVar3 = iVar5;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      FUN_00aa66b0(param_1[0x116],iVar3);
      FUN_00af26c0(param_1,iVar3);
      (**(code **)(*param_1 + 0x468))(param_1,local_30 & 0xffffffff,local_30._4_4_);
      (**(code **)(*(longlong *)param_1[0xe8] + 0x180))((longlong *)param_1[0xe8]);
      thunk_FUN_03cc0d62(&local_30);
      local_30 = FUN_0064d3a0(param_1[0xe8],&local_30);
    }
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) & 0xffbf;
  if ((*(ushort *)(param_1 + 0x114) & 0x100) != 0) {
    FUN_0064e140(param_1[0xe8],0x2777);
  }
  return;
}

