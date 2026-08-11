/* Ghidra address: 016ec1c0 */
/* Ghidra symbol: FUN_016ec1c0 */


void FUN_016ec1c0(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(byte *)(param_1 + 4) < param_2)) {
    FUN_01b04d70(0x215,&LAB_016ec230,0);
  }
  else {
    lVar2 = FUN_016e8fd0(6);
    *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (ulonglong)param_2 * 8) = lVar2;
    puVar1 = *(undefined1 **)(lVar2 + 8);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    *(undefined1 *)(lVar2 + 0x39) = 1;
  }
  return;
}

