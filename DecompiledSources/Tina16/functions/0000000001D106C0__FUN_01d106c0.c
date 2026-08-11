/* Ghidra address: 01d106c0 */
/* Ghidra symbol: FUN_01d106c0 */


void FUN_01d106c0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  DAT_03567a18 = DAT_03567a18 + -1;
  if (DAT_03567a18 == -1) {
    FUN_00413900(&LAB_01d10618);
    puVar2 = &DAT_01ff2160;
    puVar3 = &DAT_035668ac;
    for (lVar1 = 0xd3; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
    *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
    FUN_00417c40(&DAT_03566f4a,&DAT_01ff27fe,&DAT_01d0d0b8);
    puVar2 = &DAT_03567012;
    puVar3 = &DAT_03567888;
    for (lVar1 = 0x32; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

