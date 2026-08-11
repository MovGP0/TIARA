/* Ghidra address: 016ec6d0 */
/* Ghidra symbol: FUN_016ec6d0 */


void FUN_016ec6d0(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ec784,0);
  }
  else {
    lVar2 = FUN_016e8fd0(0xe);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = lVar2;
    puVar1 = *(undefined1 **)(lVar2 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1 = *(undefined1 **)(lVar2 + 0x28);
    *puVar1 = *(undefined1 *)(param_1 + 7);
    puVar1[1] = *(char *)(param_1 + 7) + '\x01';
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x02';
    *(undefined1 *)(lVar2 + 0x39) = param_8;
  }
  return;
}

