/* Ghidra address: 01333680 */
/* Ghidra symbol: FUN_01333680 */


longlong FUN_01333680(longlong param_1,longlong param_2,char param_3)

{
  double *pdVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  longlong local_b0;
  longlong local_a8;
  int local_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60 [6];
  
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  if (param_3 != '\0') {
    *(undefined2 *)(param_1 + 0x18) = 0;
  }
  FUN_01332120(param_1,*(undefined8 *)(param_1 + 0x60),1);
  dVar7 = *(double *)(param_1 + 0x60) * 1000.0;
  local_70 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_78 = FUN_0132c700(10);
  local_80 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_88 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_90 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),10);
  FUN_0132e510(local_90);
  local_60[0] = param_2;
  local_a8 = FUN_01332f10(param_1,2);
  if (local_a8 != 0) {
    local_70 = FUN_0132e6f0(&local_70,local_90,0);
    FUN_0132d960(local_70,local_a8);
  }
  uVar2 = (uint)(local_a8 != 0);
  local_b0 = FUN_013333e0(param_1,local_60[0]);
  local_68 = FUN_01332f10(param_1,2);
  if (local_68 != 0) {
    local_70 = FUN_0132e6f0(&local_70,local_90,uVar2);
    FUN_0132d960(local_70,local_68);
    uVar2 = (uint)((ulonglong)(longlong)(int)(uVar2 + 1) % 10);
  }
  dVar5 = (double)FUN_013324a0(param_1,local_68,local_a8);
  FUN_0132d960(local_a8,local_68);
  FUN_0132cce0(&local_68);
  iVar3 = 0;
  while ((((*(double *)(param_1 + 0x60) <= dVar5 &&
           ((int)(uint)*(ushort *)(param_1 + 0x18) < *(int *)(param_1 + 0x68))) &&
          (*(char *)(*(longlong *)(param_1 + 0x148) + 0x49c) != '\x01')) &&
         (pdVar1 = (double *)(*(longlong *)(param_1 + 0x148) + 0x428),
         *pdVar1 <= *(double *)(param_1 + 200) && *(double *)(param_1 + 200) != *pdVar1))) {
    if ((local_60[0] != param_2) && (local_60[0] != local_b0)) {
      FUN_0132cce0(local_60);
    }
    local_60[0] = local_b0;
    local_b0 = FUN_013333e0(param_1,local_b0);
    local_68 = FUN_01332f10(param_1,2);
    FUN_013324a0(param_1,local_68,local_a8);
    if ((local_a8 == 0) && (local_68 != 0)) {
      local_a8 = local_68;
      local_68 = 0;
    }
    else if (local_68 != 0) {
      iVar3 = iVar3 + 1;
      local_70 = FUN_0132e6f0(&local_70,local_90,uVar2);
      FUN_0132d960(local_70,local_68);
      uVar2 = (int)(uVar2 + 1) % 10;
      FUN_0132d960(local_a8,local_68);
      FUN_0132cce0(&local_68);
    }
    if ((iVar3 < 0xb) || (iVar3 % 10 != 0)) {
      dVar5 = *(double *)(param_1 + 0x60) * 10.0;
    }
    else {
      uVar4 = (uint)*(ushort *)(param_1 + 0x28);
      local_9c = 0;
      if (-1 < (int)(uVar4 - 1)) {
        do {
          local_78 = FUN_0132e5a0(&local_78,local_90,local_9c);
          uVar6 = FUN_0132dcd0(local_78);
          FUN_0132dbe0(local_80,local_9c,uVar6);
          local_9c = local_9c + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      dVar5 = (double)FUN_013324a0(param_1,local_80,local_88);
      dVar7 = (double)FUN_00b90650(dVar7,dVar5);
      FUN_0132d960(local_88,local_80);
    }
  }
  if ((local_60[0] != param_2) && (local_60[0] != local_b0)) {
    FUN_0132cce0(local_60);
  }
  FUN_0132cce0(&local_80);
  FUN_0132cce0(&local_88);
  FUN_0132cce0(&local_70);
  FUN_0132cce0(&local_78);
  FUN_0132e400(&local_90);
  *(double *)(param_1 + 0x88) = dVar5;
  return local_b0;
}

