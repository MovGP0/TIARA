/* Ghidra address: 016ebef0 */
/* Ghidra symbol: FUN_016ebef0 */


void FUN_016ebef0(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ebf90,0);
  }
  else {
    lVar3 = FUN_016e8fd0(3);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = lVar3;
    puVar1 = *(undefined1 **)(lVar3 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    **(undefined1 **)(lVar3 + 0x28) = *(undefined1 *)(param_1 + 7);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    *(undefined1 *)(lVar3 + 0x39) = param_5;
    uVar2 = FUN_016ea1b0(param_1,2);
    *(uint *)(lVar3 + 0x6c) = uVar2 + 1;
  }
  return;
}

