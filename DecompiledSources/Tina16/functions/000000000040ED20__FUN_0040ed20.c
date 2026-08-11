/* Ghidra address: 0040ed20 */
/* Ghidra symbol: FUN_0040ed20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0040ed20(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char local_res10 [24];
  undefined1 auStack_28 [32];
  
  local_res10[0] = (char)param_2;
  if (*(short *)(param_1 + 0x2e8) == 0) {
    FUN_0040ea40(param_1);
  }
  if (*(ushort *)(param_1 + 0x2e8) == _DAT_02006a28) {
    param_1 = FUN_0040eaa0(param_1,local_res10,1);
  }
  else {
    if (*(char *)(param_1 + 0x2ea) == '\0') {
      *(undefined1 *)(param_1 + 0x2ea) = 1;
      if (_DAT_02006a28 == 0xfde9) {
        if ((byte)(local_res10[0] + 0x40U) < 0x20) {
          uVar2 = 1 << (local_res10[0] + 0x40U & 0x1f);
          param_2 = (ulonglong)uVar2;
          bVar3 = (uVar2 & 0xfffffffc) != 0;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          *(undefined1 *)(param_1 + 0x2ea) = 2;
        }
        else {
          if ((byte)(local_res10[0] + 0x20U) < 0x10) {
            bVar3 = (short)((int)CONCAT62((int6)(param_2 >> 0x10),1) <<
                           (local_res10[0] + 0x20U & 0x1f)) != 0;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            *(undefined1 *)(param_1 + 0x2ea) = 3;
          }
          else if ((byte)(local_res10[0] + 0x10U) < 8 &&
                   (1 << (local_res10[0] + 0x10U & 0x1f) & 0x1fU) != 0) {
            *(undefined1 *)(param_1 + 0x2ea) = 4;
          }
        }
      }
      else {
        iVar1 = thunk_FUN_03cc9058(_DAT_02006a28,local_res10[0]);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x2ea) = 2;
        }
      }
      *(undefined1 *)(param_1 + 0x2eb) = 0;
    }
    if ('\0' < *(char *)(param_1 + 0x2ea)) {
      *(char *)(param_1 + 0x2ec + (ulonglong)*(byte *)(param_1 + 0x2eb)) = local_res10[0];
      *(char *)(param_1 + 0x2eb) = *(char *)(param_1 + 0x2eb) + '\x01';
      if (*(char *)(param_1 + 0x2eb) == *(char *)(param_1 + 0x2ea)) {
        FUN_0040ec70(auStack_28);
      }
    }
  }
  return param_1;
}

