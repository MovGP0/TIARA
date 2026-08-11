/* Ghidra address: 016c00d0 */
/* Ghidra symbol: FUN_016c00d0 */


void FUN_016c00d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_488 [32];
  byte *local_468;
  byte *local_460;
  undefined1 local_458 [256];
  undefined1 local_358 [8];
  undefined1 *local_350;
  int local_344;
  uint local_340;
  int local_33c;
  undefined8 local_338;
  byte local_32c;
  char local_32b;
  undefined1 local_32a;
  byte local_329 [256];
  byte local_229 [256];
  byte local_129;
  char local_128;
  undefined1 local_29;
  undefined8 local_28;
  undefined1 local_19;
  
  local_350 = auStack_488;
  uVar3 = FUN_00409570(0x78);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  local_28 = FUN_00409570(0x1428);
  *(undefined1 *)(param_1 + 0x41) = 1;
  local_19 = 1;
  local_33c = *(int *)(*(longlong *)(param_1 + 0xa40) + 0x10);
  local_32b = '\0';
  local_29 = 0;
  while (cVar1 = FUN_016b9d70(param_1), cVar1 == '\0') {
    local_468 = (byte *)((ulonglong)local_468 & 0xffffffffffffff00);
    local_460 = &local_129;
    cVar1 = FUN_016babb0(param_1,1,L"LABEL|REPEAT|ENDREPEAT|FILE",&DAT_016c0954);
    if (cVar1 == '\0') {
      local_32a = FUN_016ba100(param_1,0x2b);
      local_338 = FUN_016bade0(param_1);
      local_468 = (byte *)((ulonglong)local_468 & 0xffffffffffffff00);
      local_460 = &local_129;
      cVar1 = FUN_016babb0(param_1,1,L"GOTO|INCR|DECR",&DAT_016c0954);
      if (cVar1 == '\0') {
        FUN_016ba220(param_1,&local_129,&DAT_016c0a64,1);
        if ((1 < local_129) ||
           ((byte)(local_128 - 0x40U) < 0x20 && (1 << (local_128 - 0x40U & 0x1f) & 0x40040U) != 0))
        {
          FUN_016a4020(*(undefined8 *)(param_1 + 0x10),1,&DAT_016c0a88,0xffffffff);
        }
        FUN_016c0060(auStack_488,&local_129);
        local_358[0] = 0;
        local_468 = &local_129;
        local_460 = (byte *)CONCAT71(local_460._1_7_,local_32a);
        uVar3 = FUN_016a5b60(&PTR_FUN_016a1760,1,local_358,local_338);
        (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))
                  (*(longlong **)(param_1 + 0xa40),uVar3);
      }
      else {
        iVar2 = FUN_00414f50(&local_129,&DAT_016c0a0a,(ulonglong)local_129 + 1);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_00414f50(&local_129,&DAT_016c0a0f,(ulonglong)local_129 + 1), iVar2 == 0)) {
          local_468 = &DAT_016c0954;
          local_460 = (byte *)((ulonglong)local_460 & 0xffffffffffffff00);
          FUN_016ba960(param_1,local_458,1,&PTR_DAT_016c0a20);
          FUN_016baff0(param_1,0x80000001,0x7fffffff);
        }
        else {
          FUN_016ba220(param_1,local_229,"",1);
          local_468 = (byte *)((ulonglong)local_468 & 0xffffffffffffff00);
          local_460 = &local_129;
          cVar1 = FUN_016babb0(param_1,1,L"UNTIL",&DAT_016c0954);
          if (cVar1 == '\0') {
            local_344 = FUN_016baff0(param_1,0xffffffff,0x7fffffff);
            local_468 = &DAT_016c0954;
            local_460 = (byte *)((ulonglong)local_460 & 0xffffffffffffff00);
            FUN_016ba960(param_1,local_458,1,L"TIMES");
            if (local_344 == -1) {
              local_32c = 2;
            }
            else {
              local_32c = 1;
            }
            local_468 = local_229;
            cVar1 = FUN_016bfea0(auStack_488,&local_340,local_329,0xff);
            if (cVar1 == '\0') {
              local_358[0] = 0;
              FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_358,0xffffffff);
            }
            else {
              local_358[0] = 0;
              local_468 = local_329;
              local_460 = (byte *)CONCAT71(local_460._1_7_,local_32a);
              uVar3 = FUN_016a5b60(&PTR_FUN_016a1760,1,local_358,local_338);
              (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))
                        (*(longlong **)(param_1 + 0xa40),uVar3);
              if (local_32c == 1) {
                if (local_32b != '\0') {
                  local_344 = 1;
                }
                FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_340,local_344);
              }
              else {
                if (local_32b == '\0') {
                  local_32b = '\x01';
                  *(uint *)(*(longlong *)(param_1 + 0xa40) + 0x30) = local_340 - local_33c;
                }
                FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_340,1);
              }
            }
          }
          else {
            local_468 = &DAT_016c0954;
            local_460 = (byte *)((ulonglong)local_460 & 0xffffffffffffff00);
            FUN_016ba960(param_1,local_458,1,L"GT|GE|LT|LE");
            FUN_016baff0(param_1,0x80000001,0x7fffffff);
            local_32c = 3;
          }
        }
      }
    }
    else {
      iVar2 = FUN_00414f50(&local_129,&DAT_016c0974,(ulonglong)local_129 + 1);
      if (iVar2 == 0) {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),1,&DAT_016c0974,0xffffffff);
      }
      else {
        iVar2 = FUN_00414f50(&local_129,&DAT_016c0979,(ulonglong)local_129 + 1);
        if (iVar2 == 0) {
          FUN_016ba220(param_1,&local_129,"",1);
          cVar1 = FUN_016bfe00(auStack_488,*(undefined4 *)(*(longlong *)(param_1 + 0xa40) + 0x10),
                               &local_129);
          if (cVar1 == '\0') {
            local_358[0] = 0;
            FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_358,0xffffffff);
          }
          local_29 = 1;
        }
        else {
          iVar2 = FUN_00414f50(&local_129,"\tENDREPEAT",(ulonglong)local_129 + 1);
          if (iVar2 == 0) {
            cVar1 = FUN_016be410(param_1,&local_32c,&local_340,&local_344);
            if (cVar1 == '\0') {
              local_358[0] = 0;
              FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_358,0xffffffff);
            }
            else if (local_32c == 1) {
              if (local_32b != '\0') {
                local_344 = 1;
              }
              FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_340,local_344);
            }
            else {
              if (local_32b == '\0') {
                local_32b = '\x01';
                *(uint *)(*(longlong *)(param_1 + 0xa40) + 0x30) = local_340 - local_33c;
              }
              FUN_016a60b0(*(undefined8 *)(param_1 + 0xa40),local_340,1);
            }
          }
          else {
            local_468 = (byte *)((ulonglong)local_468 & 0xffffffffffffff00);
            local_460 = &local_129;
            cVar1 = FUN_016babb0(param_1,1,L"FOREVER",&DAT_016c0954);
            if (cVar1 == '\0') {
              local_344 = FUN_016baff0(param_1,0xffffffff,0x7fffffff);
              local_468 = &DAT_016c0954;
              local_460 = (byte *)((ulonglong)local_460 & 0xffffffffffffff00);
              FUN_016ba960(param_1,local_458,1,L"TIMES");
              if (local_344 == -1) {
                local_32c = 2;
              }
              else {
                local_32c = 1;
              }
            }
            else {
              local_344 = 0;
              local_32c = 2;
            }
            cVar1 = FUN_016be3c0(param_1,local_32c,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0xa40) + 0x10),local_344);
            if (cVar1 == '\0') {
              local_358[0] = 0;
              FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x13,local_358,0xffffffff);
            }
          }
        }
      }
    }
  }
  FUN_004095f0(*(undefined8 *)(param_1 + 0x48));
  FUN_004095f0(local_28);
  return;
}

