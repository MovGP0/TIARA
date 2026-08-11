/* Ghidra address: 00f49cf0 */
/* Ghidra symbol: FUN_00f49cf0 */


longlong FUN_00f49cf0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                     int param_6,int param_7,int param_8,longlong param_9)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint uVar5;
  uint uVar6;
  longlong local_38;
  int local_30;
  int local_2c;
  
  local_38 = param_2;
  if (param_9 != 0) {
    if ((param_3 == param_5) && (param_4 == param_6)) {
      local_38 = param_9;
      unaff_RBX = param_2;
      lVar2 = param_9;
    }
    else {
      for (; (lVar2 = param_9, param_2 != 0 && (param_2 != param_9));
          param_2 = *(longlong *)(param_2 + 0x20)) {
        local_30 = *(int *)(param_2 + 0x10);
        if ((param_3 == local_30) && (param_4 == *(int *)(param_2 + 0x14))) {
          local_30 = *(int *)(param_2 + 0x18);
          local_2c = *(int *)(param_2 + 0x1c);
        }
        else {
          local_2c = *(int *)(param_2 + 0x14);
        }
        if ((((param_3 == local_30) && (param_3 == param_5)) &&
            (uVar3 = param_4 - param_6 >> 0x1f, uVar5 = local_2c - param_6 >> 0x1f,
            uVar6 = param_4 - local_2c >> 0x1f,
            ((param_4 - param_6 ^ uVar3) - uVar3) + ((local_2c - param_6 ^ uVar5) - uVar5) ==
            (param_4 - local_2c ^ uVar6) - uVar6)) ||
           (((param_4 == local_2c && (param_4 == param_6)) &&
            (uVar3 = param_3 - param_5 >> 0x1f, uVar5 = local_30 - param_5 >> 0x1f,
            uVar6 = param_3 - local_30 >> 0x1f,
            ((param_3 - param_5 ^ uVar3) - uVar3) + ((local_30 - param_5 ^ uVar5) - uVar5) ==
            (param_3 - local_30 ^ uVar6) - uVar6)))) {
          if ((param_5 != local_30) || (param_6 != local_2c)) {
            if ((param_3 == *(int *)(param_2 + 0x10)) && (param_4 == *(int *)(param_2 + 0x14))) {
              *(int *)(param_2 + 0x18) = param_5;
              *(int *)(param_2 + 0x1c) = param_6;
            }
            else {
              *(int *)(param_2 + 0x10) = param_5;
              *(int *)(param_2 + 0x14) = param_6;
            }
          }
          unaff_RBX = *(longlong *)(param_2 + 0x20);
          *(longlong *)(param_2 + 0x20) = param_9;
        }
        param_3 = local_30;
        param_4 = local_2c;
      }
    }
    do {
      param_9 = lVar2;
      lVar2 = *(longlong *)(param_9 + 0x20);
      lVar1 = unaff_RBX;
    } while (*(longlong *)(param_9 + 0x20) != 0);
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      local_30 = *(int *)(lVar1 + 0x10);
      if ((param_3 == local_30) && (param_4 == *(int *)(lVar1 + 0x14))) {
        local_30 = *(int *)(lVar1 + 0x18);
        local_2c = *(int *)(lVar1 + 0x1c);
      }
      else {
        local_2c = *(int *)(lVar1 + 0x14);
      }
      if (((param_3 == local_30) && (param_3 == param_7)) &&
         (uVar3 = param_4 - param_8 >> 0x1f, uVar5 = local_2c - param_8 >> 0x1f,
         uVar6 = param_4 - local_2c >> 0x1f,
         uVar3 = ((param_4 - param_8 ^ uVar3) - uVar3) + ((local_2c - param_8 ^ uVar5) - uVar5),
         uVar4 = (ulonglong)uVar3, uVar3 == (param_4 - local_2c ^ uVar6) - uVar6)) {
LAB_00f49f8a:
        if ((param_7 == local_30) && (param_8 == local_2c)) {
          *(undefined8 *)(param_9 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
        }
        else {
          lVar2 = FUN_00f48c60(&DAT_00f452b0,CONCAT71((int7)(uVar4 >> 8),1),0,
                               *(undefined8 *)(lVar1 + 0x20));
          *(longlong *)(param_9 + 0x20) = lVar2;
          *(int *)(lVar2 + 0x10) = param_7;
          *(int *)(lVar2 + 0x14) = param_8;
          *(int *)(lVar2 + 0x18) = local_30;
          *(int *)(lVar2 + 0x1c) = local_2c;
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
      else if ((param_4 == local_2c) && (param_4 == param_8)) {
        uVar3 = param_3 - param_7;
        uVar4 = (ulonglong)(longlong)(int)uVar3 >> 0x20;
        uVar5 = local_30 - param_7 >> 0x1f;
        uVar6 = param_3 - local_30 >> 0x1f;
        if (((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) +
            ((local_30 - param_7 ^ uVar5) - uVar5) == (param_3 - local_30 ^ uVar6) - uVar6)
        goto LAB_00f49f8a;
      }
      param_3 = local_30;
      param_4 = local_2c;
    }
    FUN_00410f20(unaff_RBX);
  }
  return local_38;
}

