/* Ghidra address: 00f64920 */
/* Ghidra symbol: FUN_00f64920 */


undefined4 FUN_00f64920(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  longlong local_68;
  char local_59;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  cVar2 = *(char *)(param_1 + 0x80);
  if (cVar2 == '\x02') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar6);
        cVar2 = FUN_00f6f960(lVar3);
        if (cVar2 != '\0') {
          FUN_00f6ece0(lVar3,in_stack_00000028,in_stack_00000030);
          FUN_00f63210(param_1,lVar3,lVar3 + 0x28,0xf);
          if (PTR_DAT_02002068[2] != '\0') {
            local_38 = FUN_00f6eb20(lVar3);
            local_30 = FUN_00f60770(&local_38);
            uVar4 = FUN_00f60820(lVar3 + 0x28,&local_30);
            *(undefined8 *)(lVar3 + 0x28) = uVar4;
          }
          FUN_00f63320(param_1,lVar3,*(undefined4 *)(PTR_DAT_02002068 + 4),*PTR_DAT_02002068);
          if (PTR_DAT_02002068[2] != '\0') {
            FUN_00f607f0(lVar3 + 0x28);
          }
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
          FUN_00f6f910(lVar3,0x10);
          FUN_00f6f900(lVar3,1);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    local_50 = FUN_015fd610(in_stack_00000028,in_stack_00000030);
    cVar2 = FUN_00f60710(&local_50,param_1 + 0xd8,(double)*(int *)(PTR_DAT_02002068 + 0x44));
    if (cVar2 == '\0') {
      FUN_00f62990(param_1,1);
      FUN_00f629b0(param_1,1);
    }
    FUN_00f62b60(param_1,*(undefined8 *)(param_1 + 0x10));
    goto LAB_00f64c61;
  }
  if (cVar2 != '\x03') {
    if (cVar2 == '\x04') {
      FUN_00f63480(param_1,param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x80) = 0;
      FUN_00f74ce0(*(undefined8 *)(param_1 + 0x48),param_1 + 0x1c);
      FUN_00f63b50(param_1);
    }
    goto LAB_00f64c61;
  }
  local_40 = FUN_00f70520(*(undefined8 *)(param_1 + 0x38));
  plVar5 = (longlong *)
           FUN_00f74ae0(*(undefined8 *)(param_1 + 0x48),local_40 & 0xffffffff,local_40 >> 0x20,
                        &local_59,&local_54,&local_58);
  bVar1 = false;
  if ((plVar5 == (longlong *)0x0) || (local_59 != '\x01')) {
    cVar2 = FUN_00f64f70(param_1,&local_40,*(undefined8 *)(param_1 + 0x38),&local_48,&local_68);
    if (cVar2 != '\0') {
      uVar4 = FUN_00f65130(param_1,*(undefined4 *)(local_68 + 0x140));
      FUN_00f70270(*(undefined8 *)(param_1 + 0x38),uVar4,1,1);
      bVar1 = true;
    }
LAB_00f64bdf:
    if (bVar1) {
      FUN_00f701e0(*(undefined8 *)(param_1 + 0x38),&local_48);
      FUN_00f702c0(*(undefined8 *)(param_1 + 0x38));
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
      FUN_00f62990(param_1,1);
      FUN_00f629b0(param_1,1);
    }
  }
  else {
    cVar2 = FUN_00f6cec0(plVar5,local_54);
    if ((cVar2 == '\0') && (cVar2 = FUN_00f64c70(param_1,&local_40), cVar2 == '\0')) {
      local_48 = (**(code **)(*plVar5 + 0x20))(plVar5,local_54);
      cVar2 = FUN_00f60710(&local_40,&local_48,(double)*(int *)(PTR_DAT_02002068 + 0x44));
      if (cVar2 != '\0') {
        FUN_00f70270(*(undefined8 *)(param_1 + 0x38),plVar5,1 < local_58,local_58);
        bVar1 = true;
        goto LAB_00f64bdf;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
    }
  }
  FUN_00f62a30(param_1);
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_00f63b50(param_1);
LAB_00f64c61:
  return *(undefined4 *)(param_1 + 0x2c);
}

