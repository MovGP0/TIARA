/* Ghidra address: 016ec580 */
/* Ghidra symbol: FUN_016ec580 */


void FUN_016ec580(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ec60c,0);
  }
  else {
    lVar2 = FUN_016e8fd0(0xc);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = lVar2;
    puVar1 = *(undefined1 **)(lVar2 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    **(undefined1 **)(lVar2 + 0x28) = *(undefined1 *)(param_1 + 7);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(undefined1 *)(lVar2 + 0x39) = 1;
  }
  return;
}

