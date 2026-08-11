/* Ghidra address: 016eca70 */
/* Ghidra symbol: FUN_016eca70 */


void FUN_016eca70(longlong param_1,byte param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&DAT_016ecbe0,0);
    return;
  }
  lVar5 = FUN_016e8fd0(0x12);
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar5;
  if ((param_3 == 0) || (*(byte *)(param_1 + 4) < param_3)) {
    FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&DAT_016ecbe0,0);
  }
  pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_3 * 8);
  if (pbVar2 != (byte *)0x0) {
    if (*pbVar2 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)pbVar2 >> 8),1) << (*pbVar2 & 0x1f) & 0x8aU) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) goto LAB_016ecb16;
  }
  FUN_01b04d70(0x214,&DAT_016ecbe0,0);
LAB_016ecb16:
  **(undefined1 **)(lVar5 + 0x28) =
       **(undefined1 **)
         (*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_3 * 8) + 0x28);
  if ((param_4 == 0) || (*(byte *)(param_1 + 4) < param_4)) {
    FUN_01b04d70(0x215,&DAT_016ecbe0,0);
  }
  uVar6 = (ulonglong)param_4;
  pcVar3 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar6 * 8);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x02')) {
    FUN_01b04d70(0x214,&DAT_016ecbe0,0);
  }
  puVar4 = *(undefined1 **)(lVar5 + 8);
  *puVar4 = **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar6 * 8) + 8);
  puVar4[1] = *(undefined1 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar6 * 8) + 8) + 1
               );
  *(undefined1 *)(lVar5 + 0x39) =
       *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar6 * 8) + 0x39);
  return;
}

