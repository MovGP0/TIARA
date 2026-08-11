/* Ghidra address: 015668d0 */
/* Ghidra symbol: FUN_015668d0 */


void FUN_015668d0(void)

{
  char cVar1;
  
  *PTR_DAT_020034d0 = 0;
  PTR_DAT_020034d0[1] = 0;
  PTR_DAT_020034d0[2] = 1;
  PTR_DAT_020034d0[3] = 0;
  PTR_DAT_020034d0[4] = 0;
  PTR_DAT_020034d0[5] = 0;
  PTR_DAT_020034d0[6] = 0;
  PTR_DAT_020034d0[8] = 0;
  *(undefined4 *)(PTR_DAT_020034d0 + 0xc) = 0;
  PTR_DAT_020034d0[0x10] = 0;
  PTR_DAT_020034d0[0x17] = 0;
  PTR_DAT_020034d0[9] = 0;
  PTR_DAT_020034d0[0x11] = 0;
  PTR_DAT_020034d0[0x12] = 0;
  PTR_DAT_020034d0[7] = 0;
  *(undefined8 *)(PTR_DAT_020034d0 + 0x18) = 0x3eb0c6f7a0b5ed8d;
  cVar1 = FUN_00e042b0();
  if (cVar1 == '\0') {
    PTR_DAT_020034d0[0x13] = 1;
  }
  else {
    PTR_DAT_020034d0[0x13] = 0;
  }
  PTR_DAT_020034d0[0x14] = 1;
  PTR_DAT_020034d0[0x15] = 0;
  PTR_DAT_020034d0[0x16] = 0;
  PTR_DAT_020034d0[10] = 0;
  FUN_01566870(PTR_DAT_02003ed8);
  *(undefined8 *)PTR_DAT_020041d8 = 1;
  *(longlong *)PTR_DAT_020010f8 = *(longlong *)PTR_DAT_020041d8 * 1000;
  *(longlong *)PTR_DAT_02005a20 = *(longlong *)PTR_DAT_020010f8 * 1000;
  *(longlong *)PTR_DAT_020057f8 = *(longlong *)PTR_DAT_02005a20 * 1000;
  *(longlong *)PTR_DAT_02005038 = *(longlong *)PTR_DAT_020057f8 * 1000;
  *(longlong *)PTR_DAT_020028e8 = *(longlong *)PTR_DAT_02005038 * 1000;
  *(longlong *)PTR_DAT_02005680 = *(longlong *)PTR_DAT_02005038 * 10;
  return;
}

