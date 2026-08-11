/* Ghidra address: 01aa07c0 */
/* Ghidra symbol: FUN_01aa07c0 */


void FUN_01aa07c0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  DAT_02110a40 = DAT_02110a40 + -1;
  if (DAT_02110a40 == -1) {
    puVar2 = &DAT_01fcd50c;
    puVar3 = (undefined8 *)&DAT_02110878;
    for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
    puVar2 = &DAT_01fcd650;
    puVar3 = &DAT_021108e4;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

