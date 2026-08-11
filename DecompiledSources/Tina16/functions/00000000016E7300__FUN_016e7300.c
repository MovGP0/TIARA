/* Ghidra address: 016e7300 */
/* Ghidra symbol: FUN_016e7300 */


longlong FUN_016e7300(longlong param_1,char param_2,longlong param_3,longlong param_4,
                     undefined1 param_5,undefined8 param_6,int param_7)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  int local_58;
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_40 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_68 = param_5;
  local_60 = param_6;
  local_58 = param_7;
  FUN_016e2d40(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x60) = *(undefined8 *)(param_4 + 0x7f0);
  local_30 = *(longlong *)(local_res8 + 0x50);
  *(undefined4 *)(local_res8 + 0xa8) = *(undefined4 *)(local_30 + 0x54);
  uVar4 = FUN_00409570((longlong)(*(int *)(local_30 + 0x54) << 4));
  *(undefined8 *)(local_res8 + 0x68) = uVar4;
  uVar4 = FUN_00409570((longlong)(*(int *)(local_30 + 0x54) << 4));
  *(undefined8 *)(local_res8 + 0x70) = uVar4;
  uVar4 = FUN_00409570((longlong)(*(int *)(local_30 + 0x54) * 2));
  *(undefined8 *)(local_res8 + 0x78) = uVar4;
  uVar4 = FUN_00409570((longlong)(*(int *)(local_30 + 0x54) * 2));
  *(undefined8 *)(local_res8 + 0x80) = uVar4;
  if (0 < param_7) {
    uVar4 = FUN_00409570((longlong)(param_7 * 2 * *(int *)(local_30 + 0x54) * 8));
    *(undefined8 *)(local_res8 + 0x88) = uVar4;
    uVar4 = FUN_00409570((longlong)(param_7 * 2 * *(int *)(local_30 + 0x54) * 8));
    *(undefined8 *)(local_res8 + 0x90) = uVar4;
    uVar4 = FUN_00409570((longlong)(param_7 * 0x10));
    *(undefined8 *)(local_res8 + 0x98) = uVar4;
  }
  local_20 = 0;
  iVar5 = *(int *)(local_30 + 0x54);
  local_1c = 0;
  if (-1 < iVar5 + -1) {
    do {
      cVar2 = FUN_016e8490(local_res8,
                           *(undefined8 *)
                            (*(longlong *)(local_30 + 0x60) + (longlong)local_1c * 0x10));
      *(char *)(*(longlong *)(local_res8 + 0x78) + (longlong)local_20) = cVar2;
      if ((cVar2 != '\0') && (local_24 = 0, iVar6 = param_7, -1 < param_7 + -1)) {
        do {
          uVar4 = FUN_01656db0(*(undefined8 *)
                                (*(longlong *)(local_30 + 0x60) + (longlong)local_1c * 0x10),
                               local_24 + 1);
          *(undefined8 *)
           (*(longlong *)(local_res8 + 0x88) + (longlong)(local_20 * param_7 + local_24) * 8) =
               uVar4;
          local_24 = local_24 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      cVar2 = FUN_016e8490(local_res8,
                           *(undefined8 *)
                            (*(longlong *)(local_30 + 0x60) + 8 + (longlong)local_1c * 0x10));
      *(char *)(*(longlong *)(local_res8 + 0x78) + (longlong)(local_20 + 1)) = cVar2;
      if ((cVar2 != '\0') && (local_24 = 0, iVar6 = param_7, -1 < param_7 + -1)) {
        do {
          uVar4 = FUN_01656db0(*(undefined8 *)
                                (*(longlong *)(local_30 + 0x60) + 8 + (longlong)local_1c * 0x10),
                               local_24 + 1);
          *(undefined8 *)
           (*(longlong *)(local_res8 + 0x88) + (longlong)((local_20 + 1) * param_7 + local_24) * 8)
               = uVar4;
          local_24 = local_24 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_20 = local_20 + 2;
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(local_res8 + 0xc0) = 0x4000000000000000;
  if (param_3 != 0) {
    uVar3 = FUN_016ea1b0(param_3,1);
    *(undefined2 *)(local_res8 + 0x38) = uVar3;
    *(undefined1 *)(param_3 + 0x122) = 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

