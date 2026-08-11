/* Ghidra address: 00890270 */
/* Ghidra symbol: FUN_00890270 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00890270(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_00882f80();
  if (cVar1 == '\0') {
    FUN_00882f90();
  }
  DAT_01e23130 = FUN_00882f70();
  lVar2 = FUN_00427c10(DAT_01e23130,L"GetAddrInfoW");
  if (lVar2 == 0) {
    DAT_01e23128 = FUN_00452dc0(L"Wship6.dll",0x8000);
    DAT_01e23130 = DAT_01e23128;
    lVar2 = FUN_00427c10(DAT_01e23128,L"GetAddrInfoW");
  }
  if (((lVar2 != 0) && (lVar3 = FUN_00427c10(DAT_01e23130,L"GetNameInfoW"), lVar3 != 0)) &&
     (lVar4 = FUN_00427c10(DAT_01e23130,L"FreeAddrInfoW"), lVar4 != 0)) {
    DAT_01e230b0 = (code *)lVar2;
    DAT_01e230b8 = (code *)lVar3;
    DAT_01e230c0 = (code *)lVar4;
    _DAT_01e230c8 = FUN_00427c10(DAT_01e23130,L"InetPtonW");
    _DAT_01e230d0 = FUN_00427c10(DAT_01e23130,L"InetNtopW");
    _DAT_01e230d8 = FUN_00427c10(DAT_01e23130,L"GetAddrInfoExW");
    _DAT_01e230e0 = FUN_00427c10(DAT_01e23130,L"SetAddrInfoExW");
    _DAT_01e230e8 = FUN_00427c10(DAT_01e23130,L"FreeAddrInfoExW");
    DAT_01e23138 = FUN_00452dc0(L"Fwpuclnt.dll",0x8000);
    if (DAT_01e23138 == 0) {
      return;
    }
    _DAT_01e230f0 = FUN_00427c10(DAT_01e23138,L"WSASetSocketSecurity");
    _DAT_01e23110 = FUN_00427c10(DAT_01e23138,L"WSAQuerySocketSecurity");
    _DAT_01e230f8 = FUN_00427c10(DAT_01e23138,L"WSASetSocketPeerTargetName");
    _DAT_01e23100 = FUN_00427c10(DAT_01e23138,L"WSADeleteSocketPeerTargetName");
    _DAT_01e23108 = FUN_00427c10(DAT_01e23138,L"WSAImpersonateSocketPeer");
    _DAT_01e23118 = FUN_00427c10(DAT_01e23138,L"WSARevertImpersonation");
    return;
  }
  FUN_0088f340();
  DAT_01e23120 = 1;
  DAT_01e230c0 = FUN_0088f980;
  DAT_01e230b8 = FUN_0088fea0;
  DAT_01e230b0 = FUN_0088f9d0;
  return;
}

