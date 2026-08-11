/* Ghidra address: 0122db90 */
/* Ghidra symbol: FUN_0122db90 */


void FUN_0122db90(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_01229220(param_1);
  *(undefined **)PTR_DAT_020019a0 = PTR_DAT_020021e8;
  *(undefined4 *)PTR_DAT_02001520 = 0;
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b0));
    *(undefined8 *)PTR_DAT_020021e8 = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)PTR_DAT_020021e8,0xc00815182a9930be,0xbf847ae147ae147b,
                         L"Apass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x940));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x10) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x10),0xc082c00000000000,
                         0xc00815182a9930be,L"Astop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x838));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x20) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x20),0x3ff0000000000000,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x7a8));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x30) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x30),
                         *(double *)(PTR_DAT_020021e8 + 0x20) + 1e-09,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wstop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (0 < *(int *)PTR_DAT_02001520) {
      return;
    }
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b0));
    *(undefined8 *)PTR_DAT_020021e8 = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)PTR_DAT_020021e8,0xc00815182a9930be,0xbf847ae147ae147b,
                         L"Apass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x940));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x10) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x10),0xc082c00000000000,
                         0xc00815182a9930be,L"Astop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x838));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x20) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x20),0x3ff0000000000000,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x7a8));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x30) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x30),0x3ff0000000000000,
                         *(double *)(PTR_DAT_020021e8 + 0x20) - 1e-09,L"Wstop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (0 < *(int *)PTR_DAT_02001520) {
      return;
    }
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b0));
    *(undefined8 *)PTR_DAT_020021e8 = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)PTR_DAT_020021e8,0xc00815182a9930be,0xbf847ae147ae147b,
                         L"Apass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x10) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x10),0xc082c00000000000,
                         0xc00815182a9930be,L"Astop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x18) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x18),0xc082c00000000000,
                         0xc00815182a9930be,L"Astop2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (*(double *)(PTR_DAT_020021e8 + 0x18) < *(double *)(PTR_DAT_020021e8 + 0x10) ||
        *(double *)(PTR_DAT_020021e8 + 0x18) == *(double *)(PTR_DAT_020021e8 + 0x10)) {
      *(undefined8 *)(PTR_DAT_020021e8 + 0x10) = *(undefined8 *)(PTR_DAT_020021e8 + 0x18);
    }
    else {
      *(undefined8 *)(PTR_DAT_020021e8 + 0x18) = *(undefined8 *)(PTR_DAT_020021e8 + 0x10);
    }
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x820));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x20) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x20),0x3ff0000000000000,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x828));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x28) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x28),
                         *(double *)(PTR_DAT_020021e8 + 0x20) + 1e-09,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x818));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x30) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x30),0x3ff0000000000000,
                         *(double *)(PTR_DAT_020021e8 + 0x20) - 1e-09,L"Wstop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x830));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x38) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x38),
                         *(double *)(PTR_DAT_020021e8 + 0x28) + 1e-09,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wstop2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (0 < *(int *)PTR_DAT_02001520) {
      return;
    }
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
    *(undefined8 *)PTR_DAT_020021e8 = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)PTR_DAT_020021e8,0xc00815182a9930be,0xbf847ae147ae147b,
                         L"Apass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x720));
    *(undefined8 *)(PTR_DAT_020021e8 + 8) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 8),0xc00815182a9930be,0xbf847ae147ae147b
                         ,L"Apass2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x940));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x10) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x10),0xc082c00000000000,
                         0xc00815182a9930be,L"Astop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (*(double *)(PTR_DAT_020021e8 + 8) < *(double *)PTR_DAT_020021e8 ||
        *(double *)(PTR_DAT_020021e8 + 8) == *(double *)PTR_DAT_020021e8) {
      *(undefined8 *)(PTR_DAT_020021e8 + 8) = *(undefined8 *)PTR_DAT_020021e8;
    }
    else {
      *(undefined8 *)PTR_DAT_020021e8 = *(undefined8 *)(PTR_DAT_020021e8 + 8);
    }
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x820));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x20) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x20),0x3ff0000000000000,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x828));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x28) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x28),
                         *(double *)(PTR_DAT_020021e8 + 0x20) + 1e-09,
                         *(undefined8 *)PTR_DAT_02001fd8,L"Wpass2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x818));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x30) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x30),
                         *(double *)(PTR_DAT_020021e8 + 0x20) + 1e-09,
                         *(double *)(PTR_DAT_020021e8 + 0x28) - 1e-09,L"Wstop1");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x830));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x38) = uVar3;
    iVar1 = FUN_0122f7c0(*(undefined8 *)(PTR_DAT_020021e8 + 0x38),
                         *(double *)(PTR_DAT_020021e8 + 0x30) + 1e-09,
                         *(double *)(PTR_DAT_020021e8 + 0x28) - 1e-09,L"Wstop2");
    *(int *)PTR_DAT_02001520 = *(int *)PTR_DAT_02001520 + iVar1;
    if (0 < *(int *)PTR_DAT_02001520) {
      return;
    }
  }
  *(double *)(PTR_DAT_020021e8 + 0x20) = *(double *)(PTR_DAT_020021e8 + 0x20) * 6.283185307179586;
  *(double *)(PTR_DAT_020021e8 + 0x28) = *(double *)(PTR_DAT_020021e8 + 0x28) * 6.283185307179586;
  *(double *)(PTR_DAT_020021e8 + 0x30) = *(double *)(PTR_DAT_020021e8 + 0x30) * 6.283185307179586;
  *(double *)(PTR_DAT_020021e8 + 0x38) = *(double *)(PTR_DAT_020021e8 + 0x38) * 6.283185307179586;
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x41) {
    *(undefined8 *)PTR_DAT_02001fd8 = 0x4202a05f20000000;
    uVar2 = FUN_01189910(PTR_DAT_020019a0);
    *(undefined4 *)PTR_DAT_02001520 = uVar2;
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x46) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x40) = uVar3;
    *(double *)PTR_DAT_02001fd8 = *(double *)(PTR_DAT_020021e8 + 0x40) / 2.0;
    uVar2 = FUN_0118a140(PTR_DAT_020019a0);
    *(undefined4 *)PTR_DAT_02001520 = uVar2;
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x49) {
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x40) = uVar3;
    *(double *)PTR_DAT_02001fd8 = *(double *)(PTR_DAT_020021e8 + 0x40) / 2.0;
    uVar2 = FUN_0118a3b0(PTR_DAT_020019a0);
    *(undefined4 *)PTR_DAT_02001520 = uVar2;
  }
  if (*(int *)PTR_DAT_02001520 == 0) {
    uVar2 = FUN_007fd7d0(param_1);
    *(undefined4 *)PTR_DAT_02001b40 = uVar2;
    iVar1 = FUN_007fd800(param_1);
    *(int *)PTR_DAT_02001518 = iVar1 + *(int *)(param_1 + 0x9c);
    if (param_2 == '\x01') {
      FUN_00806af0(*(undefined8 *)PTR_DAT_020044a8,*(undefined4 *)PTR_DAT_02001b40);
      FUN_00806b40(*(undefined8 *)PTR_DAT_020044a8,
                   *(int *)PTR_DAT_02001518 - *(int *)(*(longlong *)PTR_DAT_020044a8 + 0x9c));
      FUN_008059a0(*(undefined8 *)PTR_DAT_020044a8);
      FUN_0118c1f0(PTR_DAT_020019a0,*(undefined8 *)PTR_DAT_02005aa0);
    }
  }
  else {
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,L"Wstop-Wpass ERROR",L" ERROR",0x10);
  }
  return;
}

