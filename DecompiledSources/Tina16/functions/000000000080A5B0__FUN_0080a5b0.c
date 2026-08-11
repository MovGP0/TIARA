/* Ghidra address: 0080a5b0 */
/* Ghidra symbol: FUN_0080a5b0 */


void FUN_0080a5b0(longlong param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  code *local_78;
  longlong local_70;
  undefined1 local_60 [72];
  
  local_80 = 0;
  if ((*(char *)(param_1 + 0x158) == '\0') && (*PTR_DAT_02004750 == '\0')) {
    local_78 = FUN_0080b490;
    local_70 = param_1;
    uVar4 = FUN_007f98a0(&local_78);
    *(undefined8 *)(param_1 + 0x2d8) = uVar4;
    PTR_thunk_FUN_03e425c0_01e15cd0 = thunk_FUN_03e425c0;
    iVar2 = thunk_FUN_03975e2d(PTR_IMAGE_DOS_HEADER_0200c280,PTR_u_TApplication_01e15d08,local_60);
    if (iVar2 == 0) {
      PTR_IMAGE_DOS_HEADER_01e15ce0 = PTR_IMAGE_DOS_HEADER_0200c280;
      sVar1 = thunk_FUN_03e7f392(&DAT_01e15cc8);
      if (sVar1 == 0) {
        FUN_0041ddd0(&local_80,PTR_PTR_02001d28);
        uVar4 = FUN_0044d490(&PTR_FUN_00472738,1,local_80);
        FUN_004134c0(uVar4);
      }
    }
    uVar4 = FUN_00416740(*(undefined8 *)(param_1 + 0x118));
    iVar2 = thunk_FUN_0410f747(0);
    iVar3 = thunk_FUN_0410f747(1);
    uVar4 = thunk_FUN_0411ba23(0x80,PTR_u_TApplication_01e15d08,uVar4,0x84ca0000,iVar2 / 2,iVar3 / 2
                               ,0,0,0,0,PTR_IMAGE_DOS_HEADER_0200c280,0);
    *(undefined8 *)(param_1 + 0x2d0) = uVar4;
    *(undefined1 *)(param_1 + 0x158) = 1;
    if ((5 < *(int *)PTR_DAT_02001bd8) ||
       ((*(int *)PTR_DAT_02001bd8 == 5 && (0 < *(int *)PTR_DAT_02003a08)))) {
      WTSRegisterSessionNotification(uVar4,0);
    }
    if ((6 < *(int *)PTR_DAT_02001bd8) ||
       ((*(int *)PTR_DAT_02001bd8 == 6 && (-1 < *(int *)PTR_DAT_02003a08)))) {
      BufferedPaintInit();
    }
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x2d0),0xfffffffc,*(undefined8 *)(param_1 + 0x2d8))
    ;
    if (*PTR_DAT_02003210 != '\0') {
      uVar4 = FUN_0080bf20(param_1);
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x2d0),0x80,1,uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x2d0);
      uVar5 = FUN_0080bf20(param_1);
      thunk_FUN_03b61ef5(uVar4,0xfffffff2,uVar5);
    }
    uVar4 = thunk_FUN_0417c6e9(*(undefined8 *)(param_1 + 0x2d0),0);
    thunk_FUN_0413e530(uVar4,0xf030,0);
    thunk_FUN_0413e530(uVar4,0xf000,0);
    if (*PTR_DAT_02003210 != '\0') {
      thunk_FUN_0413e530(uVar4,0xf010,0);
    }
  }
  FUN_00414480(&local_80);
  return;
}

