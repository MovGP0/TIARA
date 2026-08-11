/* Ghidra address: 016ec970 */
/* Ghidra symbol: FUN_016ec970 */


void FUN_016ec970(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,byte param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016eca60,0);
  }
  else {
    lVar4 = FUN_016e8fd0(0x13);
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar4;
    puVar2 = *(undefined1 **)(lVar4 + 8);
    *puVar2 = param_3;
    puVar2[1] = param_4;
    if ((param_5 == 0) || (*(byte *)(param_1 + 4) < param_5)) {
      FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&LAB_016eca60,0);
    }
    uVar5 = (ulonglong)param_5;
    pcVar3 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x01')) {
      FUN_01b04d70(0x214,&LAB_016eca60,0);
    }
    **(undefined1 **)(lVar4 + 0x28) =
         **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 0x28);
    *(undefined1 *)(lVar4 + 0x39) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 0x39);
  }
  return;
}

