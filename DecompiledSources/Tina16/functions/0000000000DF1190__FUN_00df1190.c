/* Ghidra address: 00df1190 */
/* Ghidra symbol: FUN_00df1190 */


void FUN_00df1190(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  double unaff_XMM6_Qa;
  undefined1 local_48 [16];
  double *local_38;
  uint local_2c [5];
  
  if ((param_3 == '\x01') || ((byte)(param_3 - 5U) < 3)) {
    FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),1,2,0);
    unaff_XMM6_Qa = (double)FUN_0040c850();
  }
  else if (param_3 == '\b') {
    FUN_016eead0(local_48,param_1,*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),
                 1,2);
    unaff_XMM6_Qa = (double)FUN_00c44590(local_48);
  }
  FUN_016ee260(param_1,&local_38,0x88,0);
  if (*(char *)(local_38 + 0xc) == '\0') {
    local_2c[0] = FUN_0040c770((unaff_XMM6_Qa * 100.0) / local_38[6]);
  }
  else if (*(char *)(local_38 + 0xc) == '\x01') {
    local_2c[0] = 0x6e;
  }
  if (*PTR_DAT_02004578 == '\0') {
    uVar1 = FUN_016ebdc0(param_1);
    FUN_01d04b50(uVar1,local_2c);
    if ((*(char *)(local_38 + 0xc) == '\0') &&
       (100 < (int)((local_2c[0] ^ (int)local_2c[0] >> 0x1f) - ((int)local_2c[0] >> 0x1f)))) {
      *(undefined1 *)(local_38 + 0xc) = 1;
    }
  }
  if ((*PTR_DAT_02004578 == '\0') &&
     ((*(char *)(local_38 + 0xc) == '\x01' ||
      (100 < (int)((local_2c[0] ^ (int)local_2c[0] >> 0x1f) - ((int)local_2c[0] >> 0x1f)))))) {
    FUN_016ed320(param_1,1,0,0x3e112e0be826d695,0);
  }
  else {
    FUN_016ed320(param_1,1,0,1.0 / *local_38,0);
  }
  return;
}

