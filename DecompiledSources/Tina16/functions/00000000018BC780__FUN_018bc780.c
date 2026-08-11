/* Ghidra address: 018bc780 */
/* Ghidra symbol: FUN_018bc780 */


longlong * FUN_018bc780(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 *local_50;
  longlong local_40;
  uint local_38;
  int local_34;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  
  local_50 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = (longlong *)0x0;
  iVar2 = (**(code **)*param_1)(param_1);
  if (iVar2 != 0) {
    local_38 = (uint)(param_1[0x18] != 0);
    if (*(char *)(param_1[5] + 0x48) == '\0') {
      FUN_0043f750(&local_58,param_2);
      local_34 = (**(code **)(*(longlong *)param_1[0xe] + 0xb0))((longlong *)param_1[0xe],local_58);
      if (local_34 != -1) {
        local_28 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0xe] + 0x30))
                             ((longlong *)param_1[0xe],local_34);
        iVar2 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))((longlong *)param_1[0xe]);
        if (1 < iVar2) {
          (**(code **)(*(longlong *)param_1[0xe] + 0xa0))
                    ((longlong *)param_1[0xe],local_34,local_38);
        }
        goto LAB_018bcc5e;
      }
    }
    local_20 = FUN_01810fa0(&DAT_018103d8,1,0);
    *(undefined1 *)(local_20 + 0x40) = *(undefined1 *)(param_1[0x13] + 0x38);
    local_30 = FUN_018039f0(param_1[0xf],param_2);
    FUN_018046f0(param_1[0x13],local_30);
    iVar2 = FUN_0043e420(*(undefined8 *)(local_30 + 0x20),L"TfrxReportPage");
    if (iVar2 == 0) {
      local_28 = (longlong *)FUN_0196b4e0(&PTR_FUN_01934910,1,0,param_1[4]);
      FUN_01813d10(local_20,local_28,local_30);
    }
    else {
      iVar2 = FUN_0043e420(*(undefined8 *)(local_30 + 0x20),L"TfrxDMPPage");
      if (iVar2 == 0) {
        local_28 = (longlong *)FUN_0196b4e0(&PTR_FUN_018837f0,1,0,param_1[4]);
        FUN_01813d10(local_20,local_28,local_30);
      }
      else {
        if ((*(char *)(param_1[0x1a] + 0x78) != '\0') &&
           (cVar1 = FUN_018c34f0(param_1[0x1a],*(undefined8 *)(local_30 + 0x20)), cVar1 != '\0')) {
          FUN_018bcc80(0,local_50);
          goto LAB_018bcc5e;
        }
        FUN_00416dc0(&local_60,*(undefined8 *)(local_30 + 0x20),5,5);
        uVar3 = FUN_0043fc00(local_60);
        local_40 = FUN_004aeac0(param_1[0x11],uVar3);
        cVar1 = FUN_004113d0(local_40,&PTR_FUN_018837f0);
        if (cVar1 == '\0') {
          local_28 = (longlong *)FUN_0196b4e0(&PTR_FUN_01934910,1,0,param_1[4]);
        }
        else {
          local_28 = (longlong *)FUN_0196b4e0(&PTR_FUN_018837f0,1,0,param_1[4]);
        }
        (**(code **)(*local_28 + 0x10))(local_28,local_40);
        (**(code **)(*local_28 + 0x50))(local_28,*(undefined8 *)(local_40 + 0x10));
        iVar2 = FUN_00414cb0(*(undefined8 *)(local_30 + 0x30));
        if (10 < iVar2) {
          FUN_018113d0(local_20,*(undefined8 *)(local_30 + 0x30),local_28);
        }
        FUN_018bc4d0(auStack_98,local_30,local_28);
      }
    }
    FUN_00410f20(local_20);
    (**(code **)(*local_28 + 0x198))(local_28,0,(short)local_28[0x44]);
    FUN_0043f750(&local_68,param_2);
    (**(code **)(*(longlong *)param_1[0xe] + 0xd0))
              ((longlong *)param_1[0xe],local_38,local_68,local_28);
    local_34 = (**(code **)(*(longlong *)param_1[0xe] + 0x28))((longlong *)param_1[0xe]);
    FUN_0197fca0(param_1[9]);
    if ((1 < local_34) && (*(int *)(*(longlong *)(param_1[4] + 0x220) + 0x18) < local_34)) {
      (**(code **)(*(longlong *)param_1[0xe] + 0x18))
                ((longlong *)param_1[0xe],&local_70,local_34 + -1);
      uVar3 = FUN_0043fc00(local_70);
      local_30 = FUN_018039f0(param_1[0xf],uVar3);
      if ((*(char *)(*(longlong *)(param_1[4] + 0x1a8) + 0x30) != '\0') &&
         (*(char *)(local_30 + 0x38) != '\0')) {
        FUN_018047a0(param_1[0x13],local_30);
        FUN_018039a0(local_30);
      }
      iVar2 = local_34 + -1;
      uVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x30))((longlong *)param_1[0xe],iVar2);
      FUN_00410f20(uVar4);
      (**(code **)(*(longlong *)param_1[0xe] + 0x98))((longlong *)param_1[0xe],iVar2);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
  }
LAB_018bcc5e:
  FUN_00414560(&local_70,4);
  return local_28;
}

