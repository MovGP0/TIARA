/* Ghidra address: 00d99e50 */
/* Ghidra symbol: FUN_00d99e50 */


ulonglong FUN_00d99e50(undefined8 param_1,longlong param_2,undefined8 param_3,byte param_4,
                      char param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  uVar5 = (ulonglong)param_4;
  if (uVar5 < 0x10) {
    if (uVar5 == 0xf) {
      if (param_5 == '\0') {
        iVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
        iVar2 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000005);
        if (iVar1 == iVar2) {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
          *param_6 = uVar3;
        }
        else {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
          *param_6 = uVar3;
        }
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x50);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else if (param_5 == '\t') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar3;
      }
      else if (param_5 == '\n') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
        *param_6 = uVar3;
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 < 9) {
      if (uVar5 == 8) {
        if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x51);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
      if (uVar5 == 2) {
        if (param_5 == '\0') {
          iVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
          iVar2 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000005);
          if (iVar1 == iVar2) {
            uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
            *param_6 = uVar3;
          }
          else {
            uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
            *param_6 = uVar3;
          }
        }
        else if (param_5 == '\x01') {
          uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xc);
          *param_6 = uVar3;
        }
        else if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4e);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
      if (uVar5 - 3 < 4) {
        if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4f);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
      if (uVar5 - 3 == 4) {
        if (param_5 == '\0') {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
          *param_6 = uVar3;
        }
        else if (param_5 == '\x01') {
          uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xc);
          *param_6 = uVar3;
        }
        else if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x50);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
    }
    else {
      if (uVar5 == 9) {
        if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x52);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
      if (uVar5 == 10) {
        if (param_5 == '\0') {
          iVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
          iVar2 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000005);
          if (iVar1 == iVar2) {
            uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
            *param_6 = uVar3;
          }
          else {
            uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
            *param_6 = uVar3;
          }
        }
        else if (param_5 == '\x01') {
          uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xc);
          *param_6 = uVar3;
        }
        else if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4e);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
      if (uVar5 - 0xb < 4) {
        if (param_5 == '\x02') {
          lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4f);
          *param_6 = *(undefined4 *)(lVar6 + 0x28);
        }
        else if (param_5 == '\t') {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000d);
          uVar3 = FUN_00635840(uVar3,10);
          *param_6 = uVar3;
        }
        else if (param_5 == '\n') {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000d);
          uVar3 = FUN_00635930(uVar3,0xffffffec);
          *param_6 = uVar3;
        }
        else {
          uVar4 = FUN_00783cc0();
          uVar7 = (ulonglong)uVar4;
        }
        goto LAB_00d9a8ef;
      }
    }
  }
  else if (uVar5 < 0x13) {
    if (uVar5 == 0x10) {
      if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x51);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else if (param_5 == '\t') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        uVar3 = FUN_00635840(uVar3,0x13);
        *param_6 = uVar3;
      }
      else if (param_5 == '\n') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
        uVar3 = FUN_00635840(uVar3,0x13);
        *param_6 = uVar3;
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 == 0x11) {
      if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x52);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else if (param_5 == '\t') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
        *param_6 = uVar3;
      }
      else if (param_5 == '\n') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar3;
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 == 0x12) {
      if (param_5 == '\0') {
        iVar1 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
        iVar2 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000005);
        if (iVar1 == iVar2) {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
          *param_6 = uVar3;
        }
        else {
          uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000f);
          *param_6 = uVar3;
        }
      }
      else if (param_5 == '\x01') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xc);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4e);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
  }
  else {
    if (uVar5 - 0x13 < 4) {
      if (param_5 == '\x01') {
        uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff00000d);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x4f);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 == 0x17) {
      if (param_5 == '\0') {
        uVar3 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x28),0xff000010);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x01') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xe);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x50);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 == 0x18) {
      if (param_5 == '\x01') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x51);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
    if (uVar5 == 0x19) {
      if (param_5 == '\x01') {
        uVar3 = FUN_00d7e640(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 8),0xd);
        *param_6 = uVar3;
      }
      else if (param_5 == '\x02') {
        lVar6 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x52);
        *param_6 = *(undefined4 *)(lVar6 + 0x28);
      }
      else {
        uVar4 = FUN_00783cc0();
        uVar7 = (ulonglong)uVar4;
      }
      goto LAB_00d9a8ef;
    }
  }
  uVar4 = FUN_00783cc0();
  uVar7 = (ulonglong)uVar4;
LAB_00d9a8ef:
  return uVar7 & 0xffffffff;
}

