/* Ghidra address: 00a5cdc0 */
/* Ghidra symbol: FUN_00a5cdc0 */


void FUN_00a5cdc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  undefined **ppuVar6;
  bool bVar7;
  undefined4 local_34;
  byte local_2d;
  undefined4 local_2c;
  
  if (DAT_020146f0 == (longlong *)0x0) {
    DAT_020146f0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    cVar5 = '\0';
    ppuVar6 = &PTR_u_font_family_01e75688;
    do {
      (**(code **)(*DAT_020146f0 + 0x80))(DAT_020146f0,*ppuVar6,cVar5);
      cVar5 = cVar5 + '\x01';
      ppuVar6 = ppuVar6 + 1;
    } while (cVar5 != 'Q');
    (**(code **)(*DAT_020146f0 + 0x148))(DAT_020146f0);
  }
  iVar2 = (**(code **)(*DAT_020146f0 + 0xb0))(DAT_020146f0,param_3);
  bVar7 = false;
  if (-1 < iVar2) {
    if (DAT_020146f0 == (longlong *)0x0) {
      DAT_020146f0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      cVar5 = '\0';
      ppuVar6 = &PTR_u_font_family_01e75688;
      do {
        (**(code **)(*DAT_020146f0 + 0x80))(DAT_020146f0,*ppuVar6,cVar5);
        cVar5 = cVar5 + '\x01';
        ppuVar6 = ppuVar6 + 1;
      } while (cVar5 != 'Q');
      (**(code **)(*DAT_020146f0 + 0x148))(DAT_020146f0);
    }
    uVar3 = (**(code **)(*DAT_020146f0 + 0x30))(DAT_020146f0,iVar2);
    if ((byte)uVar3 < 0x48) {
      bVar7 = ((byte)(&DAT_00a5d0f8)[(longlong)(uVar3 & 0x7f) >> 3] >> (uVar3 & 7) & 1) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      local_2d = (byte)uVar3;
    }
  }
  if (bVar7) {
    local_2c = 0xffffffff;
    cVar5 = (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_2c);
    if (cVar5 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_2c);
    }
    else {
      lVar4 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      *(longlong *)(lVar4 + 8) = param_1[0x11];
    }
    if (local_2d == 7) {
      cVar1 = FUN_00a602d0(param_4,0,&local_34);
      if (cVar1 != '\0') {
        iVar2 = FUN_00416db0(param_2,L":link");
        if (iVar2 == 0) {
          FUN_00a5d280(param_1,L"hover",local_34);
          FUN_00a5d280(param_1,L"visited",local_34);
        }
        else {
          iVar2 = FUN_00416db0(param_2,L":visited");
          if (iVar2 == 0) {
            FUN_00a5d280(param_1,L"hover",local_34);
          }
        }
      }
    }
    FUN_00a5c220(lVar4,local_2d,param_4,param_5);
    if (cVar5 == '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,param_2,lVar4);
    }
    iVar2 = FUN_004170c0(L":hover",param_2,1);
    if (0 < iVar2) {
      (**(code **)(*param_1 + 0x158))(param_1,1);
    }
    iVar2 = FUN_00416db0(param_2,&DAT_00a5d198);
    if (iVar2 == 0) {
      FUN_00a5cdc0(param_1,L"::link",param_3,param_4,param_5);
    }
    if ((char)param_1[0x12] != '\0') {
      iVar2 = FUN_00416db0(param_2,L"body");
      if ((iVar2 == 0) && (local_2d == 7)) {
        FUN_00a5cbd0(param_1,lVar4);
      }
    }
  }
  return;
}

