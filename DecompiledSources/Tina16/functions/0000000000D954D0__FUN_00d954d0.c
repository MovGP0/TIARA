/* Ghidra address: 00d954d0 */
/* Ghidra symbol: FUN_00d954d0 */


undefined4 FUN_00d954d0(longlong param_1,ulonglong *param_2,char param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_30;
  byte local_2c;
  
  uVar5 = *param_2;
  iVar1 = (int)param_2[1];
  cVar2 = FUN_00d98b50(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x18 + (uVar5 & 0xff) * 8);
  local_30 = (int)(uVar5 >> 0x20);
  if (lVar4 != 0) {
    uVar3 = (**(code **)(lVar4 + 0x28))(lVar4,param_1,local_30,iVar1,param_3,param_4);
    return uVar3;
  }
  if (param_3 != '\x02') {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x180);
  uVar5 = uVar5 & 0xff;
  local_2c = (byte)iVar1;
  if (0x10 < uVar5) {
    if (uVar5 == 0x14) {
      if (local_30 == 0x16) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x31);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      return 0;
    }
    if (uVar5 == 0x15) {
      if (local_30 < 0x27) {
        return 0;
      }
      if (local_30 < 0x2f) {
        if (local_2c == 0) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x33);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        else if (local_2c == 1) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x34);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        else if (local_2c == 2) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x35);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        else if (local_2c == 3) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x36);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        return 1;
      }
      return 0;
    }
    if (uVar5 != 0x1f) {
      return 0;
    }
    if (local_30 == 0x4d) {
      if (iVar1 == 1) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),1);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      return 1;
    }
    if (local_30 == 0x4e) {
      if (iVar1 == 1) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),2);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),3);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      return 1;
    }
    return 0;
  }
  if (uVar5 == 0x10) {
    if (local_30 == 0x13) {
      lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),4);
      *param_4 = *(undefined4 *)(lVar4 + 0x28);
    }
    return 1;
  }
  if (uVar5 != 0) {
    if (uVar5 != 4) {
      if (uVar5 != 7) {
        return 0;
      }
      if (((local_30 != 0xd) && (local_30 != 0xd)) && (local_30 != 0xe)) {
        return 0;
      }
      if (local_2c == 0) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x2a);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else if (local_2c == 1) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x2b);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else if (local_2c == 4) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x2e);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      return 1;
    }
    if (local_30 != 0xb) {
      return 0;
    }
    if (local_2c < 4) {
      if (local_2c == 3) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x1e);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 0) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x1d);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 1) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x1f);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 2) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x1e);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
    }
    else {
      if (local_2c == 4) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x20);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 5) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x20);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 6) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x21);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
    }
    return 0;
  }
  if (local_30 == 1) {
    if (local_2c < 3) {
      if (local_2c == 2) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0xb);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else if (local_2c == 0) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),10);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
      else if (local_2c == 1) {
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0xc);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
      }
    }
    else if (local_2c == 3) {
      lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0xe);
      *param_4 = *(undefined4 *)(lVar4 + 0x28);
    }
    else if (local_2c == 6) {
      lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0xd);
      *param_4 = *(undefined4 *)(lVar4 + 0x28);
    }
    return 1;
  }
  if (local_30 != 3) {
    if (local_30 != 2) {
      if (local_30 == 4) {
        if (local_2c == 0) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x19);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        else if (local_2c == 1) {
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x1a);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
        }
        return 1;
      }
      return 0;
    }
    if (local_2c < 8) {
      if (local_2c != 7) {
        if (3 < local_2c) {
          if (local_2c != 5) {
            if (local_2c != 6) {
              return 1;
            }
LAB_00d95910:
            lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x16);
            *param_4 = *(undefined4 *)(lVar4 + 0x28);
            return 1;
          }
LAB_00d958fc:
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x14);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
          return 1;
        }
        if (local_2c == 3) goto LAB_00d95938;
        if (local_2c == 0) goto LAB_00d958fc;
        if (local_2c == 1) goto LAB_00d95910;
        if (local_2c != 2) {
          return 1;
        }
      }
LAB_00d95924:
      lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x15);
      *param_4 = *(undefined4 *)(lVar4 + 0x28);
    }
    else {
      if (local_2c < 0xc) {
        if (local_2c == 0xb) goto LAB_00d95910;
        if (local_2c != 8) {
          if (local_2c != 10) {
            return 1;
          }
          goto LAB_00d958fc;
        }
      }
      else {
        if (local_2c == 0xc) goto LAB_00d95924;
        if (local_2c != 0xd) {
          return 1;
        }
      }
LAB_00d95938:
      lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x18);
      *param_4 = *(undefined4 *)(lVar4 + 0x28);
    }
    return 1;
  }
  if (local_2c < 8) {
    if (local_2c != 7) {
      if (3 < local_2c) {
        if (local_2c != 5) {
          if (local_2c != 6) {
            return 1;
          }
LAB_00d95822:
          lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x11);
          *param_4 = *(undefined4 *)(lVar4 + 0x28);
          return 1;
        }
LAB_00d9580e:
        lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0xf);
        *param_4 = *(undefined4 *)(lVar4 + 0x28);
        return 1;
      }
      if (local_2c == 3) goto LAB_00d9584a;
      if (local_2c == 0) goto LAB_00d9580e;
      if (local_2c == 1) goto LAB_00d95822;
      if (local_2c != 2) {
        return 1;
      }
    }
LAB_00d95836:
    lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x10);
    *param_4 = *(undefined4 *)(lVar4 + 0x28);
  }
  else {
    if (local_2c < 0xc) {
      if (local_2c == 0xb) goto LAB_00d95822;
      if (local_2c != 8) {
        if (local_2c != 10) {
          return 1;
        }
        goto LAB_00d9580e;
      }
    }
    else {
      if (local_2c == 0xc) goto LAB_00d95836;
      if (local_2c != 0xd) {
        return 1;
      }
    }
LAB_00d9584a:
    lVar4 = FUN_00d7efc0(*(undefined8 *)(lVar4 + 0x10),0x13);
    *param_4 = *(undefined4 *)(lVar4 + 0x28);
  }
  return 1;
}

