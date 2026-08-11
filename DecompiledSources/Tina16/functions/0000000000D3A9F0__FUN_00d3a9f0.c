/* Ghidra address: 00d3a9f0 */
/* Ghidra symbol: FUN_00d3a9f0 */


longlong FUN_00d3a9f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  
  iVar8 = *(int *)(*(longlong *)PTR_DAT_02003db8 + 0x10);
  local_30 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)PTR_DAT_02003db8,local_30);
      lVar4 = (**(code **)(*plVar3 + 0x90))(plVar3);
      if (lVar4 == *(longlong *)(param_1 + 0x18)) {
        lVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02003db8,local_30);
        return *(longlong *)(lVar4 + 0x80);
      }
      lVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02003db8,local_30);
      lVar4 = FUN_00d3a840(auStack_58,*(undefined8 *)(lVar4 + 0x80));
      if (lVar4 != 0) {
        return lVar4;
      }
      local_30 = local_30 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  lVar4 = 0;
  iVar8 = FUN_00808090();
  local_30 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar5 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,local_30);
      iVar2 = FUN_004d3e30();
      local_2c = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar6 = FUN_004d3de0(uVar5,local_2c);
          cVar1 = FUN_004113d0(uVar6,&PTR_FUN_007d94d0);
          if (cVar1 == '\0') {
            uVar6 = FUN_004d3de0(uVar5,local_2c);
            cVar1 = FUN_004113d0(uVar6,&PTR_FUN_007ec210);
            if (cVar1 != '\0') {
              uVar6 = FUN_004d3de0(uVar5,local_2c);
              lVar4 = FUN_00d3a8e0(auStack_58,uVar6);
              goto joined_r0x00d3abbb;
            }
          }
          else {
            lVar4 = FUN_004d3de0(uVar5,local_2c);
            lVar7 = FUN_007de060(lVar4);
            if (lVar7 == *(longlong *)(param_1 + 0x18)) {
              iVar8 = FUN_00d3a7e0(auStack_58,lVar4);
              if (*(int *)(param_1 + 8) < iVar8) {
                return lVar4;
              }
              return 0;
            }
            lVar4 = FUN_00d3a840(auStack_58,lVar4);
joined_r0x00d3abbb:
            if (lVar4 != 0) {
              return lVar4;
            }
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_30 = local_30 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return lVar4;
}

