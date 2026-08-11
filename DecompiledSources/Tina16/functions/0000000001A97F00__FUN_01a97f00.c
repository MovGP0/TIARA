/* Ghidra address: 01a97f00 */
/* Ghidra symbol: FUN_01a97f00 */


void FUN_01a97f00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  FUN_01a98230(param_2);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined1 *)(param_2 + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)(param_2 + 0x85) = *(undefined1 *)(param_1 + 0x85);
  *(undefined1 *)(param_2 + 0x86) = *(undefined1 *)(param_1 + 0x86);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_2 + 0x140) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  puVar3 = (undefined8 *)(param_2 + 0xa0);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
  FUN_00414ad0(param_2 + 0x108,*(undefined8 *)(param_1 + 0x108));
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_1 + 0x118);
  return;
}

