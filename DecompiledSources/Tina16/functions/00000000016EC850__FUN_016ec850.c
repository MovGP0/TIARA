/* Ghidra address: 016ec850 */
/* Ghidra symbol: FUN_016ec850 */


longlong FUN_016ec850(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                     byte param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_R14;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ec960,0);
  }
  else {
    unaff_R14 = FUN_016e8fd0(0x10);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = unaff_R14;
    puVar1 = *(undefined1 **)(unaff_R14 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    if ((param_5 == 0) || (*(byte *)(param_1 + 4) < param_5)) {
      FUN_01b04d70(0x215,&LAB_016ec960,0);
    }
    uVar4 = (ulonglong)param_5;
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x02')) {
      FUN_01b04d70(0x214,&LAB_016ec960,0);
    }
    lVar3 = *(longlong *)(unaff_R14 + 8);
    *(undefined1 *)(lVar3 + 2) =
         **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 8);
    *(undefined1 *)(lVar3 + 3) =
         *(undefined1 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 8) + 1);
    *(undefined1 *)(unaff_R14 + 0x39) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 0x39);
  }
  return unaff_R14;
}

