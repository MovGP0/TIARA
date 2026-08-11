/* Ghidra address: 01d007a0 */
/* Ghidra symbol: FUN_01d007a0 */


void FUN_01d007a0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint local_144;
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  iVar5 = FUN_01d01910(*(undefined8 *)(param_1 + 0x2f0));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x2f0) + 0xe8);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf4);
  local_144 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf8);
  uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xfa);
  if (local_144 <= uVar7) {
    iVar8 = (uVar7 - local_144) + 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168) + (longlong)(int)local_144 * 99;
      uVar6 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,3);
      *(undefined8 *)(lVar1 + 0x5b) = uVar6;
      plVar4 = *(longlong **)(lVar1 + 0x5b);
      (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x288))
                (*(longlong **)(param_1 + 0x2f0),&local_38);
      FUN_01d03640(*(undefined8 *)(param_1 + 0x2f0),&local_40,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416cd0(&local_30,3,local_38,&LAB_01d009ac,local_40);
      FUN_00416910(local_140,local_30,0xff);
      FUN_00415020((longlong)plVar4 + 0xfe,local_140,0x50);
      (**(code **)(*plVar4 + 0x208))
                (plVar4,0,(iVar3 + iVar5 + (uint)uVar2 + local_144) -
                          (uint)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xf8),0);
      local_144 = local_144 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

