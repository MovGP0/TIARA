/* Ghidra address: 00bcb550 */
/* Ghidra symbol: FUN_00bcb550 */


undefined8 * FUN_00bcb550(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  
  local_e0 = 0;
  local_d8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_60 = 0;
  cVar2 = FUN_00bc5d10(param_1);
  if (cVar2 != '\0') {
    FUN_00414480(param_2);
    psVar4 = (short *)(*(longlong *)(param_1 + 0x180) + 2);
    do {
      sVar1 = *psVar4;
      local_58 = ((longlong)psVar4 - *(longlong *)(param_1 + 0x180)) / 2;
      local_50 = &local_58;
      local_48 = 0x10;
      FUN_00bcab00(param_1,&local_60,sVar1);
      local_40 = local_60;
      local_38 = 0x11;
      FUN_00442f70(local_30,L"%2d%s",&local_50,1);
      FUN_00416ad0(param_2,local_30[0]);
      psVar3 = (short *)FUN_00bc8990(param_1,psVar4);
      if (psVar3 == (short *)0x0) {
        FUN_00416ad0(param_2,L" (0)");
      }
      else {
        if (psVar4 < psVar3) {
          iVar5 = (int)(((longlong)psVar3 - (longlong)psVar4) / 2);
        }
        else {
          iVar5 = -(int)(((longlong)psVar4 - (longlong)psVar3) / 2);
        }
        local_58 = ((longlong)psVar4 - *(longlong *)(param_1 + 0x180)) / 2 + (longlong)iVar5;
        local_78 = &local_58;
        local_70 = 0x10;
        FUN_00442f70(&local_68,L" (%d) ",&local_78,0);
        FUN_00416ad0(param_2,local_68);
      }
      psVar4 = psVar4 + 3;
      if (((((sVar1 == 4) || (sVar1 == 0x15)) || (sVar1 == 5)) || ((sVar1 == 0x16 || (sVar1 == 8))))
         || (sVar1 == 0x14)) {
        for (; *psVar4 != 0; psVar4 = psVar4 + 1) {
          FUN_00416780(&local_80,*psVar4);
          FUN_00416ad0(param_2,local_80);
        }
        psVar4 = psVar4 + 1;
      }
      if ((sVar1 == 0x19) || (sVar1 == 0x1a)) {
        iVar5 = 3;
        do {
          FUN_00416780(&local_88,*psVar4);
          FUN_00416ad0(param_2,local_88);
          psVar4 = psVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if ((sVar1 == 0x1c) || (sVar1 == 0x1d)) {
        FUN_0043f750(&local_90,*psVar4);
        FUN_00416cd0(param_2,3,*param_2,&DAT_00bcbaf8,local_90);
        psVar4 = psVar4 + 1;
      }
      if ((sVar1 == 0x12) || (sVar1 == 0x20)) {
        local_50 = (longlong *)CONCAT44(local_50._4_4_,*(undefined4 *)psVar4);
        local_48 = 0;
        local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(psVar4 + 2));
        local_38 = 0;
        FUN_00442f70(&local_98,L"{%d,%d}",&local_50,1);
        FUN_00416ad0(param_2,local_98);
        psVar4 = psVar4 + 4;
      }
      if ((sVar1 == 0x18) || (sVar1 == 0x21)) {
        local_58 = ((longlong)psVar4 - *(longlong *)(param_1 + 0x180)) / 2 + -3 +
                   (longlong)*(int *)(psVar4 + 4);
        local_d0 = &local_58;
        local_c8 = 0x10;
        local_c0 = *(undefined4 *)psVar4;
        local_b8 = 0;
        local_b0 = *(undefined4 *)(psVar4 + 2);
        local_a8 = 0;
        FUN_00442f70(&local_a0,L" -> (%d) {%d,%d}",&local_d0,2);
        FUN_00416ad0(param_2,local_a0);
        psVar4 = psVar4 + 6;
      }
      FUN_00416ad0(param_2,&DAT_00bcbb58);
    } while (sVar1 != 0);
    if (*(short *)(param_1 + 0x124) != 0) {
      FUN_00416780(&local_d8,*(short *)(param_1 + 0x124));
      FUN_00416cd0(param_2,3,*param_2,L"start ",local_d8);
    }
    if (*(short *)(param_1 + 0x126) != 0) {
      FUN_00416ad0(param_2,L"anchored ");
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_004167d0(&local_e0,*(longlong *)(param_1 + 0x128));
      FUN_00416cd0(param_2,3,*param_2,L"must have ",local_e0);
    }
    FUN_00416ad0(param_2,&DAT_00bcbb58);
  }
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_a0,5);
  FUN_00414560(&local_68,2);
  FUN_00414480(local_30);
  return param_2;
}

