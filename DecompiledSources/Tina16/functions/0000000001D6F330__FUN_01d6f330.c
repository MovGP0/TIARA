/* Ghidra address: 01d6f330 */
/* Ghidra symbol: FUN_01d6f330 */


void FUN_01d6f330(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  char local_59;
  longlong local_58;
  byte local_49;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_68 = param_1;
  local_59 = param_3;
  local_58 = param_2;
  FUN_016ee260(param_1,&local_40,8,0);
  local_38 = FUN_016ebdc0(local_68);
  lVar1 = *local_40;
  local_30 = lVar1;
  lVar4 = FUN_0041f930();
  *(undefined8 *)(lVar4 + 0x280) = 0x4014000000000000;
  cVar5 = *(char *)(lVar1 + 0x10);
  local_49 = 1;
  for (; cVar5 != '\0'; cVar5 = cVar5 + -1) {
    lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + -0x228 + (ulonglong)local_49 * 0x228);
    (**(code **)(*(longlong *)(lVar4 + 8) + 0x10))(lVar4,local_68,local_58,local_59);
    local_49 = local_49 + 1;
  }
  cVar5 = *(char *)(lVar1 + 0x10);
  local_49 = 1;
  for (; cVar5 != '\0'; cVar5 = cVar5 + -1) {
    uVar7 = (ulonglong)local_49;
    local_78 = 0;
    uVar8 = FUN_016ee810(local_68,*(undefined8 *)(local_58 + 0x118),
                         *(undefined1 *)
                          (*(longlong *)(*(longlong *)(lVar1 + 0x18) + -0x228 + uVar7 * 0x228) + 2),
                         0);
    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + -8 + uVar7 * 8) = uVar8;
    local_49 = local_49 + 1;
  }
  if (*(int *)(local_30 + 0x54) == 1) {
    sVar2 = FUN_01d6f270(auStack_98,0,*(undefined4 *)(lVar1 + 0x54));
    *(int *)(lVar1 + 0x5c) = (int)sVar2;
  }
  else {
    sVar2 = *(short *)(local_30 + 0x54);
    sVar6 = 0;
    if (-1 < (short)(sVar2 + -1)) {
      do {
        sVar3 = FUN_01d6f270(auStack_98,(longlong)sVar6,*(undefined4 *)(lVar1 + 0x54));
        *(int *)(lVar1 + 0x5c + (longlong)sVar6 * 4) = (int)sVar3;
        sVar6 = sVar6 + 1;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
    }
  }
  if (local_59 == '\x01') {
    sVar2 = *(short *)(lVar1 + 0x54);
    sVar6 = 0;
    if (-1 < (short)(sVar2 + -1)) {
      do {
        local_78 = CONCAT44(local_78._4_4_,3);
        FUN_015f7500(local_38,(longlong)sVar6,*(undefined4 *)(lVar1 + 0x5c + (longlong)sVar6 * 4),
                     *(undefined4 *)(lVar1 + 0x54));
        sVar6 = sVar6 + 1;
        sVar2 = sVar2 + -1;
      } while (sVar2 != 0);
    }
    uVar8 = FUN_019a45d0();
    uVar8 = FUN_0198d430(uVar8);
    FUN_01d04aa0(*(undefined8 *)(lVar1 + 0x38),uVar8);
  }
  local_78 = 0;
  FUN_016ed320(local_68,*(undefined1 *)(*local_40 + 1),0,0x3f1a36e2eb1c432d);
  return;
}

