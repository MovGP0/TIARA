/* Ghidra address: 00df0df0 */
/* Ghidra symbol: FUN_00df0df0 */


void FUN_00df0df0(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 unaff_XMM6_Qa;
  undefined1 local_58 [20];
  uint local_44;
  double *local_40 [4];
  
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 3)) {
    unaff_XMM6_Qa = FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),1,2,0);
  }
  else if (param_3 == '\b') {
    FUN_016eead0(local_58,param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                 1,2);
    unaff_XMM6_Qa = FUN_00c44590(local_58);
  }
  FUN_016ee260(param_1,local_40,0x88,0);
  iVar2 = FUN_00c42630(unaff_XMM6_Qa);
  dVar4 = (double)FUN_0040c850(unaff_XMM6_Qa);
  cVar1 = *(char *)(local_40[0] + 0xc);
  if (cVar1 == '\0') {
    local_44 = FUN_0040c770(((double)(iVar2 * 100) * dVar4) / local_40[0][6]);
  }
  else if (cVar1 == '\x01') {
    local_44 = 0x6e;
  }
  else if (cVar1 == '\x02') {
    local_44 = 0;
  }
  if (*PTR_DAT_02004578 == '\0') {
    uVar3 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar3,&local_44);
    if ((*(char *)(local_40[0] + 0xc) == '\0') &&
       (100 < (int)((local_44 ^ (int)local_44 >> 0x1f) - ((int)local_44 >> 0x1f)))) {
      *(undefined1 *)(local_40[0] + 0xc) = 1;
    }
  }
  if ((*PTR_DAT_02004578 == '\0') &&
     ((*(char *)(local_40[0] + 0xc) == '\x01' ||
      (100 < (int)((local_44 ^ (int)local_44 >> 0x1f) - ((int)local_44 >> 0x1f)))))) {
    FUN_016ed320(param_1,1,0,0x3e112e0be826d695,0);
  }
  else {
    FUN_016ed320(param_1,1,0,1.0 / *local_40[0],0);
  }
  return;
}

