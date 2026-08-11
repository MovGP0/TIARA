/* Ghidra address: 016ecbf0 */
/* Ghidra symbol: FUN_016ecbf0 */


void FUN_016ecbf0(longlong param_1,byte param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  byte *pbVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&DAT_016ecd4c,0);
    return;
  }
  lVar4 = FUN_016e8fd0(0x11);
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar4;
  if ((param_3 == 0) || (*(byte *)(param_1 + 4) < param_3)) {
    FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&DAT_016ecd4c,0);
  }
  pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_3 * 8);
  if (pbVar2 != (byte *)0x0) {
    if (*pbVar2 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)pbVar2 >> 8),1) << (*pbVar2 & 0x1f) & 0x8aU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) goto LAB_016ecc96;
  }
  FUN_01b04d70(0x214,&DAT_016ecd4c,0);
LAB_016ecc96:
  **(undefined1 **)(lVar4 + 0x28) =
       **(undefined1 **)
         (*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_3 * 8) + 0x28);
  if ((param_4 == 0) || (*(byte *)(param_1 + 4) < param_4)) {
    FUN_01b04d70(0x215,&DAT_016ecd4c,0);
  }
  uVar5 = (ulonglong)param_4;
  pcVar3 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x01')) {
    FUN_01b04d70(0x214,&DAT_016ecd4c,0);
  }
  *(undefined1 *)(*(longlong *)(lVar4 + 0x28) + 1) =
       **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 0x28);
  *(undefined1 *)(lVar4 + 0x39) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 0x39);
  return;
}

