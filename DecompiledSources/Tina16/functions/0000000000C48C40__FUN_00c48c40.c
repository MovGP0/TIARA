/* Ghidra address: 00c48c40 */
/* Ghidra symbol: FUN_00c48c40 */


void FUN_00c48c40(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00c47980(local_30);
  FUN_00416ba0(&local_38,L"DS_SMCommWaitEvent",*(undefined8 *)(param_1 + 0x18));
  FUN_00416ba0(&local_40,L"DS_SMCommWaitEvent",*(undefined8 *)(param_1 + 0x10));
  FUN_00416cd0(local_50,4,L"SM event name ",local_38,&DAT_00c490e4,local_40);
  FUN_00c4c420(local_50[0]);
  uVar2 = FUN_00416740(local_38);
  uVar3 = thunk_FUN_04116cf8(0x1f0003,0xffffffff,uVar2);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_00416740(local_40);
  uVar4 = thunk_FUN_04116cf8(0x1f0003,0xffffffff,uVar3);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    uVar4 = thunk_FUN_0416e139(local_30,0,0,uVar2);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      iVar1 = thunk_FUN_03ce33a6();
      if (iVar1 == 0xb7) {
        uVar4 = thunk_FUN_04116cf8(0x1f0003,0xffffffff,uVar2);
        *(undefined8 *)(param_1 + 0x58) = uVar4;
        if (*(longlong *)(param_1 + 0x58) == 0) {
          FUN_00c47900(&local_60,0);
          FUN_00416ba0(&local_58,L"Could not open SharedMem Wait Event IN",local_60);
          uVar4 = FUN_0044d490(&PTR_FUN_00472870,1,local_58);
          FUN_004134c0(uVar4);
        }
      }
      else {
        FUN_00c47900(&local_70,0);
        FUN_00416ba0(&local_68,L"Could not create SharedMem Wait Event IN",local_70);
        uVar4 = FUN_0044d490(&PTR_FUN_00472870,1,local_68);
        FUN_004134c0(uVar4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar3 = thunk_FUN_0416e139(local_30,0,0,uVar3);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    if (*(longlong *)(param_1 + 0x60) == 0) {
      iVar1 = thunk_FUN_03ce33a6();
      if (iVar1 == 0xb7) {
        uVar2 = thunk_FUN_04116cf8(0x1f0003,0xffffffff,uVar2);
        *(undefined8 *)(param_1 + 0x60) = uVar2;
        if (*(longlong *)(param_1 + 0x60) == 0) {
          FUN_00c47900(&local_80,0);
          FUN_00416ba0(&local_78,L"Could not open SharedMem Wait Event OUT",local_80);
          uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_78);
          FUN_004134c0(uVar2);
        }
      }
      else {
        FUN_00c47900(&local_90,0);
        FUN_00416ba0(&local_88,L"Could not create SharedMem Wait Event OUT",local_90);
        uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_88);
        FUN_004134c0(uVar2);
      }
    }
  }
  local_d8 = local_38;
  local_d0 = 0x11;
  local_c8 = param_1 + 0x58;
  local_c0 = 0x10;
  local_b8 = local_40;
  local_b0 = 0x11;
  local_a8 = param_1 + 0x60;
  local_a0 = 0x10;
  FUN_00442f70(&local_98,L"SM event handles %s %x / %s %x",&local_d8,3);
  FUN_00c4c420(local_98);
  FUN_00414560(&local_98,10);
  FUN_00414560(&local_40,2);
  return;
}

