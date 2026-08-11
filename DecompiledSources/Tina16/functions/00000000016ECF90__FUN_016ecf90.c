/* Ghidra address: 016ecf90 */
/* Ghidra symbol: FUN_016ecf90 */


void FUN_016ecf90(longlong param_1,byte param_2,undefined8 param_3,undefined1 param_4,byte param_5)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ed098,0);
  }
  else {
    lVar4 = FUN_016e8fd0(0x16);
    **(undefined8 **)(lVar4 + 0x40) = param_3;
    **(undefined1 **)(lVar4 + 0x50) = param_4;
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(lVar1 + -8 + (ulonglong)param_2 * 8) = lVar4;
    if ((param_5 == 0) || (*(byte *)(param_1 + 4) < param_5)) {
      FUN_01b04d70(CONCAT62((int6)((ulonglong)lVar1 >> 0x10),0x215),&LAB_016ed098,0);
    }
    uVar5 = (ulonglong)param_5;
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x02')) {
      FUN_01b04d70(0x214,&LAB_016ed098,0);
    }
    puVar3 = *(undefined1 **)(lVar4 + 8);
    *puVar3 = **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 8);
    puVar3[1] = *(undefined1 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 8) +
                 1);
    *(undefined1 *)(lVar4 + 0x39) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar5 * 8) + 0x39);
  }
  return;
}

