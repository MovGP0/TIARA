/* Ghidra address: 01b07f10 */
/* Ghidra symbol: FUN_01b07f10 */


undefined8
FUN_01b07f10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined4 param_5,char param_6)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  longlong local_res18 [2];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_88 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar9 = 1;
  do {
    if (*(int *)(param_1 + 0x2d8) < iVar9) {
      local_90 = 0;
      if (param_6 != '\0') {
        uVar8 = FUN_00b89270();
        FUN_00b8e520(uVar8,&local_60,0x20f);
        local_80 = local_res18[0];
        local_78 = 0x11;
        FUN_01b20020(&local_88,param_2,&LAB_01b08254);
        local_70 = local_88;
        local_68 = 0x11;
        FUN_00442f70(&local_58,local_60,&local_80,1);
        FUN_01b05000(local_58,0);
      }
LAB_01b081c8:
      FUN_00414480(&local_88);
      FUN_00414560(&local_60,7);
      FUN_00414480(local_res18);
      return local_90;
    }
    cVar2 = FUN_0198a580(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar9 * 8)
                          + 0x128));
    if (cVar2 == '\x04') {
      plVar1 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar9 * 8) + 0x128);
      lVar6 = FUN_017ff620(plVar1);
      lVar7 = FUN_017ff620(param_2);
      if (lVar6 == lVar7) {
        uVar4 = FUN_01d03160(plVar1);
        cVar2 = FUN_01b07ef0(param_4,param_5,uVar4);
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_38);
          FUN_01b07e40(local_30,local_38);
          if (local_30[0] == local_res18[0]) {
            bVar10 = true;
          }
          else if ((local_30[0] == 0) || (local_res18[0] == 0)) {
            bVar10 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_30[0],local_res18[0]);
            bVar10 = iVar5 == 0;
          }
          if (bVar10) {
            bVar10 = true;
          }
          else {
            sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
            if ((sVar3 == 6) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x22)) {
              (**(code **)(*plVar1 + 0x288))(plVar1,&local_50);
              FUN_00416ba0(&local_48,&DAT_01b08244,local_50);
              FUN_01b07e40(&local_40,local_48);
              if (local_40 == local_res18[0]) {
                bVar10 = true;
              }
              else if ((local_40 == 0) || (local_res18[0] == 0)) {
                bVar10 = false;
              }
              else {
                iVar5 = FUN_0043e420(local_40,local_res18[0]);
                bVar10 = iVar5 == 0;
              }
            }
            else {
              bVar10 = false;
            }
          }
          if (bVar10) {
            local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar9 * 8);
            goto LAB_01b081c8;
          }
        }
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

