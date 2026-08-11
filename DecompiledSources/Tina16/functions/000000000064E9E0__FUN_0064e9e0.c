/* Ghidra address: 0064e9e0 */
/* Ghidra symbol: FUN_0064e9e0 */


void FUN_0064e9e0(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  int iStack_34;
  undefined1 local_30 [16];
  
  cVar1 = FUN_00664d60(DAT_020122b8);
  if (cVar1 != '\0') {
    FUN_00664e80(DAT_020122b8,0);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_007ee548);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0xff) != '\x01')) {
    uVar2 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02004470);
    FUN_004134c0(uVar2);
  }
  FUN_0064fd30(param_1);
  if ((DAT_020122f8 == 0) || (DAT_020122f8 == DAT_02012358)) {
    DAT_020122f8 = 0;
    if ((*(uint *)(param_1 + 0xa4) & 1) != 0) {
      thunk_FUN_03cc0d62(local_30);
      uVar2 = FUN_0064d3a0(param_1,local_30);
      local_38 = (uint)uVar2;
      iStack_34 = (int)((ulonglong)uVar2 >> 0x20);
      FUN_0064fca0(param_1,0x202,0,(longlong)(int)(local_38 & 0xffff | iStack_34 << 0x10));
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_020122b8 + 0xc);
    }
    if (DAT_020122f8 != DAT_02012358) {
      FUN_0064a4e0(param_1,param_2,param_3);
    }
  }
  return;
}

