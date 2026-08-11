/* Ghidra address: 018b0eb0 */
/* Ghidra symbol: FUN_018b0eb0 */


void FUN_018b0eb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [44];
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  longlong local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  FUN_007e4130(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80));
  lVar4 = FUN_018af290(param_1);
  if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 4) != 0) {
    local_30 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x798));
    FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),local_30);
    uVar5 = FUN_0180bfb0();
    FUN_01809b60(uVar5,local_40,L"clFP3files");
    FUN_00416ad0(local_40,&DAT_018b17ec);
    FUN_007e2c60(local_30,local_40[0]);
    *(longlong *)(local_30 + 0x118) = param_1;
    *(code **)(local_30 + 0x110) = FUN_018af1a0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x28))(*(longlong **)(param_1 + 0x838));
    if (1 < iVar2) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x28))();
      local_6c = 0;
      if (-1 < iVar2 + -1) {
        do {
          *(undefined8 *)(local_30 + 0x110) = 0;
          *(undefined8 *)(local_30 + 0x118) = 0;
          lVar4 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,local_30);
          plVar6 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))
                             (*(longlong **)(param_1 + 0x838),local_6c);
          (**(code **)(*plVar6 + 0x108))(*plVar6,&local_48);
          FUN_007e2c60(lVar4,local_48);
          *(longlong *)(lVar4 + 0x18) = (longlong)local_6c;
          *(longlong *)(lVar4 + 0x118) = param_1;
          *(code **)(lVar4 + 0x110) = FUN_018b0260;
          FUN_007e34c0(local_30,lVar4);
          local_6c = local_6c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    lVar4 = FUN_018af290(param_1);
    if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 8) != 0) {
      FUN_018b0e30(auStack_98);
    }
  }
  FUN_01881a60();
  iVar2 = FUN_004b2060();
  local_6c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar5 = FUN_01881a60();
      lVar4 = FUN_01881930(uVar5,local_6c);
      if (*(longlong *)(lVar4 + 0x18) != *(longlong *)PTR_DAT_020041e8) {
        lVar4 = FUN_018af290(param_1);
        if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 8) != 0) {
          uVar5 = FUN_01881a60();
          lVar4 = FUN_01881930(uVar5,local_6c);
          FUN_00410ae0(**(undefined8 **)(lVar4 + 0x18),&local_50);
          iVar3 = FUN_00416db0(local_50,L"TfrxMailExport");
          if (iVar3 != 0) {
            local_30 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x798));
            FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),local_30);
            uVar5 = FUN_01881a60();
            lVar4 = FUN_01881930(uVar5,local_6c);
            (**(code **)(**(longlong **)(lVar4 + 0x18) + 0xb0))
                      (**(longlong **)(lVar4 + 0x18),&local_58);
            FUN_00416ad0(&local_58,&DAT_018b17ec);
            FUN_007e2c60(local_30,local_58);
            *(longlong *)(local_30 + 0x18) = (longlong)local_6c;
            *(longlong *)(local_30 + 0x118) = param_1;
            *(code **)(local_30 + 0x110) = FUN_018afce0;
          }
        }
        uVar5 = FUN_01881a60();
        lVar4 = FUN_01881930(uVar5,local_6c);
        FUN_00410ae0(**(undefined8 **)(lVar4 + 0x18),&local_60);
        iVar3 = FUN_00416db0(local_60,L"TfrxPDFExport");
        if (iVar3 == 0) {
          uVar5 = FUN_01881a60();
          lVar4 = FUN_01881930(uVar5,local_6c);
          *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(lVar4 + 0x18);
          lVar4 = FUN_018af290(param_1);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 2000),
                       (*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 0x800) != 0);
        }
        lVar4 = FUN_018af290(param_1);
        if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 0x4000) == 0) {
          uVar5 = FUN_01881a60();
          lVar4 = FUN_01881930(uVar5,local_6c);
          FUN_00410ae0(**(undefined8 **)(lVar4 + 0x18),&local_68);
          iVar3 = FUN_00416db0(local_68,L"TfrxMailExport");
          if (iVar3 == 0) {
            uVar5 = FUN_01881a60();
            lVar4 = FUN_01881930(uVar5,local_6c);
            *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(lVar4 + 0x18);
            lVar4 = FUN_018af290(param_1);
            FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),
                         (*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 0x800) != 0);
          }
        }
        else {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7c8),0);
        }
      }
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_007e6a70(*(undefined8 *)(param_1 + 0x7b8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4e8));
  lVar4 = FUN_018af290(param_1);
  if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 8) != 0) {
    FUN_018b0d40(auStack_98,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x80));
    lVar4 = FUN_018af290(param_1);
    if ((*(uint *)(*(longlong *)(lVar4 + 0x220) + 10) & 4) != 0) {
      local_6c = 0;
      do {
        FUN_007e3300(*(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x80),0);
        local_6c = local_6c + 1;
      } while (local_6c != 2);
    }
    iVar2 = FUN_007e2ef0();
    local_6c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7a0) + 0x80),local_6c);
        *(longlong *)(lVar4 + 0x118) = param_1;
        *(code **)(lVar4 + 0x110) = FUN_018afd30;
        local_6c = local_6c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar3 = 0;
  iVar2 = FUN_006fca40();
  local_6c = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
      if (((*(char *)(lVar4 + 0x33a) != '\x01') &&
          (lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c),
          *(char *)(lVar4 + 0xa9) != '\0')) &&
         (lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c),
         *(longlong *)(lVar4 + 0xf0) != 0)) {
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        cVar1 = FUN_004113d0(*(undefined8 *)(lVar4 + 0x18),&PTR_FUN_007d94d0);
        if (cVar1 == '\0') {
          local_30 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x7b8));
          FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80),local_30);
        }
        else {
          lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
          local_30 = *(longlong *)(lVar4 + 0x18);
        }
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        *(longlong *)(lVar4 + 0x18) = local_30;
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        FUN_007e2c60(local_30,*(undefined8 *)(lVar4 + 0xf0));
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        *(undefined8 *)(local_30 + 0x110) = *(undefined8 *)(lVar4 + 0x1f8);
        *(undefined8 *)(local_30 + 0x118) = *(undefined8 *)(lVar4 + 0x200);
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        FUN_007e2fb0(local_30,*(undefined4 *)(lVar4 + 0x31c));
        lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
        if (*(longlong *)(lVar4 + 0x330) != 0) {
          FUN_007e4130(local_30);
          lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
          FUN_018b0d40(auStack_98,*(undefined8 *)(*(longlong *)(lVar4 + 0x330) + 0x80),local_30);
        }
      }
      lVar4 = FUN_006fca20(*(undefined8 *)(param_1 + 0x6d8),local_6c);
      if (*(char *)(lVar4 + 0x33a) == '\x03') {
        if (iVar3 == 1) break;
        local_30 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x7b8));
        FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80),local_30);
        FUN_007e2c60(local_30,&LAB_018b1854);
        iVar3 = iVar3 + 1;
      }
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_68,6);
  return;
}

