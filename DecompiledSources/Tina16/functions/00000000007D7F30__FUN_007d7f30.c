/* Ghidra address: 007d7f30 */
/* Ghidra symbol: FUN_007d7f30 */


void FUN_007d7f30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined1 local_6c [16];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_80 = auStack_c8;
  FUN_004b84c0(param_2,&local_54,4);
  FUN_004b84c0(param_2,&local_5c,4);
  local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_58 = FUN_004b6da0(param_2);
  (**(code **)(*local_48 + 0xc0))(local_48,param_2);
  FUN_004b6dc0(param_2,(longlong)(local_58 + local_54));
  local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_40 + 0xc0))(local_40,param_2);
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_30 + 0x88))(local_30,*(undefined4 *)(param_1 + 0x94));
  (**(code **)(*local_30 + 0x70))(local_30,*(undefined4 *)(param_1 + 0x90));
  local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060b9b0(local_38,1);
  (**(code **)(*local_38 + 0x88))(local_38,*(undefined4 *)(param_1 + 0x94));
  (**(code **)(*local_38 + 0x70))(local_38,*(undefined4 *)(param_1 + 0x90));
  local_a8 = *(int *)(param_1 + 0x90);
  FUN_004238d0(local_6c,0,0,*(undefined4 *)(param_1 + 0x94));
  FUN_00614880(param_1);
  iVar1 = (**(code **)(*local_48 + 0x48))();
  iVar1 = iVar1 / *(int *)(param_1 + 0x90);
  local_50 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (local_5c == 0) break;
      iVar2 = (**(code **)(*local_48 + 0x60))();
      iVar2 = iVar2 / *(int *)(param_1 + 0x94);
      local_4c = 0;
      if (-1 < iVar2 + -1) {
        do {
          if (local_5c == 0) break;
          uVar3 = FUN_00609e10(local_30);
          uVar4 = FUN_00609e10(local_48);
          local_a8 = *(int *)(param_1 + 0x90);
          FUN_00423b80(local_90,local_4c * *(int *)(param_1 + 0x94),local_50 * local_a8,
                       *(int *)(param_1 + 0x94));
          FUN_005fead0(uVar3,local_6c,uVar4,local_90);
          uVar3 = FUN_00609e10(local_38);
          uVar4 = FUN_00609e10(local_40);
          local_a8 = *(int *)(param_1 + 0x90);
          FUN_00423b80(local_90,local_4c * *(int *)(param_1 + 0x94),local_50 * local_a8,
                       *(int *)(param_1 + 0x94));
          FUN_005fead0(uVar3,local_6c,uVar4,local_90);
          FUN_007d59d0(param_1,local_30,local_38);
          local_5c = local_5c + -1;
          local_4c = local_4c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_50 = local_50 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_006148c0(param_1);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  return;
}

