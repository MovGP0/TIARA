/* Ghidra address: 00625c10 */
/* Ghidra symbol: FUN_00625c10 */


void FUN_00625c10(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 local_48 [2];
  undefined1 local_40 [8];
  char local_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  thunk_FUN_04125dff(local_40);
  local_48[0] = *param_3;
  FUN_006252d0(param_2,(longlong)param_3 + 5,local_48,param_4,local_40);
  if (param_1 == (longlong *)0x0) {
    bVar1 = *(byte *)(param_3 + 1);
    if (bVar1 < 0xc) {
      if (bVar1 == 0xb) {
        FUN_00625bd0((longlong)CONCAT11(uStack_37,local_38));
        return;
      }
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          FUN_00625be0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
          return;
        }
        if (bVar1 == 2) {
          FUN_00625bd0((longlong)CONCAT11(uStack_37,local_38));
          return;
        }
        if (bVar1 == 3) {
          FUN_00625bd0(CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
          return;
        }
        if (bVar1 != 4) {
          if (bVar1 != 5) {
            return;
          }
          FUN_00625bf0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
          return;
        }
        FUN_00625c00(CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
        return;
      }
      if (bVar1 == 7) {
        FUN_00625bf0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
        return;
      }
      if (bVar1 == 8) {
        FUN_00625bc0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
        return;
      }
      if (bVar1 != 9) {
        return;
      }
    }
    else {
      if (0x12 < bVar1) {
        if (bVar1 == 0x13) {
          FUN_00625bd0(CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
          return;
        }
        if (bVar1 != 0x14) {
          if (bVar1 != 0x15) {
            return;
          }
          FUN_00625be0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
          return;
        }
        FUN_00625be0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
        return;
      }
      if (bVar1 == 0x12) {
        FUN_00625bd0(CONCAT11(uStack_37,local_38));
        return;
      }
      if (bVar1 != 0xd) {
        if (bVar1 == 0x10) {
          FUN_00625bd0((longlong)local_38);
          return;
        }
        if (bVar1 != 0x11) {
          return;
        }
        FUN_00625bd0(local_38);
        return;
      }
    }
    FUN_00625bc0(CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38))));
    return;
  }
  bVar1 = *(byte *)(param_3 + 1);
  if (bVar1 < 0xc) {
    if (bVar1 == 0xb) {
      *(ushort *)param_1 = CONCAT11(uStack_37,local_38);
      return;
    }
    if (bVar1 < 7) {
      if (bVar1 == 6) {
        *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
        return;
      }
      if (bVar1 == 2) {
        *(ushort *)param_1 = CONCAT11(uStack_37,local_38);
        return;
      }
      if (bVar1 == 3) {
        *(uint *)param_1 = CONCAT22(uStack_36,CONCAT11(uStack_37,local_38));
        return;
      }
      if (bVar1 != 4) {
        if (bVar1 != 5) {
          return;
        }
        *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
        return;
      }
      *(uint *)param_1 = CONCAT22(uStack_36,CONCAT11(uStack_37,local_38));
      return;
    }
    if (bVar1 == 7) {
      *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
      return;
    }
    if (bVar1 == 8) {
      if (*param_1 != 0) {
        thunk_FUN_041b9bbd(*param_1);
      }
      *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
      return;
    }
    if (bVar1 != 9) {
      return;
    }
  }
  else {
    if (0x12 < bVar1) {
      if (bVar1 == 0x13) {
        *(uint *)param_1 = CONCAT22(uStack_36,CONCAT11(uStack_37,local_38));
        return;
      }
      if (bVar1 != 0x14) {
        if (bVar1 != 0x15) {
          return;
        }
        *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
        return;
      }
      *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
      return;
    }
    if (bVar1 == 0x12) {
      *(ushort *)param_1 = CONCAT11(uStack_37,local_38);
      return;
    }
    if (bVar1 == 0xc) {
      FUN_00460b80(param_1);
      FUN_00409a70(local_40,param_1,0x18);
      return;
    }
    if (bVar1 != 0xd) {
      if (bVar1 == 0x10) {
        *(char *)param_1 = local_38;
        return;
      }
      if (bVar1 != 0x11) {
        return;
      }
      *(char *)param_1 = local_38;
      return;
    }
  }
  if (*param_1 != 0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1);
  }
  *param_1 = CONCAT44(uStack_34,CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)));
  return;
}

