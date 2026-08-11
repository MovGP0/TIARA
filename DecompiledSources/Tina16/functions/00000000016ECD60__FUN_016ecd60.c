/* Ghidra address: 016ecd60 */
/* Ghidra symbol: FUN_016ecd60 */


void FUN_016ecd60(longlong param_1,byte param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 param_5,byte param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ece70,0);
  }
  else {
    lVar3 = FUN_016e8fd0(0x14);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = lVar3;
    **(undefined8 **)(lVar3 + 0x40) = param_3;
    puVar1 = *(undefined1 **)(lVar3 + 0x48);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    if ((param_6 == 0) || (*(byte *)(param_1 + 4) < param_6)) {
      FUN_01b04d70(CONCAT62((int6)((ulonglong)puVar1 >> 0x10),0x215),&LAB_016ece70,0);
    }
    uVar4 = (ulonglong)param_6;
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\x02')) {
      FUN_01b04d70(0x214,&LAB_016ece70,0);
    }
    puVar1 = *(undefined1 **)(lVar3 + 8);
    *puVar1 = **(undefined1 **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 8);
    puVar1[1] = *(undefined1 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 8) +
                 1);
    *(undefined1 *)(lVar3 + 0x39) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + uVar4 * 8) + 0x39);
  }
  return;
}

