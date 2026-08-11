/* Ghidra address: 01c034e0 */
/* Ghidra symbol: FUN_01c034e0 */


void FUN_01c034e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  byte local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  if (*(char *)(param_1 + 0x490) == '\0') {
    return;
  }
  local_5d = (*(char *)(param_1 + 0x492) * '\x03' + *(char *)(param_1 + 0x491) +
             *(char *)(param_1 + 0x491) * '\x03') - 3;
  lVar3 = FUN_01c03e40(param_1);
  local_44 = *(undefined4 *)(lVar3 + 0x8c);
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    local_48 = FUN_00635930(local_44,0xffffffce);
    local_4c = FUN_00635840(local_44,0x13);
  }
  else {
    uVar4 = FUN_00781840();
    local_48 = FUN_007793c0(uVar4,0xff000010);
    uVar4 = FUN_00781840();
    local_4c = FUN_007793c0(uVar4,0xff000014);
  }
  if (local_5d < 6) {
    if (local_5d == 5) {
LAB_01c03635:
      local_58 = local_44;
      local_5c = local_44;
      local_50 = local_48;
      local_54 = local_4c;
    }
    else if (local_5d < 2) {
      local_58 = local_44;
      local_5c = local_44;
      local_50 = local_4c;
      local_54 = local_48;
    }
    else {
      if (local_5d == 3) goto LAB_01c03635;
      if (local_5d != 4) goto LAB_01c036da;
      uVar2 = FUN_00635840(local_44,0x13);
      local_58 = FUN_00635930(uVar2,0xffffffe2);
      local_5c = local_48;
      local_50 = local_4c;
      local_54 = FUN_00635930(local_44,0xffffffe7);
    }
  }
  else if (local_5d == 7) {
    local_58 = local_4c;
    local_5c = local_48;
    local_50 = local_48;
    local_54 = local_4c;
  }
  else if (local_5d == 8) {
    local_58 = local_48;
    local_5c = local_4c;
    local_50 = local_4c;
    local_54 = local_48;
  }
  else if (local_5d == 0xb) {
    local_58 = local_48;
    local_5c = local_4c;
    local_50 = local_48;
    local_54 = local_4c;
  }
  else {
LAB_01c036da:
    local_58 = local_44;
    local_5c = local_44;
    local_50 = local_44;
    local_54 = local_44;
  }
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar4,&local_30);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar4,&local_40);
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar4,&local_40,2);
  FUN_00423b50(&local_30,-local_40,-local_3c);
  local_88 = local_24;
  thunk_FUN_041a27b3(param_2,local_30,local_2c,local_28);
  FUN_00423b50(&local_40,-local_40,-local_3c);
  local_20 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),1);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if ((*(byte *)(param_1 + 0x490) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
      if (*(byte *)(param_1 + 0x492) < 8) {
        bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x492) & 0x1f) & 6U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) goto LAB_01c03883;
      if (*(char *)(param_1 + 0x492) == '\0') {
        if (*(byte *)(param_1 + 0x491) < 8) {
          bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x491) & 0x1f) & 6U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) goto LAB_01c03883;
      }
    }
  }
  else {
LAB_01c03883:
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),local_50);
    if ((*(byte *)(param_1 + 0x490) & 2) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_38,local_3c);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_40 + -1,local_3c);
    }
    if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_40,local_3c);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_40,local_34);
    }
  }
  if ((*(byte *)(param_1 + 0x490) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
      if (*(byte *)(param_1 + 0x492) < 8) {
        bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x492) & 0x1f) & 6U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        if (*(byte *)(param_1 + 0x491) < 8) {
          bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x491) & 0x1f) & 6U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) goto LAB_01c039da;
      }
    }
  }
  else {
LAB_01c039da:
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),local_58);
    if ((*(byte *)(param_1 + 0x490) & 2) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c + 1);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_3c + 1);
    }
    if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_3c + 1);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_34 + -2);
    }
  }
  if ((*(byte *)(param_1 + 0x490) & 8) == 0) {
    if ((*(byte *)(param_1 + 0x490) & 4) != 0) {
      if (*(byte *)(param_1 + 0x492) < 8) {
        bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x492) & 0x1f) & 6U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) goto LAB_01c03b5e;
      if (*(char *)(param_1 + 0x492) == '\0') {
        if (*(byte *)(param_1 + 0x491) < 8) {
          bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x491) & 0x1f) & 6U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) goto LAB_01c03b5e;
      }
    }
  }
  else {
LAB_01c03b5e:
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),local_54);
    if ((*(byte *)(param_1 + 0x490) & 4) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_34 + -1);
    }
    if ((*(byte *)(param_1 + 0x490) & 8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
                (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_34 + -1);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
                (*(longlong **)(param_1 + 0x4b0),local_40 + -1,local_34 + -1);
    }
  }
  if ((*(byte *)(param_1 + 0x490) & 8) == 0) {
    if ((*(byte *)(param_1 + 0x490) & 4) == 0) goto code_r0x01c03daa;
    if (*(byte *)(param_1 + 0x492) < 8) {
      bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x492) & 0x1f) & 6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x01c03daa;
    if (*(byte *)(param_1 + 0x491) < 8) {
      bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x491) & 0x1f) & 6U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x01c03daa;
  }
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),local_5c);
  if ((*(byte *)(param_1 + 0x490) & 4) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
              (*(longlong **)(param_1 + 0x4b0),local_38 + -2,local_3c + 1);
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
              (*(longlong **)(param_1 + 0x4b0),local_38 + -2,local_34 + -2);
  }
  if ((*(byte *)(param_1 + 0x490) & 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
              (*(longlong **)(param_1 + 0x4b0),local_38 + -2,local_34 + -2);
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
              (*(longlong **)(param_1 + 0x4b0),local_40,local_34 + -2);
  }
code_r0x01c03daa:
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_20);
  return;
}

