/* Ghidra address: 01c7d0f0 */
/* Ghidra symbol: FUN_01c7d0f0 */


void FUN_01c7d0f0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1468) + 0x4ac);
  puVar1 = auStack_68;
  if (-1 < iVar3) {
    lVar5 = FUN_01c7d9d0(param_1);
    iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x28))(*(longlong **)(lVar5 + 0x10));
    puVar1 = local_30;
    if (iVar3 < iVar2) {
      local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b71b88,1,*(undefined8 *)PTR_DAT_02004030);
      lVar5 = FUN_01c7d9d0(param_1);
      uVar6 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x30))
                        (*(longlong **)(lVar5 + 0x10),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x1468) + 0x4ac));
      (**(code **)(*(longlong *)local_20[0xda] + 0x268))
                ((longlong *)local_20[0xda],
                 CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != 0) & 0xffffffff);
      lVar5 = FUN_01c7d9d0(param_1);
      (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x18))
                (*(longlong **)(lVar5 + 0x10),&local_38,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1468) + 0x4ac));
      FUN_0064de00(local_20[0xd8],local_38);
      iVar3 = (**(code **)(*local_20 + 0x2d0))(local_20);
      if (iVar3 == 1) {
        uVar6 = FUN_01c7d9d0(param_1);
        uVar4 = (**(code **)(*(longlong *)local_20[0xda] + 0x260))((longlong *)local_20[0xda]);
        FUN_012beae0(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x1468) + 0x4ac),uVar4);
        lVar5 = FUN_01c7d9d0(param_1);
        FUN_0064dd90(local_20[0xd8],&local_40);
        (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x40))
                  (*(longlong **)(lVar5 + 0x10),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x1468) + 0x4ac),local_40);
        FUN_01c7cf40(param_1);
      }
      FUN_00410f20(local_20);
      puVar1 = local_30;
    }
  }
  local_30 = puVar1;
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  return;
}

