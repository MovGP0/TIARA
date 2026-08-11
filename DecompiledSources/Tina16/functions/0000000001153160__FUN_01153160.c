/* Ghidra address: 01153160 */
/* Ghidra symbol: FUN_01153160 */


void FUN_01153160(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_30 [2];
  byte *local_20 [2];
  
  local_30[0] = 0;
  cVar1 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x6b8));
  *(char *)(param_1 + 0x8e1) = cVar1;
  if (cVar1 == '\0') {
    local_20[0] = (byte *)&DAT_02030200;
    iVar4 = 0;
    do {
      lVar2 = (longlong)(iVar4 + 1);
      if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x01') {
        *(double *)(param_1 + 0x738 + lVar2 * 8) = (double)*(int *)local_20[0];
        FUN_00b909d0(local_20,4);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x02') {
        *(double *)(param_1 + 0x738 + lVar2 * 8) = (double)*(int *)local_20[0];
        FUN_00b909d0(local_20,4);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x03') {
        *(double *)(param_1 + 0x738 + lVar2 * 8) = (double)(int)(char)*local_20[0];
        FUN_00b909d0(local_20,1);
      }
      else if (PTR_DAT_02004b98[lVar2 * 0x28 + -0x25] == '\x04') {
        *(double *)(param_1 + 0x738 + lVar2 * 8) = (double)(*local_20[0] + 1);
        FUN_00b909d0(local_20,1);
      }
      else {
        *(undefined8 *)(param_1 + 0x738 + lVar2 * 8) = *(undefined8 *)local_20[0];
        FUN_00b909d0(local_20,8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x2d);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),local_30);
    FUN_00414ad0(param_1 + 0x8d8,local_30[0]);
    if (*(double *)(param_1 + 0x8f0) != *(double *)(param_1 + 0x740)) {
      uVar3 = FUN_019a4600();
      FUN_019af700(uVar3);
    }
  }
  FUN_00414480(local_30);
  return;
}

