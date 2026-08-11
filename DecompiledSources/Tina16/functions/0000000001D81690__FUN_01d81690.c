/* Ghidra address: 01d81690 */
/* Ghidra symbol: FUN_01d81690 */


void FUN_01d81690(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  char local_21 [17];
  
  local_40 = auStack_68;
  local_21[0] = '\0';
  if (*(char *)((longlong)param_1 + 0xa5a) == '\0') {
    local_40 = auStack_68;
    FUN_0082a6c0(param_1[0xf8],1);
    FUN_016fea90(0x106,0x1582);
  }
  else if ((*(char *)((longlong)param_1 + 0x7ed) == '\0') ||
          (*(char *)((longlong)param_1 + 0xa6c) != '\0')) {
    cVar2 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
    if (cVar2 != '\0') {
      cVar2 = FUN_010e2d90(param_1);
      if ((cVar2 == '\0') ||
         ((*(char *)((longlong)param_1 + 0x7ed) != '\0' &&
          (*(char *)((longlong)param_1 + 0xa6c) != '\0')))) {
        uVar4 = FUN_0065b870(param_1);
        FUN_00f83670(uVar4,param_2);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
        *(undefined1 *)((longlong)param_1 + 0xa6c) = 0;
        *(undefined1 *)((longlong)param_1 + 0xafc) = 0;
        *(undefined1 *)((longlong)param_1 + 0xafd) = 0;
        FUN_0082a6c0(param_1[0xf7],1);
        *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
        if (param_1[0x158] != 0) {
          FUN_01cc6030(param_1[0x158]);
        }
        param_1[0x158] = 0;
        (**(code **)(*(longlong *)param_1[0x14a] + 0x128))((longlong *)param_1[0x14a],0);
        (**(code **)(*(longlong *)param_1[0x149] + 0x128))((longlong *)param_1[0x149],0);
        local_21[0] = '\x01';
        do {
          *PTR_DAT_02001100 = (char)param_1[0x157];
          *PTR_DAT_02002c68 = *(undefined1 *)((longlong)param_1 + 0xab9);
          (**(code **)(*(longlong *)param_1[0x151] + 0x160))((longlong *)param_1[0x151],local_21);
          local_30 = param_1[0x159];
          param_1[0x159] = param_1[0x15a];
          param_1[0x15a] = local_30;
          if (local_21[0] != '\0') {
            cVar2 = FUN_004113d0(param_1[0x151],&PTR_FUN_012a1d38);
            if (cVar2 != '\0') {
              (**(code **)(*(longlong *)param_1[0xf9] + 0x128))((longlong *)param_1[0xf9],1);
            }
            (**(code **)(*(longlong *)param_1[0x151] + 0x158))
                      ((longlong *)param_1[0x151],param_1 + 0x159,local_21);
          }
          if ((local_21[0] != '\0') && (*(char *)((longlong)param_1 + 0x8d1) == '\0')) {
            lVar1 = param_1[0x158];
            if ((lVar1 == 0) || (*(char *)((longlong)param_1 + 0x7ec) == '\0')) {
              if (lVar1 != 0) {
                FUN_01cc6030(lVar1);
              }
              param_1[0x158] = 0;
              lVar1 = param_1[0x159];
              if (lVar1 != 0) {
                param_1[0x158] = lVar1;
                FUN_01cc6020(lVar1);
              }
            }
            *(undefined1 *)((longlong)param_1 + 0xafc) = 1;
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          cVar2 = FUN_010e2b90(param_1);
        } while (((cVar2 == '\0') && (local_21[0] != '\0')) &&
                (iVar3 = (**(code **)(*(longlong *)param_1[0x124] + 0x260))
                                   ((longlong *)param_1[0x124]), iVar3 != 0));
        *(bool *)((longlong)param_1 + 0xafd) = local_21[0] == '\0';
        *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
        (**(code **)(*(longlong *)param_1[0x14a] + 0x128))((longlong *)param_1[0x14a],1);
        (**(code **)(*(longlong *)param_1[0x149] + 0x128))((longlong *)param_1[0x149],1);
        if (*(char *)((longlong)param_1 + 0x7ec) == '\0') {
          FUN_0082a6c0(param_1[0xf8],1);
          (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
        }
        if (*(char *)((longlong)param_1 + 0x8d1) != '\0') {
          FUN_00805200(param_1);
        }
      }
    }
  }
  return;
}

