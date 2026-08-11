/* Ghidra address: 0184b980 */
/* Ghidra symbol: FUN_0184b980 */


undefined8 FUN_0184b980(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int local_44;
  int local_40;
  undefined4 local_3c;
  longlong *local_38;
  longlong local_30 [2];
  
  local_80 = auStack_d8;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_30[0] = 0;
  local_68 = (longlong *)0x0;
  FUN_0046f180(&local_60);
  local_3c = 0xffffffff;
  iVar3 = FUN_01847410();
  local_b4 = iVar3 + -1;
  local_40 = 0;
  if (-1 < local_b4) {
    do {
      local_b4 = iVar3;
      lVar4 = FUN_0184b910(param_1,local_40);
      local_38 = *(longlong **)(lVar4 + 0x18);
      cVar1 = FUN_004113d0(local_38,&PTR_FUN_018467e8);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(local_38,&PTR_FUN_01843fa0);
        if ((cVar1 != '\0') && ((char)local_38[0x11] != '\0')) {
          local_3c = FUN_01848540(local_38);
        }
        iVar3 = FUN_01847410(local_38);
        if (0 < iVar3) {
          iVar3 = FUN_01847410(local_38);
          FUN_00419260(local_30,&DAT_0184b930,1,(longlong)iVar3);
          iVar3 = FUN_01847410();
          local_44 = 0;
          if (-1 < iVar3 + -1) {
            do {
              if ((char)local_38[3] == '\0') {
                uVar5 = FUN_0184b910(param_1,local_40);
                plVar6 = (longlong *)FUN_0184b520(uVar5,local_44);
                (**(code **)(*plVar6 + 0x10))(plVar6,&local_98);
                FUN_00461840(local_30[0] + (longlong)local_44 * 0x18,&local_98);
              }
              else {
                uVar5 = FUN_0184b910(param_1,local_40);
                lVar4 = FUN_0184b520(uVar5,local_44);
                FUN_00468a10(local_30[0] + (longlong)local_44 * 0x18,*(undefined8 *)(lVar4 + 0xa0));
              }
              local_44 = local_44 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar3 = FUN_01847410();
          local_44 = 0;
          if (-1 < iVar3 + -1) {
            do {
              plVar6 = (longlong *)FUN_01847630(local_38,local_44);
              (**(code **)(*plVar6 + 8))(plVar6,local_30[0] + (longlong)local_44 * 0x18);
              local_44 = local_44 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00419430(local_30,&DAT_0184b930);
        }
        cVar1 = FUN_004113d0(local_38,&PTR_FUN_01844508);
        plVar6 = local_38;
        if (cVar1 != '\0') {
          local_38[0x11] = (longlong)local_68;
          FUN_00461840(local_38 + 0x12,&local_60);
          plVar6[0x15] = *(longlong *)(param_1 + 0x98);
        }
        local_68 = local_38;
        if ((param_4 == '\0') || (iVar3 = FUN_01847410(param_1), local_40 != iVar3 + -1)) {
          iVar3 = FUN_01847410(param_1);
          if ((local_40 == iVar3 + -1) && (*(char *)(param_1 + 0x28) == '\0')) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
          *(undefined1 *)(local_38 + 5) = uVar2;
          (**(code **)(*local_38 + 0x10))(local_38,&local_60);
        }
        else {
          (**(code **)(*local_38 + 8))(local_38,param_3);
        }
        iVar3 = FUN_01847410();
        local_44 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar4 = FUN_01847630(local_38,local_44);
            if (*(char *)(lVar4 + 0xa1) != '\0') {
              uVar5 = FUN_0184b910(param_1,local_40);
              plVar6 = (longlong *)FUN_0184b520(uVar5,local_44);
              plVar7 = (longlong *)FUN_01847630(local_38,local_44);
              (**(code **)(*plVar7 + 0x10))(plVar7,&local_b0);
              (**(code **)(*plVar6 + 8))(plVar6,&local_b0);
            }
            local_44 = local_44 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        cVar1 = FUN_004113d0(local_38,&PTR_FUN_01843fa0);
        if ((cVar1 != '\0') && ((char)local_38[0x11] != '\0')) {
          uVar5 = FUN_0184b910(param_1,local_40);
          FUN_01848710(local_38,local_3c,0,uVar5);
        }
      }
      else {
        local_68 = local_38;
        (**(code **)(*local_38 + 0x10))(local_38,&local_60);
      }
      local_40 = local_40 + 1;
      local_b4 = local_b4 + -1;
      iVar3 = local_b4;
    } while (local_b4 != 0);
  }
  FUN_00461840(param_2,&local_60);
  FUN_00417840(&local_b0,&DAT_004013d8,2);
  FUN_00460ba0(&local_60);
  FUN_00419430(local_30,&DAT_0184b930);
  return param_2;
}

