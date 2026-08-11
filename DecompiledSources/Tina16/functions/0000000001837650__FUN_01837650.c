/* Ghidra address: 01837650 */
/* Ghidra symbol: FUN_01837650 */


void FUN_01837650(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 *local_30;
  
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = (undefined4 *)0x0;
  local_84 = FUN_0181e3e0(param_2);
  FUN_00419260(&local_30,&DAT_01837608,1,(longlong)(local_84 * 2));
  local_88 = 0;
  iVar6 = local_84;
  if (-1 < local_84 + -1) {
    do {
      uVar4 = FUN_0181e3c0(param_2,local_88);
      uVar4 = FUN_0181e3c0(uVar4,0);
      plVar5 = (longlong *)
               FUN_0183a030(*(undefined8 *)(param_1 + 0x100),uVar4,*(undefined8 *)(param_1 + 0x110))
      ;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_50);
      uVar2 = FUN_00462650(&local_50);
      iVar1 = local_88 * 2;
      local_30[iVar1] = uVar2;
      FUN_00410f20(plVar5);
      uVar4 = FUN_0181e3c0(param_2,local_88);
      iVar3 = FUN_0181e3e0(uVar4);
      if (iVar3 == 2) {
        uVar4 = FUN_0181e3c0(param_2,local_88);
        uVar4 = FUN_0181e3c0(uVar4,1);
        plVar5 = (longlong *)
                 FUN_0183a030(*(undefined8 *)(param_1 + 0x100),uVar4,
                              *(undefined8 *)(param_1 + 0x110));
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_68);
        uVar2 = FUN_00462650(&local_68);
        local_30[iVar1 + 1] = uVar2;
        FUN_00410f20(plVar5);
      }
      else {
        local_30[iVar1 + 1] = local_30[iVar1] + -1;
        local_30[iVar1] = 0;
      }
      local_88 = local_88 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_84 == 0) {
    FUN_00419260(&local_30,&DAT_01837608,1,2);
    *local_30 = 0;
    local_30[1] = 0;
    local_84 = 1;
  }
  uVar4 = FUN_00418c90(local_30);
  FUN_0046c750(&local_80,local_30,uVar4,0xc);
  FUN_00461840(param_1 + 0xb8,&local_80);
  uVar4 = FUN_01850d60(&PTR_FUN_01844778,1,0,local_84,*(undefined1 *)(param_1 + 0xb7),
                       *(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  FUN_0184caa0(*(undefined8 *)(param_1 + 0x110),0,*(undefined8 *)(param_1 + 0xa0));
  FUN_00419430(&local_30,&DAT_01837608);
  *(undefined1 *)(param_1 + 0xb7) = 6;
  FUN_00417840(&local_80,&DAT_004013d8,3);
  FUN_00419430(&local_30,&DAT_01837608);
  return;
}

