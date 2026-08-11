/* Ghidra address: 006e1900 */
/* Ghidra symbol: FUN_006e1900 */


void FUN_006e1900(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  *(undefined1 *)(param_1 + 0x530) = 1;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x578) = 0;
  puVar1 = auStack_58;
  if (((*(char *)(param_1 + 0x58c) != '\0') &&
      (iVar2 = FUN_006decb0(*(undefined8 *)(param_1 + 0x550)), puVar1 = local_30, 0 < iVar2)) &&
     ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0)) {
    uVar5 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(param_1 + 0x500) = uVar5;
    FUN_006dfcd0(*(undefined8 *)(param_1 + 0x550),uVar5);
    FUN_006dfe00(*(undefined8 *)(param_1 + 0x550),*(undefined8 *)(param_1 + 0x500));
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x500),0);
    *(undefined4 *)(param_1 + 0x528) = 0;
    *(undefined4 *)(param_1 + 0x514) = 0xffffffff;
    local_20 = FUN_006e2470(param_1);
    if (local_20 != 0) {
      uVar3 = FUN_006dd6f0(local_20);
      *(undefined4 *)(param_1 + 0x528) = uVar3;
    }
    FUN_006df690(*(undefined8 *)(param_1 + 0x550));
    if ((*(char *)(param_1 + 0x560) == '\0') ||
       (*(int *)(*(longlong *)(param_1 + 0x568) + 0x10) < 2)) {
      local_20 = FUN_006e2530(param_1);
      if (local_20 != 0) {
        uVar3 = FUN_006dd6f0(local_20);
        *(undefined4 *)(param_1 + 0x514) = uVar3;
      }
    }
    else {
      uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x570) = uVar5;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10);
      local_24 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x568),local_24);
          iVar4 = FUN_006dd6f0(uVar5);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x570),(longlong)iVar4);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x568) + 0x10))(*(longlong **)(param_1 + 0x568));
    }
    FUN_006ded30(*(undefined8 *)(param_1 + 0x550));
    FUN_006df710(*(undefined8 *)(param_1 + 0x550));
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar3 = FUN_006e2390(param_1);
  *(undefined4 *)(param_1 + 0x518) = uVar3;
  FUN_00655750(param_1);
  return;
}

