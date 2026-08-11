/* Ghidra address: 00df1480 */
/* Ghidra symbol: FUN_00df1480 */


void FUN_00df1480(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  uint unaff_ESI;
  uint unaff_EDI;
  uint unaff_R13D;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  undefined1 local_78 [16];
  double *local_68;
  uint local_5c [13];
  
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 3)) {
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),1,0,0);
    unaff_XMM6_Qa = (double)FUN_0040c850();
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),2,0,0);
    unaff_XMM7_Qa = (double)FUN_0040c850();
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),3,0,0);
    unaff_XMM8_Qa = (double)FUN_0040c850();
  }
  else if (param_3 == '\b') {
    FUN_016eead0(local_78,param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                 1,0);
    unaff_XMM6_Qa = (double)FUN_00c44590(local_78);
    FUN_016eead0(local_78,param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                 2,0);
    unaff_XMM7_Qa = (double)FUN_00c44590(local_78);
    FUN_016eead0(local_78,param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                 3,0);
    unaff_XMM8_Qa = (double)FUN_00c44590(local_78);
  }
  FUN_016ee260(param_1,&local_68,0x88,0);
  if (*(char *)(local_68 + 0xc) == '\0') {
    unaff_ESI = FUN_0040c770((unaff_XMM6_Qa * 100.0) / local_68[6]);
    unaff_EDI = FUN_0040c770((unaff_XMM7_Qa * 100.0) / local_68[6]);
    unaff_R13D = FUN_0040c770((unaff_XMM8_Qa * 100.0) / local_68[6]);
  }
  else if (*(char *)(local_68 + 0xc) == '\x01') {
    unaff_ESI = 0x6e;
    unaff_EDI = 0x6e;
    unaff_R13D = 0x6e;
  }
  local_5c[0] = (uint)(0x31 < (int)unaff_ESI);
  if (0x31 < (int)unaff_EDI) {
    local_5c[0] = local_5c[0] | 2;
  }
  if (0x31 < (int)unaff_R13D) {
    local_5c[0] = local_5c[0] | 4;
  }
  if (*PTR_DAT_02004578 == '\0') {
    uVar1 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar1,local_5c);
  }
  if ((*PTR_DAT_02004578 == '\0') &&
     ((*(char *)(local_68 + 0xc) == '\x01' ||
      (100 < (int)((unaff_ESI ^ (int)unaff_ESI >> 0x1f) - ((int)unaff_ESI >> 0x1f)))))) {
    FUN_016ed320(param_1,1,0,0,0);
  }
  else {
    FUN_016ed320(param_1,1,0,1.0 / *local_68,0);
  }
  if ((*PTR_DAT_02004578 == '\0') &&
     ((*(char *)(local_68 + 0xc) == '\x01' ||
      (100 < (int)((unaff_EDI ^ (int)unaff_EDI >> 0x1f) - ((int)unaff_EDI >> 0x1f)))))) {
    FUN_016ed320(param_1,2,0,0,0);
  }
  else {
    FUN_016ed320(param_1,2,0,1.0 / *local_68,0);
  }
  if ((*PTR_DAT_02004578 == '\0') &&
     ((*(char *)(local_68 + 0xc) == '\x01' ||
      (100 < (int)((unaff_R13D ^ (int)unaff_R13D >> 0x1f) - ((int)unaff_R13D >> 0x1f)))))) {
    FUN_016ed320(param_1,3,0,0,0);
  }
  else {
    FUN_016ed320(param_1,3,0,1.0 / *local_68,0);
  }
  return;
}

