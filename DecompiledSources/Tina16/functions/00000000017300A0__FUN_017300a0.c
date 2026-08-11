/* Ghidra address: 017300a0 */
/* Ghidra symbol: FUN_017300a0 */


void FUN_017300a0(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  FUN_0040f590(param_1);
  FUN_00409900();
  uVar3 = FUN_0040f200(param_1,L"Missing Components");
  FUN_0040f590(uVar3);
  FUN_00409900();
  FUN_0040f590(param_1);
  FUN_00409900();
  local_30 = FUN_0172a2b0(&DAT_01728b68,1,*(undefined8 *)PTR_DAT_02001f18);
  iVar7 = (int)*(short *)PTR_DAT_02004a38;
  local_48 = 1;
  if (0 < iVar7) {
    do {
      iVar1 = local_48;
      puVar4 = (undefined2 *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_48);
      cVar2 = FUN_0172e0a0(*puVar4);
      if (cVar2 != '\0') {
        lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar1);
        uVar8 = (uint)*(byte *)(lVar5 + 0xb6);
        local_44 = 0;
        if (-1 < (int)(uVar8 - 1)) {
          do {
            iVar1 = local_48;
            lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_48);
            uVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                                 *(short *)(lVar5 + 0x9e) + (short)local_44);
            uVar6 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar1);
            FUN_01d3a7a0(*(undefined8 *)PTR_DAT_020036c8,local_40,local_48,
                         *(undefined8 *)PTR_DAT_02001f18);
            FUN_0172fcc0(auStack_68,uVar3,uVar6,local_40[0]);
            local_44 = local_44 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      local_48 = local_48 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(local_30);
  FUN_0040f590(param_1);
  FUN_00409900();
  FUN_00414480(local_40);
  return;
}

