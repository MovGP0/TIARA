/* Ghidra address: 00a67e60 */
/* Ghidra symbol: FUN_00a67e60 */


void FUN_00a67e60(longlong param_1,undefined8 param_2,undefined2 *param_3,longlong param_4,
                 undefined8 param_5,longlong param_6,char param_7)

{
  short sVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  int local_30;
  byte local_29;
  undefined8 local_28;
  int local_20;
  char local_1a;
  char local_19;
  
  local_50 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  if (param_6 != 0) {
    local_30 = *(int *)(param_6 + -4);
  }
  local_1a = local_30 == 0;
  puVar3 = auStack_78;
  if (!(bool)local_1a) {
    uVar4 = FUN_00419430(&local_28,&DAT_00a2b798);
    FUN_00a67590(param_6,uVar4);
    local_1a = FUN_00a67670(auStack_78,local_28);
    puVar3 = local_50;
  }
  local_50 = puVar3;
  if (local_1a != '\0') {
    *(longlong *)(param_1 + 8) = param_4;
    *(undefined8 *)(param_1 + 0x40) = param_2;
    FUN_00414ad0(param_1 + 0x18,param_5);
    local_20 = *(int *)(*(longlong *)(param_4 + 0x28) + 8) - *(int *)(param_4 + 8);
    local_29 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            FUN_00a62d70(param_1,0);
            sVar1 = *(short *)(param_1 + 0x10);
          } while (sVar1 == 0x20);
          if (sVar1 != 0x21) break;
          uVar5 = 0;
          if (local_29 != 1) goto code_r0x00a67fee;
          local_29 = 2;
        }
        if (sVar1 == 0x2d) break;
        uVar5 = (ulonglong)(ushort)(sVar1 - 0x3cU);
        if (((ushort)(sVar1 - 0x3cU) != 0) || (local_29 != 0)) goto code_r0x00a67fee;
        local_29 = 1;
      }
      if (local_29 != 2) break;
      local_29 = 3;
    }
    uVar5 = 0;
    if (local_29 == 3) {
      local_29 = 4;
    }
code_r0x00a67fee:
    if (local_29 < 8) {
      bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_29 & 0x1f) & 0xeU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      *(longlong *)(*(longlong *)(param_4 + 0x28) + 8) =
           *(longlong *)(param_4 + 8) + (longlong)local_20;
      *(undefined2 *)(param_1 + 0x10) = 0x3e;
      local_38 = param_4;
    }
LAB_00a68045:
    do {
      uVar2 = *(ushort *)(param_1 + 0x10);
      if (0x3c < uVar2) {
        if (uVar2 == 0x3e) {
LAB_00a6809b:
          FUN_00a62d70(param_1,0);
        }
        else if (uVar2 == 0x40) {
          FUN_00a67d40(auStack_78);
        }
        else {
LAB_00a68199:
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))(*(longlong **)(param_1 + 0x38));
          FUN_00a68710(param_1);
          FUN_00a68280(param_1);
        }
        goto LAB_00a68045;
      }
      if (uVar2 != 0x3c) {
        if (uVar2 != 0) {
          if ((uVar2 != 0x20) && (uVar2 != 0x2d)) goto LAB_00a68199;
          goto LAB_00a6809b;
        }
        goto code_r0x00a681ce;
      }
      local_20 = *(int *)(*(longlong *)(param_4 + 0x28) + 8) - *(int *)(param_4 + 8);
      FUN_00a62d70(param_1,0);
      if ((*(short *)(param_1 + 0x10) == 0x21) || (*(short *)(param_1 + 0x10) == 0x2d)) {
        local_19 = '\0';
        while( true ) {
          FUN_00a62d70(param_1,0);
          sVar1 = *(short *)(param_1 + 0x10);
          if (sVar1 == 0) break;
          if (sVar1 == 0x2d) {
            local_19 = '\x01';
          }
          else if (sVar1 == 0x3e) {
            if (local_19 != '\0') break;
            local_19 = '\0';
          }
          else {
            local_19 = '\0';
          }
        }
        goto LAB_00a68045;
      }
    } while (param_7 != '\0');
    *(longlong *)(*(longlong *)(param_4 + 0x28) + 8) =
         *(longlong *)(param_4 + 8) + (longlong)local_20;
    *(undefined2 *)(param_1 + 0x10) = 0x3c;
    local_40 = param_4;
code_r0x00a681ce:
    *param_3 = *(undefined2 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_00419430(&local_28,&DAT_00a2b798);
  return;
}

