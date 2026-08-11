/* Ghidra address: 01a86fd0 */
/* Ghidra symbol: FUN_01a86fd0 */


void FUN_01a86fd0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_70 = auStack_e8;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_01aee720(&local_78,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFPictureMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_78);
  local_58 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(local_58 + 0x1f,L"Save diagram as image");
  FUN_00414ad0(local_58 + 0x20,&DAT_01a87828);
  FUN_00724380(local_58,L"tinadiag.emf");
  FUN_00414ad0(local_58 + 0x1c,
               L"Windows Metafile (*.EMF)|*.EMF|Bitmap File (*.BMP)|*.BMP|JPEG File (*.JPG)|*.JPG|GIF File (*.GIF)|*.GIF|PNG File (*.PNG)|*.PNG"
              );
  *(undefined4 *)(local_58 + 0x1b) = 0x116;
  local_58[0x29] = param_1;
  local_58[0x28] = (longlong)FUN_01a86d00;
  cVar1 = (**(code **)(*local_58 + 0xa8))(local_58);
  if (cVar1 != '\0') {
    local_60 = *(longlong *)(param_1 + 0x798);
    local_4c = *(int *)(local_60 + 0x1c) - *(int *)(local_60 + 0x14);
    local_50 = *(int *)(local_60 + 0x20) - *(int *)(local_60 + 0x18);
    iVar2 = FUN_00724300(local_58);
    if (iVar2 < 4) {
      if (iVar2 == 3) {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        (**(code **)(*local_20 + 0x88))(local_20,local_4c);
        (**(code **)(*local_20 + 0x70))(local_20,local_50);
        uVar3 = FUN_00609e10(local_20);
        FUN_01a80e70(param_1,uVar3,local_4c,local_50);
        local_28 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
        (**(code **)(*local_28 + 0x10))(local_28,local_20);
        FUN_00724270(local_58,&local_a0);
        if (local_a0 != 0) {
          FUN_00724270(local_58,&local_a8);
          (**(code **)(*local_28 + 0xb0))(local_28,local_a8);
        }
        FUN_00410f20(local_28);
        FUN_00410f20(local_20);
      }
      else if (iVar2 == 1) {
        local_40 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
        (**(code **)(*local_40 + 0x88))(local_40,local_4c);
        (**(code **)(*local_40 + 0x70))(local_40,local_50);
        local_48 = FUN_006056e0(&PTR_FUN_005f7f40,1,local_40,0);
        FUN_01a80e70(param_1,local_48,local_4c,local_50);
        FUN_00410f20(local_48);
        FUN_00724270(local_58,&local_80);
        if (local_80 != 0) {
          FUN_00724270(local_58,&local_88);
          (**(code **)(*local_40 + 0xb0))(local_40,local_88);
        }
        FUN_00410f20(local_40);
      }
      else if (iVar2 == 2) {
        local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        (**(code **)(*local_20 + 0x88))(local_20,local_4c);
        (**(code **)(*local_20 + 0x70))(local_20,local_50);
        uVar3 = FUN_00609e10(local_20);
        FUN_01a80e70(param_1,uVar3,local_4c,local_50);
        FUN_00724270(local_58,&local_90);
        if (local_90 != 0) {
          FUN_00724270(local_58,&local_98);
          (**(code **)(*local_20 + 0xb0))(local_20,local_98);
        }
        FUN_00410f20(local_20);
      }
    }
    else if (iVar2 == 4) {
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_20 + 0x88))(local_20,local_4c);
      (**(code **)(*local_20 + 0x70))(local_20,local_50);
      uVar3 = FUN_00609e10(local_20);
      FUN_01a80e70(param_1,uVar3,local_4c,local_50);
      local_30 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
      (**(code **)(*local_30 + 0x10))(local_30,local_20);
      FUN_00724270(local_58,&local_b0);
      if (local_b0 != 0) {
        FUN_00724270(local_58,&local_b8);
        (**(code **)(*local_30 + 0xb0))(local_30,local_b8);
      }
      FUN_00410f20(local_30);
      FUN_00410f20(local_20);
    }
    else if (iVar2 == 5) {
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_20 + 0x88))(local_20,local_4c);
      (**(code **)(*local_20 + 0x70))(local_20,local_50);
      uVar3 = FUN_00609e10(local_20);
      FUN_01a80e70(param_1,uVar3,local_4c,local_50);
      local_38 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
      (**(code **)(*local_38 + 0x10))(local_38,local_20);
      FUN_00724270(local_58,&local_c0);
      if (local_c0 != 0) {
        FUN_00724270(local_58,&local_c8);
        (**(code **)(*local_38 + 0xb0))(local_38,local_c8);
      }
      FUN_00410f20(local_38);
      FUN_00410f20(local_20);
    }
  }
  FUN_00410f20(local_58);
  FUN_00414560(&local_c8,10);
  FUN_00414480(&local_78);
  return;
}

