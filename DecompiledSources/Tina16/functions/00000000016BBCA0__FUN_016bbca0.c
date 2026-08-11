/* Ghidra address: 016bbca0 */
/* Ghidra symbol: FUN_016bbca0 */


ulonglong FUN_016bbca0(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  
  bVar2 = *(byte *)(param_1 + 0x40);
  if (1 < bVar2) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + -1;
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x50) + -0x28 + (ulonglong)*(byte *)(param_1 + 0x40) * 0x28);
    FUN_016bb280(param_1,*puVar1,*(undefined4 *)(puVar1 + 2));
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(lVar3 + 0x244) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)(lVar3 + 0x240) = *(undefined4 *)((longlong)puVar1 + 0xc);
    FUN_00414bf0(param_1 + 0xd88,puVar1[3]);
    FUN_00414ad0(*(longlong *)(param_1 + 0x10) + 0x220,puVar1[4]);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1 < bVar2) & 0xffffffff;
}

