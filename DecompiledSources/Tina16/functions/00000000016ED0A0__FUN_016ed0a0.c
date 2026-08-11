/* Ghidra address: 016ed0a0 */
/* Ghidra symbol: FUN_016ed0a0 */


void FUN_016ed0a0(longlong param_1,byte param_2,undefined8 param_3,undefined1 param_4,byte param_5)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ed194,0);
  }
  else {
    lVar3 = FUN_016e8fd0(0x15);
    **(undefined8 **)(lVar3 + 0x40) = param_3;
    **(undefined1 **)(lVar3 + 0x50) = param_4;
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar3;
    if ((param_5 == 0) || (*(byte *)(param_1 + 4) < param_5)) {
      FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&LAB_016ed194,0);
    }
    uVar4 = (ulonglong)param_5;
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x01')) {
      FUN_01b04d70(0x214,&LAB_016ed194,0);
    }
    **(undefined1 **)(lVar3 + 0x28) =
         **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 0x28);
    *(undefined1 *)(lVar3 + 0x39) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 0x39);
  }
  return;
}

