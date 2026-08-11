/* Ghidra address: 01153d70 */
/* Ghidra symbol: FUN_01153d70 */


undefined8 FUN_01153d70(undefined8 param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double *local_30 [2];
  
  local_30[0] = (double *)&DAT_02030200;
  iVar4 = 0;
  iVar5 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar2 = (longlong)(iVar4 + 1);
      if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x01') {
        FUN_00b909d0(local_30,4);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x02') {
        FUN_00b909d0(local_30,4);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x03') {
        FUN_00b909d0(local_30,1);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x04') {
        FUN_00b909d0(local_30,1);
      }
      else {
        FUN_00b909d0(local_30,8);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar2 = (longlong)(param_2 + 1);
  if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x01') {
    bVar6 = *(double *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0) != (double)*(int *)local_30[0];
  }
  else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x02') {
    bVar6 = *(double *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0) != (double)*(int *)local_30[0];
  }
  else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x03') {
    cVar1 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0));
    bVar6 = cVar1 != *(char *)local_30[0];
  }
  else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x04') {
    lVar2 = FUN_0040c770(*(undefined8 *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0));
    bVar6 = lVar2 - 1U != (ulonglong)*(byte *)local_30[0];
  }
  else {
    bVar6 = *(double *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0) != *local_30[0];
  }
  if (bVar6) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = 0xff0000;
  }
  return uVar3;
}

