/* Ghidra address: 01ae1eb0 */
/* Ghidra symbol: FUN_01ae1eb0 */


void FUN_01ae1eb0(longlong param_1,char param_2,longlong param_3,longlong param_4,ulonglong *param_5
                 ,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = *param_5;
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
    FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),&local_38);
    FUN_01ac1cf0(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80),1);
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58);
    (**(code **)(*plVar7 + 0x108))(plVar7,*(undefined8 *)(param_1 + 0xf0));
    FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58),&local_38);
    FUN_01ac1cf0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80),1);
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x58);
    (**(code **)(*plVar7 + 0x108))(plVar7,*(undefined8 *)(param_1 + 0xf8));
    FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (param_4 == 0) {
    cVar1 = FUN_01ad1090(param_1,param_3,&local_38);
  }
  else {
    cVar1 = '\x01';
    local_38 = param_4;
  }
  if (cVar1 != '\0') {
    if (param_2 == '\0') {
      lVar3 = FUN_01abf9b0(&PTR_FUN_01abefa0,1);
      *(longlong *)(param_1 + 0xf8) = lVar3;
      *(longlong *)(lVar3 + 0x98) = param_1;
      FUN_005fd4e0(*(undefined8 *)(lVar3 + 0x88),0xff0000);
      plVar7 = *(longlong **)(param_1 + 0xf8);
      *(undefined1 *)(plVar7 + 0x12) = 0;
    }
    else {
      lVar3 = FUN_01abf9b0(&PTR_FUN_01abefa0,1);
      *(longlong *)(param_1 + 0xf0) = lVar3;
      *(longlong *)(lVar3 + 0x98) = param_1;
      FUN_005fd4e0(*(undefined8 *)(lVar3 + 0x88),0xff);
      plVar7 = *(longlong **)(param_1 + 0xf0);
      *(undefined1 *)(plVar7 + 0x12) = 1;
    }
    *(char *)((longlong)plVar7 + 0x91) = param_6;
    plVar7[0xb] = param_3;
    plVar7[10] = param_4;
    plVar5 = (longlong *)plVar7[0xb];
    if (plVar5 == (longlong *)0x0) {
      if (param_4 != 0) {
        uVar4 = (**(code **)(**(longlong **)(param_4 + 0x70) + 0x30))
                          (*(longlong **)(param_4 + 0x70),0);
        local_40 = FUN_01cd62b0(uVar4,local_30 & 0xffffffff);
        plVar7[0xf] = local_40;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x100))(plVar5,plVar7);
      uVar4 = FUN_01abda80(plVar7[0xb]);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01cb9c30);
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)plVar7[0xb] + 0xf8))
                  ((longlong *)plVar7[0xb],local_30 & 0xffffffff,local_30 >> 0x20,&local_40,
                   &local_48);
        plVar7[0xf] = local_40;
        lVar3 = FUN_01abdb20(plVar7[0xb]);
        if ((*(longlong *)PTR_DAT_02005620 != lVar3) ||
           (lVar3 = FUN_01abda80(plVar7[0xb]), *(longlong *)PTR_DAT_020041f8 != lVar3)) {
          plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
          uVar4 = FUN_01abdb20(plVar7[0xb]);
          (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,1);
          uVar4 = FUN_01abdb20(plVar7[0xb]);
          *(undefined8 *)PTR_DAT_02005620 = uVar4;
          uVar4 = FUN_01abda80(plVar7[0xb]);
          *(undefined8 *)PTR_DAT_020041f8 = uVar4;
        }
        plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
        lVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,plVar7[0xf]);
        plVar7[0x10] = lVar3;
      }
      else {
        plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
        uVar4 = FUN_01abdb20(plVar7[0xb]);
        (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,1);
        *(undefined8 *)PTR_DAT_02005620 = 0;
        *(undefined8 *)PTR_DAT_020041f8 = 0;
        (**(code **)(*(longlong *)plVar7[0xb] + 0xf8))
                  ((longlong *)plVar7[0xb],local_30 & 0xffffffff,local_30 >> 0x20,&local_40,
                   &local_48);
        plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
        lVar3 = (**(code **)(*plVar5 + 0x98))(plVar5,local_40,local_48);
        plVar7[0xe] = lVar3;
        if ((double)plVar7[0xe] == 0.0) {
          if (param_2 == '\0') {
            plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
            uVar4 = FUN_01abdb20(plVar7[0xb]);
            lVar3 = (**(code **)(*plVar5 + 0xa0))(plVar5,uVar4);
            plVar7[0xe] = lVar3;
          }
          else {
            uVar4 = FUN_01abda80(plVar7[0xb]);
            uVar6 = FUN_01abdb20(plVar7[0xb]);
            lVar3 = FUN_01cc92d0(uVar4,uVar6);
            plVar7[0xe] = lVar3;
          }
        }
        lVar3 = FUN_01abdb20(plVar7[0xb]);
        if ((*(longlong *)PTR_DAT_02005620 != lVar3) ||
           (lVar3 = FUN_01abda80(plVar7[0xb]), *(longlong *)PTR_DAT_020041f8 != lVar3)) {
          plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
          uVar4 = FUN_01abdb20(plVar7[0xb]);
          (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,1);
          uVar4 = FUN_01abdb20(plVar7[0xb]);
          *(undefined8 *)PTR_DAT_02005620 = uVar4;
          uVar4 = FUN_01abda80(plVar7[0xb]);
          *(undefined8 *)PTR_DAT_020041f8 = uVar4;
        }
        plVar5 = (longlong *)FUN_01abda80(plVar7[0xb]);
        (**(code **)(*plVar5 + 0x90))(plVar5,plVar7[0xe],plVar7 + 0xf,plVar7 + 0x10);
      }
    }
    (**(code **)(*plVar7 + 0xc0))
              (plVar7,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = (**(code **)(**(longlong **)(local_38 + 0x70) + 0x30))
                        (*(longlong **)(local_38 + 0x70),0);
      uVar2 = FUN_0040c770((double)*(int *)(lVar3 + 0x94) * 0.9);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x48) = uVar2;
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar3 = (**(code **)(**(longlong **)(local_38 + 0x70) + 0x30))
                        (*(longlong **)(local_38 + 0x70),0);
      uVar2 = FUN_0040c770((double)*(int *)(lVar3 + 0x94) * 0.9);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x48) = uVar2;
    }
    if (param_2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x70))
                (*(longlong **)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x70))
                (*(longlong **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80));
    }
    if (param_6 != '\0') {
      FUN_01ae4310(param_1);
    }
  }
  return;
}

