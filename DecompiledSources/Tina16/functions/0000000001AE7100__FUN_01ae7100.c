/* Ghidra address: 01ae7100 */
/* Ghidra symbol: FUN_01ae7100 */


void FUN_01ae7100(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_21 = FUN_01acff30(param_1,&local_30);
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_010b59b8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00b90440(local_20[0xdc],0x4059000000000000);
  FUN_00b90440(local_20[0xdd],0x4059000000000000);
  FUN_010b68e0(local_20,1);
  local_40 = FUN_004aeac0(local_30,0);
  *(undefined4 *)(local_20 + 0xf3) = *(undefined4 *)(local_40 + 0x98);
  FUN_00c5a4c0(local_20[0xe0],(longlong)*(char *)(local_40 + 0xa0));
  *(undefined4 *)((longlong)local_20 + 0x79c) = *(undefined4 *)(local_40 + 0x9c);
  iVar2 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar2 == 1) {
    local_48 = (longlong *)FUN_004aeac0(local_30,0);
    local_50 = local_48 + 0x10;
    dVar3 = (double)FUN_00b90090(local_20[0xdc]);
    local_34 = FUN_0040c770(((double)((int)local_50[1] - (int)*local_50) * dVar3) / 100.0);
    local_34 = local_34 + (int)*local_50;
    dVar3 = (double)FUN_00b90090(local_20[0xdd]);
    local_38 = FUN_0040c770(((double)(*(int *)((longlong)local_50 + 0xc) -
                                     *(int *)((longlong)local_50 + 4)) * dVar3) / 100.0);
    local_38 = local_38 + *(int *)((longlong)local_50 + 4);
    (**(code **)(*local_48 + 0x120))
              (local_48,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    *(int *)(local_48 + 0x11) = local_34;
    *(int *)((longlong)local_48 + 0x8c) = local_38;
    *(int *)(local_48 + 0x13) = (int)local_20[0xf3];
    uVar1 = FUN_00c5a450(local_20[0xe0]);
    *(undefined1 *)(local_48 + 0x14) = uVar1;
    *(undefined4 *)((longlong)local_48 + 0x9c) = *(undefined4 *)((longlong)local_20 + 0x79c);
    (**(code **)(*local_48 + 0x128))
              (local_48,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_30);
  return;
}

