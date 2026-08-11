/* Ghidra address: 012afab0 */
/* Ghidra symbol: FUN_012afab0 */


void FUN_012afab0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  double local_38;
  longlong local_30;
  char local_21 [17];
  
  local_50 = auStack_78;
  local_21[0] = '\0';
  if (*(char *)((longlong)param_1 + 0xd8a) == '\0') {
    local_50 = auStack_78;
    FUN_0082a6c0(param_1[0xf8],1);
    FUN_016fea90(0x106,0x1582);
  }
  else if ((*(char *)((longlong)param_1 + 0x7ed) == '\0') ||
          (*(char *)((longlong)param_1 + 0xd9c) != '\0')) {
    cVar2 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee);
    if (cVar2 != '\0') {
      cVar2 = FUN_010e2d90(param_1);
      if ((cVar2 == '\0') ||
         ((*(char *)((longlong)param_1 + 0x7ed) != '\0' &&
          (*(char *)((longlong)param_1 + 0xd9c) != '\0')))) {
        uVar5 = FUN_0065b870(param_1);
        FUN_00f83670(uVar5,param_2);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
        *(undefined1 *)((longlong)param_1 + 0xd9c) = 0;
        FUN_0082a6c0(param_1[0xf7],1);
        *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
        if (param_1[0x133] != 0) {
          FUN_01cc6030(param_1[0x133]);
        }
        param_1[0x133] = 0;
        (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],0);
        (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],0);
        FUN_010e8e30(param_1[0x136],0);
        local_21[0] = '\x01';
        cVar2 = FUN_010e1a60(param_1);
        if ((cVar2 != '\0') && (PTR_DAT_02004010[0x7c6] != '\0')) {
          uVar5 = FUN_010e1b10(param_1);
          local_40 = FUN_004113f0(uVar5,&PTR_FUN_01133e90);
          uVar3 = (**(code **)(*(longlong *)param_1[0x173] + 0x260))((longlong *)param_1[0x173]);
          FUN_0113e050(local_40,uVar3);
        }
        if (local_21[0] != '\0') {
          do {
            *PTR_DAT_02001100 = (char)param_1[0x1bd];
            *PTR_DAT_02002c68 = *(undefined1 *)((longlong)param_1 + 0xde9);
            FUN_010e4300(param_1,8,1000,0);
            (**(code **)(*(longlong *)param_1[0x1b7] + 0x160))((longlong *)param_1[0x1b7],local_21);
            local_30 = param_1[0x110];
            param_1[0x110] = param_1[0x134];
            param_1[0x134] = local_30;
            if (local_21[0] != '\0') {
              cVar2 = FUN_004113d0(param_1[0x1b7],&PTR_FUN_012a1d38);
              if (cVar2 != '\0') {
                (**(code **)(*(longlong *)param_1[0xf9] + 0x128))((longlong *)param_1[0xf9],1);
              }
              (**(code **)(*(longlong *)param_1[0x1b7] + 0x158))
                        ((longlong *)param_1[0x1b7],param_1 + 0x110,local_21);
            }
            FUN_010e4410(param_1,param_1);
            if ((local_21[0] != '\0') && (*(char *)((longlong)param_1 + 0x8d1) == '\0')) {
              lVar1 = param_1[0x133];
              if ((lVar1 == 0) || (*(char *)((longlong)param_1 + 0x7ec) == '\0')) {
                if (lVar1 != 0) {
                  FUN_01cc6030(lVar1);
                }
                param_1[0x133] = 0;
                if (param_1[0x110] != 0) {
                  (**(code **)(*(longlong *)param_1[0x1b7] + 0xf8))
                            ((longlong *)param_1[0x1b7],(longlong)param_1 + 0xd93,&local_38);
                  FUN_01cc4590(param_1[0x110],param_1[0x1b6] ^ 0x8000000000000000,
                               (double)*(byte *)((longlong)param_1 + 0xd91) * local_38 -
                               (double)param_1[0x1b6]);
                  param_1[0x133] = param_1[0x110];
                  FUN_01cc6020(param_1[0x110]);
                }
              }
              if (*(char *)((longlong)param_1 + 0xd9c) == '\0') {
                FUN_012ae3d0(param_1,1);
                FUN_012ae340(param_1);
              }
            }
            FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
            cVar2 = FUN_010e2b90(param_1);
          } while (((cVar2 == '\0') && (local_21[0] != '\0')) &&
                  (iVar4 = (**(code **)(*(longlong *)param_1[0x173] + 0x260))
                                     ((longlong *)param_1[0x173]), iVar4 != 0));
        }
        *(undefined1 *)((longlong)param_1 + 0x7ed) = 0;
        (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],1);
        (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],1);
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

