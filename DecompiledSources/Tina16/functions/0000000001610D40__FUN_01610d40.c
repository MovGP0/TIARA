/* Ghidra address: 01610d40 */
/* Ghidra symbol: FUN_01610d40 */


undefined1 FUN_01610d40(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 local_c9;
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 local_5d;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_c9 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  local_b4 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar7 = (longlong *)FUN_00b94e60(param_1,local_b4);
      cVar2 = FUN_0198a580(plVar7);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        FUN_019af5f0(param_1,local_70);
        cVar2 = FUN_015f5c70(local_70[0],plVar7,0xffff,local_5c,&local_5d);
        if (((sVar3 == 0x39) && ((char)plVar7[0x34] == '\x01')) &&
           (*(longlong *)(plVar7[0x35] + 8) != 0)) {
          uVar8 = *(undefined8 *)(plVar7[0x35] + 8);
          FUN_019af5f0(param_1,&local_78);
          FUN_019af590(uVar8,local_78);
          cVar2 = FUN_01610d40(uVar8,param_2,param_3);
        }
        if (cVar2 != '\0') {
          cVar2 = FUN_01d3f210(plVar7);
          if (cVar2 != '\0') {
            lVar1 = *(longlong *)(plVar7[0x35] + 0x110);
            cVar2 = FUN_0160ee50(*(undefined8 *)(lVar1 + 0x18),&local_54);
            if (cVar2 != '\0') {
              uVar8 = FUN_010b2ee0(lVar1,local_54);
              plVar7 = (longlong *)FUN_010af3b0(uVar8);
              iVar4 = (**(code **)(*param_2 + 0x28))();
              iVar9 = 0;
              if (-1 < iVar4 + -1) {
                do {
                  (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar9);
                  (**(code **)(*param_3 + 0x18))(param_3,&local_40,iVar9);
                  FUN_00b8f030(local_40);
                  uVar5 = FUN_0040c840();
                  FUN_0043f750(&local_48,uVar5);
                  local_88 = local_38;
                  local_80 = 0x11;
                  FUN_00442f70(&local_50,L"#define %s",&local_88,0);
                  cVar2 = FUN_01b22620(plVar7,local_50,&local_58);
                  if (cVar2 != '\0') {
                    (**(code **)(*plVar7 + 0x18))(plVar7,&local_30,local_58);
                    FUN_0043e1a0(&local_90,local_30);
                    iVar6 = FUN_004170c0(local_38,local_90,1);
                    if (0 < iVar6) {
                      local_b0 = local_38;
                      local_a8 = 0x11;
                      local_a0 = local_48;
                      local_98 = 0x11;
                      FUN_00442f70(&local_30,L"#define %s %s",&local_b0,1);
                      (**(code **)(*plVar7 + 0x40))(plVar7,local_58,local_30);
                    }
                  }
                  iVar9 = iVar9 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
          }
          local_c9 = 1;
          break;
        }
      }
      local_b4 = local_b4 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_90);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_50,5);
  return local_c9;
}

