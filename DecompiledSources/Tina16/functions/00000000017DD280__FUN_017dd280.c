/* Ghidra address: 017dd280 */
/* Ghidra symbol: FUN_017dd280 */


void FUN_017dd280(longlong param_1,char param_2,int param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  char local_29;
  
  if (*(char *)(param_1 + 0x18) == '\x02') {
    FUN_004095f0(*(undefined8 *)(param_1 + 0xd0));
    if (param_2 == '\0') {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xa8) * 8;
    }
    else {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xa8) << 4;
    }
    uVar5 = FUN_00409570((longlong)*(int *)(param_1 + 0xac));
    *(undefined8 *)(param_1 + 0xd0) = uVar5;
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1c8));
    iVar4 = (*(int *)(param_1 + 8) - *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) + -1;
    iVar6 = iVar4 * 8;
    *(int *)(param_1 + 0xb8) = iVar6;
    if (*(char *)(param_1 + 0x94) == '\0') {
      *(int *)(param_1 + 0xb4) = iVar6;
    }
    else {
      *(int *)(param_1 + 0xb4) = iVar4 * 0x10;
    }
    uVar5 = FUN_00409570((longlong)(param_3 * *(int *)(param_1 + 0xb4)));
    *(undefined8 *)(param_1 + 0x1c8) = uVar5;
    *(int *)(param_1 + 0xb0) = param_3;
    local_44 = -1;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x2d8);
    local_4c = 1;
    if (0 < iVar6) {
      do {
        lVar1 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x2b0) + -8 + (longlong)local_4c * 8
                 );
        local_48 = 1;
        local_40 = lVar1;
        for (uVar7 = (uint)*(byte *)(lVar1 + 4); uVar7 != 0; uVar7 = uVar7 - 1) {
          pcVar2 = *(char **)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)local_48 * 8);
          local_29 = *pcVar2;
          if (local_29 == '\x1b') {
            local_44 = local_44 + 1;
          }
          lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)local_48 * 8);
          local_68 = local_44;
          FUN_017dd1b0(auStack_88,*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)(lVar3 + 0x60),
                       *(undefined4 *)(pcVar2 + 0x68));
          local_48 = local_48 + 1;
        }
        if (*(char *)(lVar1 + 0x11c) != '\0') {
          (**(code **)(lVar1 + 0xf8))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd8),local_40,param_2,
                     *(undefined8 *)(lVar1 + 0x60));
        }
        local_4c = local_4c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00dfac90(*(undefined8 *)(param_1 + 0x10));
    FUN_00dfa7c0(*(undefined8 *)(param_1 + 0x10));
    FUN_00dfaa30(*(undefined8 *)(param_1 + 0x10));
    FUN_00dfaeb0(*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x50c) != '\0') {
      local_68 = 0xffffffff;
      FUN_017dd1b0(auStack_88,*(undefined8 *)(lVar1 + 0x510),*(undefined8 *)(lVar1 + 0x518),
                   *(undefined4 *)(lVar1 + 0x520));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x528) != '\0') {
      local_68 = 0xffffffff;
      FUN_017dd1b0(auStack_88,*(undefined8 *)(lVar1 + 0x530),*(undefined8 *)(lVar1 + 0x538),
                   *(undefined4 *)(lVar1 + 0x540));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x548) != '\0') {
      local_68 = 0xffffffff;
      FUN_017dd1b0(auStack_88,*(undefined8 *)(lVar1 + 0x550),*(undefined8 *)(lVar1 + 0x558),
                   *(undefined4 *)(lVar1 + 0x560));
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x568) != '\0') {
      local_68 = 0xffffffff;
      FUN_017dd1b0(auStack_88,*(undefined8 *)(lVar1 + 0x570),*(undefined8 *)(lVar1 + 0x578),
                   *(undefined4 *)(lVar1 + 0x580));
    }
  }
  return;
}

