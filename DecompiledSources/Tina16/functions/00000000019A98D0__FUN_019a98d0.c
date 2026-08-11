/* Ghidra address: 019a98d0 */
/* Ghidra symbol: FUN_019a98d0 */


undefined8 *
FUN_019a98d0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_4;
  FUN_00414610(param_7);
  FUN_00414480(local_70);
  iVar10 = 0;
  bVar1 = false;
  iVar4 = FUN_019954e0(local_68);
  if (iVar4 < *(int *)(local_60 + 8)) {
    while ((iVar10 < *(int *)(local_68 + 0x10) && (!bVar1))) {
      uVar6 = FUN_0198d420(local_68,iVar10);
      cVar2 = FUN_0198a580(uVar6);
      if (cVar2 == '\x04') {
        plVar7 = (longlong *)FUN_0198d420(local_68,iVar10);
        sVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (sVar3 == 0x39) {
          lVar8 = FUN_0198d420(local_68,iVar10);
          lVar8 = *(longlong *)(lVar8 + 0x1a8);
          iVar4 = *(int *)(local_60 + 8);
          if ((iVar4 < *(int *)(lVar8 + 100)) ||
             (iVar5 = FUN_0176a490(lVar8), *(int *)(lVar8 + 100) + iVar5 <= iVar4)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            plVar7 = (longlong *)FUN_0198d420(local_68,iVar10);
            (**(code **)(*plVar7 + 0x288))(plVar7,local_30);
            local_98 = &DAT_019a9c5c;
            FUN_00416cd0(local_70,3,param_7,local_30[0]);
            lVar8 = FUN_0198d420(local_68,iVar10);
            if (*(char *)(*(longlong *)(lVar8 + 0x1a8) + 0x70) == '\x02') {
              lVar8 = FUN_0198d420(local_68,iVar10);
              FUN_019a9830(auStack_b8,&local_38,*(undefined8 *)(*(longlong *)(lVar8 + 0x1a8) + 0xe0)
                           ,*(undefined4 *)(local_60 + 8));
              FUN_00416ad0(local_70,local_38);
              puVar9 = (undefined8 *)FUN_019a6fe0(local_60,param_5);
              FUN_019a9590(local_78,&local_40,*local_70,*puVar9);
              FUN_00414ad0(param_6,local_40);
            }
            else {
              lVar8 = FUN_0198d420(local_68,iVar10);
              if ((*(char *)(*(longlong *)(lVar8 + 0x1a8) + 0x70) == '\x01') &&
                 (lVar8 = FUN_0198d420(local_68,iVar10),
                 *(longlong *)(*(longlong *)(lVar8 + 0x1a8) + 8) != 0)) {
                lVar8 = FUN_0198d420(local_68,iVar10);
                local_98 = (undefined *)CONCAT44(local_98._4_4_,param_5);
                local_90 = param_6;
                local_88 = *local_70;
                FUN_019a98d0(local_78,&local_48,*(undefined8 *)(*(longlong *)(lVar8 + 0x1a8) + 8),
                             local_60);
                FUN_00414ad0(local_70,local_48);
              }
              else {
                uVar6 = FUN_019a6fe0(local_60,param_5);
                FUN_019a7240(local_78,local_70,uVar6);
                puVar9 = (undefined8 *)FUN_019a6fe0(local_60,param_5);
                FUN_019a7350(local_78,&local_50,*puVar9);
                FUN_00414ad0(param_6,local_50);
              }
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
    }
  }
  else {
    uVar6 = FUN_019a6fe0(local_60,param_5);
    FUN_019a7240(local_78,local_70,uVar6);
    puVar9 = (undefined8 *)FUN_019a6fe0(local_60,param_5);
    FUN_019a7350(local_78,&local_58,*puVar9);
    FUN_00414ad0(param_6,local_58);
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(&param_7);
  return local_70;
}

