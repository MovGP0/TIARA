/* Ghidra address: 0045ca30 */
/* Ghidra symbol: FUN_0045ca30 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ca30(void)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_188 [40];
  undefined4 local_160;
  int local_15c;
  int local_158 [3];
  int local_14c;
  undefined4 local_148;
  ushort local_40;
  ushort local_3e;
  char local_3a;
  _union_552 local_38 [12];
  
  DAT_0200c644 = DAT_0200c644 + -1;
  if (DAT_0200c644 == -1) {
    FUN_0040d200(local_158 + 1,0x11c,0);
    local_158[1] = 0x11c;
    thunk_FUN_03ed3ad2(local_158 + 1);
    DAT_0200c638 = 0;
    DAT_0200c624 = local_158[2];
    DAT_0200c628 = local_14c;
    DAT_0200c620 = local_148;
    DAT_0200c63c = (uint)local_40;
    _DAT_0200c640 = (uint)local_3e;
    FUN_0040d200(local_38,0x30,0);
    cVar1 = FUN_0045cdf0(5,1);
    if (cVar1 != '\0') {
      GetNativeSystemInfo((LPSYSTEM_INFO)&local_38[0].s);
    }
    DAT_0200c61c = (&DAT_01dc3f48)[local_38[0].s.wProcessorArchitecture == 9];
    if ((6 < DAT_0200c624) || ((DAT_0200c624 == 6 && (1 < DAT_0200c628)))) {
      cVar1 = FUN_0044f210(L"kernel32.dll",local_158,&local_15c,&local_160);
      if (cVar1 == '\0') {
        cVar1 = FUN_0044ef10(local_158,&local_15c);
        if (cVar1 != '\0') {
          DAT_0200c624 = local_158[0];
          DAT_0200c628 = local_15c;
        }
      }
      else {
        DAT_0200c624 = local_158[0];
        DAT_0200c628 = local_15c;
        DAT_0200c620 = local_160;
      }
    }
    FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02005430);
    if (DAT_0200c624 == 5) {
      if (DAT_0200c628 == 0) {
        FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02005af0);
      }
      else if (DAT_0200c628 == 1) {
        FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02003f10);
      }
      else if (DAT_0200c628 == 2) {
        if ((local_3a == '\x01') && (local_38[0].s.wProcessorArchitecture == 9)) {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02003f10);
        }
        else {
          iVar2 = thunk_FUN_0410f747(0x59);
          if (iVar2 == 0) {
            FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02001358);
          }
          else {
            FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02004f60);
          }
        }
      }
    }
    else if (DAT_0200c624 == 6) {
      if (DAT_0200c628 == 0) {
        if (local_3a == '\x01') {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_020038c0);
        }
        else {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02004568);
        }
      }
      else if (DAT_0200c628 == 1) {
        if (local_3a == '\x01') {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02005af8);
        }
        else {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_020036a0);
        }
      }
      else if (DAT_0200c628 == 2) {
        if (local_3a == '\x01') {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_020012b8);
        }
        else {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02001500);
        }
      }
      else if (DAT_0200c628 == 3) {
        cVar1 = FUN_0045c9d0(auStack_188);
        if (cVar1 == '\0') {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02004ef0);
        }
        else {
          FUN_0041ddd0(&DAT_0200c630,PTR_PTR_020050c0);
        }
      }
    }
    else if ((DAT_0200c624 == 10) && (DAT_0200c628 == 0)) {
      cVar1 = FUN_0045c9d0(auStack_188);
      if (cVar1 == '\0') {
        FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02004988);
      }
      else {
        FUN_0041ddd0(&DAT_0200c630,PTR_PTR_02004db8);
      }
    }
  }
  return;
}

