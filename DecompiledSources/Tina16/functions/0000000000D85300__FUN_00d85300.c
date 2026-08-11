/* Ghidra address: 00d85300 */
/* Ghidra symbol: FUN_00d85300 */


byte FUN_00d85300(longlong param_1,byte param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  byte local_79;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60 [2];
  ushort local_4f;
  char local_30;
  
  puVar9 = local_60;
  for (lVar8 = 7; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *param_3;
    param_3 = param_3 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004179d0(local_60,&DAT_00d627e8);
  plVar4 = (longlong *)0x0;
  iVar2 = FUN_00416db0(param_6,L"default");
  if (iVar2 != 0) {
    plVar4 = (longlong *)FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_6);
  }
  if (plVar4 == (longlong *)0x0) {
    if (param_2 < 3) {
      if (param_2 == 2) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      }
      else if (param_2 == 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      }
      else {
        if (param_2 != 1) goto LAB_00d853f5;
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
      }
    }
    else if (param_2 == 4) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x10);
    }
    else if (param_2 == 6) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0x100);
    }
    else {
LAB_00d853f5:
      plVar4 = (longlong *)0x0;
    }
  }
  if (plVar4 == (longlong *)0x0) {
    local_79 = FUN_00d805c0(param_1,param_2,local_60,param_4,param_5,param_6);
    goto code_r0x00d85954;
  }
  (**(code **)(*plVar4 + 0x98))(plVar4,0);
  if ((local_4f & 0x40) != 0) {
    (**(code **)(*plVar4 + 0x98))(plVar4,2);
  }
  if ((local_4f & 0x10) != 0) {
    (**(code **)(*plVar4 + 0x98))(plVar4,3);
  }
  if ((local_4f & 0x100) != 0) {
    (**(code **)(*plVar4 + 0x98))(plVar4,4);
  }
  (**(code **)(*plVar4 + 0x90))(plVar4,local_4f);
  FUN_00d77b90(plVar4,local_60);
  FUN_00d76870(plVar4);
  if (local_30 == '\0') {
    local_6c = param_5;
    local_70 = param_4;
    lVar8 = FUN_00d77750(plVar4,&local_70);
    uVar5 = 0;
    if (lVar8 != 0) {
      if (*(byte *)(lVar8 + 0x79) < 8) {
        uVar3 = (int)CONCAT71((int7)((ulonglong)lVar8 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
        bVar10 = (uVar3 & 0xc) != 0;
        uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
      }
      else {
        uVar5 = 0;
        bVar10 = false;
      }
      if (bVar10) {
        local_79 = 1;
        goto code_r0x00d85954;
      }
    }
    if (lVar8 != 0) {
      if (*(byte *)(lVar8 + 0x79) < 8) {
        bVar10 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f) & 0x10U)
                 != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        local_79 = 3;
        goto code_r0x00d85954;
      }
    }
    if (lVar8 != 0) {
      cVar1 = FUN_004113d0(lVar8,&PTR_FUN_00d60198);
      if (cVar1 != '\0') {
        bVar7 = *(byte *)(lVar8 + 0x140);
        if (bVar7 < 6) {
          if (bVar7 == 5) {
            local_79 = 0xe;
            goto code_r0x00d85954;
          }
          if (bVar7 == 1) {
            local_79 = 0xb;
            goto code_r0x00d85954;
          }
          if (bVar7 == 3) {
            local_79 = 0xd;
            goto code_r0x00d85954;
          }
          if (bVar7 == 4) {
            local_79 = 0xe;
            goto code_r0x00d85954;
          }
        }
        else {
          if (bVar7 == 6) {
            local_79 = 0xf;
            goto code_r0x00d85954;
          }
          if (bVar7 == 7) {
            local_79 = 0xf;
            goto code_r0x00d85954;
          }
          if (bVar7 == 8) {
            local_79 = 0x10;
            goto code_r0x00d85954;
          }
        }
        local_79 = FUN_00d805c0(param_1,param_2,local_60,param_4,param_5,param_6);
        goto code_r0x00d85954;
      }
    }
    local_79 = FUN_00d805c0(param_1,param_2,local_60,param_4,param_5,param_6);
    goto code_r0x00d85954;
  }
  local_64 = param_5;
  local_68 = param_4;
  lVar8 = FUN_00d77750(plVar4,&local_68);
  uVar5 = 0;
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0x79) < 8) {
      uVar3 = (int)CONCAT71((int7)((ulonglong)lVar8 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
      bVar10 = (uVar3 & 0xc) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 1;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0x79) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
      bVar10 = (uVar3 & 0x10) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 3;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0x79) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
      bVar10 = (uVar3 & 0x20) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 2;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0x79) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
      bVar10 = (uVar3 & 0x40) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 4;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    if (*(byte *)(lVar8 + 0x79) < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar8 + 0x79) & 0x1f);
      bVar10 = (uVar3 & 0x80) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 5;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    bVar7 = *(char *)(lVar8 + 0x79) - 8;
    if (bVar7 < 8) {
      uVar3 = (int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar7 & 0x1f);
      bVar10 = (uVar3 & 8) != 0;
      uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar10);
    }
    else {
      uVar5 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 10;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    bVar7 = *(char *)(lVar8 + 0x79) - 8;
    if (bVar7 < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar7 & 0x1f) & 4U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_79 = 9;
      goto code_r0x00d85954;
    }
  }
  if (lVar8 != 0) {
    cVar1 = FUN_004113d0(lVar8,&PTR_FUN_00d60198);
    if (cVar1 != '\0') {
      local_4f = 0;
      bVar7 = *(byte *)(lVar8 + 0x140);
      if (bVar7 < 6) {
        if (bVar7 == 5) {
          local_79 = 0xe;
          goto code_r0x00d85954;
        }
        if (bVar7 == 1) {
          local_79 = 0xb;
          goto code_r0x00d85954;
        }
        if (bVar7 == 3) {
          local_79 = 0xd;
          goto code_r0x00d85954;
        }
        if (bVar7 == 4) {
          local_79 = 0xe;
          goto code_r0x00d85954;
        }
      }
      else {
        if (bVar7 == 6) {
          local_79 = 0xf;
          goto code_r0x00d85954;
        }
        if (bVar7 == 7) {
          local_79 = 0xf;
          goto code_r0x00d85954;
        }
        if (bVar7 == 8) {
          local_79 = 0x10;
          goto code_r0x00d85954;
        }
      }
      uVar6 = FUN_00d805c0(param_1,param_2,local_60,param_4,param_5,param_6);
      local_79 = (byte)uVar6;
      if (local_79 < 8) {
        bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_79 & 0x1f) & 0x3cU) != 0;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        local_79 = 0;
      }
      goto code_r0x00d85954;
    }
  }
  local_4f = 0;
  uVar6 = FUN_00d805c0(param_1,param_2,local_60,param_4,param_5,param_6);
  local_79 = (byte)uVar6;
  if (local_79 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (local_79 & 0x1f) & 0x3cU) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    local_79 = 0;
  }
code_r0x00d85954:
  FUN_00417740(local_60,&DAT_00d627e8);
  return local_79;
}

