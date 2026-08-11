/* Ghidra address: 016bd0d0 */
/* Ghidra symbol: FUN_016bd0d0 */


void FUN_016bd0d0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if ((*(char *)(param_1 + 0x9a3) != '\0') && (*(char *)(param_1 + 0x9a2) == '\0')) {
    return;
  }
  bVar1 = *(char *)(param_2 + 0x28) - 0x40;
  if (bVar1 < 0x20) {
    uVar4 = 1 << (bVar1 & 0x1f);
    bVar6 = (uVar4 & 0x8009e0) != 0;
    uVar5 = (ulonglong)uVar4;
  }
  else {
    bVar6 = false;
    uVar5 = param_2;
  }
  if ((bVar6) || (cVar2 = FUN_016b9760(param_2), cVar2 != '\0')) {
    uVar5 = param_2;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa70),param_2);
  }
  bVar1 = *(char *)(param_2 + 0x28) + 0xb8;
  if (bVar1 < 0x10) {
    bVar6 = ((int)CONCAT62((int6)(uVar5 >> 0x10),1) << (bVar1 & 0x1f) & 0x4002U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (((!bVar6) || (*(longlong *)(param_2 + 0x18) == 0)) ||
     (iVar3 = FUN_00414f50(*(undefined8 *)(param_2 + 0x18),&DAT_016bd1d6,
                           (ulonglong)**(byte **)(param_2 + 0x18) + 1), iVar3 != 0)) {
    if (*(char *)(param_2 + 0x28) != 'U') {
      return;
    }
    iVar3 = FUN_00414f50(*(undefined8 *)(param_2 + 0x58),&DAT_016bd1da,
                         (ulonglong)**(byte **)(param_2 + 0x58) + 1);
    if (iVar3 != 0) {
      return;
    }
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa78),param_2);
  return;
}

