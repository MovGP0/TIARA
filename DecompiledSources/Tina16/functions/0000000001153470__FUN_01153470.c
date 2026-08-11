/* Ghidra address: 01153470 */
/* Ghidra symbol: FUN_01153470 */


void FUN_01153470(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(PTR_DAT_02001120 + 200);
  puVar3 = (undefined8 *)(param_1 + 0x740);
  for (lVar1 = 0x32; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00414ad0(param_1 + 0x8d8,*(undefined8 *)(PTR_DAT_02001120 + 600));
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6b8),0);
  FUN_01152760(param_1,param_2);
  return;
}

