/* Ghidra address: 01d59cf0 */
/* Ghidra symbol: FUN_01d59cf0 */


void FUN_01d59cf0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 local_48 [31];
  undefined1 local_29;
  
  dVar2 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
  if (dVar2 <= 1e-09) {
    if (param_4 == '\b') {
      FUN_016ee5e0(local_48,param_2,*(undefined8 *)(param_3 + 0x118),
                   *(undefined8 *)(param_3 + 0x120),1,1);
      dVar2 = (double)FUN_00c44590(local_48);
    }
    else {
      FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),1,1,0);
      dVar2 = (double)FUN_0040c850();
    }
    if (((*PTR_DAT_02004578 == '\0') &&
        (*(double *)(param_1 + 0x10) <= dVar2 && dVar2 != *(double *)(param_1 + 0x10))) &&
       (param_1[1] == '\0')) {
      param_1[1] = '\x01';
    }
    if ((*PTR_DAT_02004578 != '\0') ||
       ((dVar2 < *(double *)(param_1 + 0x10) || dVar2 == *(double *)(param_1 + 0x10) &&
        (param_1[1] != '\x01')))) {
      FUN_016ed320(param_2,*param_1 + '\x01',0,*(undefined8 *)(param_1 + 8),0);
      local_29 = 0;
    }
    else {
      FUN_016ed320(param_2,*param_1 + '\x01',0,1.0 / (*(double *)(param_3 + 0x430) + 1e-18),0);
      local_29 = 1;
    }
  }
  else {
    if (param_4 == '\b') {
      FUN_016eead0(local_48,param_2,*(undefined8 *)(param_3 + 0x118),
                   *(undefined8 *)(param_3 + 0x120),param_1[2],param_1[3]);
      dVar2 = (double)FUN_00c44590(local_48);
    }
    else {
      FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[3],0);
      dVar2 = (double)FUN_0040c850();
    }
    dVar2 = dVar2 / *(double *)(param_1 + 8);
    if (((*PTR_DAT_02004578 == '\0') &&
        (*(double *)(param_1 + 0x10) <= dVar2 && dVar2 != *(double *)(param_1 + 0x10))) &&
       (param_1[1] == '\0')) {
      param_1[1] = '\x01';
    }
    if ((*PTR_DAT_02004578 != '\0') ||
       ((dVar2 < *(double *)(param_1 + 0x10) || dVar2 == *(double *)(param_1 + 0x10) &&
        (param_1[1] != '\x01')))) {
      FUN_016ed320(param_2,*param_1 + '\x01',0,1.0 / *(double *)(param_1 + 8),0);
      local_29 = 0;
    }
    else {
      FUN_016ed320(param_2,*param_1 + '\x01',0,*(undefined8 *)(param_3 + 0x430),0);
      local_29 = 1;
    }
  }
  uVar1 = FUN_016ebdc0(param_2);
  FUN_01d04b50(uVar1,&local_29);
  return;
}

