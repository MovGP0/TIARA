/* Ghidra address: 004bd730 */
/* Ghidra symbol: FUN_004bd730 */


longlong FUN_004bd730(longlong param_1,longlong param_2)

{
  int iVar1;
  ushort *puVar2;
  longlong lVar3;
  ushort *puVar4;
  bool bVar5;
  longlong local_40;
  wchar_t *local_30 [2];
  
  local_30[0] = (wchar_t *)0x0;
  local_40 = 0;
  lVar3 = local_40;
  if (param_2 != 0) {
    puVar2 = (ushort *)FUN_00416740(param_2);
    while (puVar4 = puVar2, lVar3 = param_1, *puVar2 != 0) {
      while( true ) {
        if (*puVar4 < 0x40) {
          bVar5 = (1L << ((byte)*puVar4 & 0x3f) & 0x600000000001U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) break;
        puVar4 = puVar4 + 1;
      }
      FUN_00414740(local_30,puVar2,((longlong)puVar4 - (longlong)puVar2) / 2 & 0xffffffff);
      lVar3 = FUN_004d3a80(param_1,local_30[0]);
      if (lVar3 == 0) {
        if (local_30[0] == L"Owner") {
          bVar5 = true;
        }
        else if (local_30[0] == (wchar_t *)0x0) {
          bVar5 = false;
        }
        else {
          iVar1 = FUN_0043e420(local_30[0],L"Owner");
          bVar5 = iVar1 == 0;
        }
        if (bVar5) {
          lVar3 = param_1;
        }
      }
      param_1 = lVar3;
      lVar3 = local_40;
      if (param_1 == 0) break;
      puVar2 = puVar4;
      if (*puVar4 == 0x2e) {
        puVar2 = puVar4 + 1;
      }
      if (*puVar2 == 0x2d) {
        puVar2 = puVar2 + 1;
      }
      if (*puVar2 == 0x3e) {
        puVar2 = puVar2 + 1;
      }
    }
  }
  local_40 = lVar3;
  FUN_00414480(local_30);
  return local_40;
}

