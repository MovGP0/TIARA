/* Ghidra address: 0153ab60 */
/* Ghidra symbol: FUN_0153ab60 */


void FUN_0153ab60(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_02004010;
  if (param_1 != 0) {
    puVar1 = (undefined *)(param_1 + 0x492);
  }
  puVar3 = (undefined8 *)(DAT_0210ee10 + 200);
  puVar4 = (undefined8 *)(puVar1 + 200);
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)(puVar1 + 0x260) = *(undefined2 *)(DAT_0210ee10 + 0x260);
  *(undefined8 *)(puVar1 + 0x262) = *(undefined8 *)(DAT_0210ee10 + 0x262);
  *(undefined8 *)(puVar1 + 0x26a) = *(undefined8 *)(DAT_0210ee10 + 0x26a);
  *(undefined8 *)(puVar1 + 0x284) = *(undefined8 *)(DAT_0210ee10 + 0x284);
  puVar1[0x28c] = *(undefined1 *)(DAT_0210ee10 + 0x28c);
  puVar1[0x28d] = *(undefined1 *)(DAT_0210ee10 + 0x28d);
  *(undefined8 *)(puVar1 + 0x28e) = *(undefined8 *)(DAT_0210ee10 + 0x28e);
  puVar1[0x296] = *(undefined1 *)(DAT_0210ee10 + 0x296);
  *(undefined2 *)(puVar1 + 0x298) = *(undefined2 *)(DAT_0210ee10 + 0x298);
  *(undefined8 *)(puVar1 + 0x29a) = *(undefined8 *)(DAT_0210ee10 + 0x29a);
  *(undefined8 *)(puVar1 + 0x2a2) = *(undefined8 *)(DAT_0210ee10 + 0x2a2);
  puVar1[0x2aa] = *(undefined1 *)(DAT_0210ee10 + 0x2aa);
  puVar1[0x2ac] = *(undefined1 *)(DAT_0210ee10 + 0x2ac);
  puVar1[0x2ad] = *(undefined1 *)(DAT_0210ee10 + 0x2ad);
  *(undefined8 *)(puVar1 + 0x2b0) = *(undefined8 *)(DAT_0210ee10 + 0x2b0);
  *(undefined8 *)(puVar1 + 0x2b8) = *(undefined8 *)(DAT_0210ee10 + 0x2b8);
  *(undefined8 *)(puVar1 + 0x2c0) = *(undefined8 *)(DAT_0210ee10 + 0x2c0);
  *(undefined8 *)(puVar1 + 0x2c8) = *(undefined8 *)(DAT_0210ee10 + 0x2c8);
  *(undefined8 *)(puVar1 + 0x2d0) = *(undefined8 *)(DAT_0210ee10 + 0x2d0);
  *(undefined2 *)(puVar1 + 0x2d8) = *(undefined2 *)(DAT_0210ee10 + 0x2d8);
  puVar1[0x2da] = *(undefined1 *)(DAT_0210ee10 + 0x2da);
  *(undefined8 *)(puVar1 + 899) = *(undefined8 *)(DAT_0210ee10 + 899);
  *(undefined2 *)(puVar1 + 0x38b) = *(undefined2 *)(DAT_0210ee10 + 0x38b);
  *(undefined8 *)(puVar1 + 0x38d) = *(undefined8 *)(DAT_0210ee10 + 0x38d);
  *(undefined8 *)(puVar1 + 0x395) = *(undefined8 *)(DAT_0210ee10 + 0x395);
  puVar1[0x39d] = *(undefined1 *)(DAT_0210ee10 + 0x39d);
  *(undefined2 *)(puVar1 + 0x3a0) = *(undefined2 *)(DAT_0210ee10 + 0x3a0);
  *(undefined8 *)(puVar1 + 0x3a2) = *(undefined8 *)(DAT_0210ee10 + 0x3a2);
  *(undefined8 *)(puVar1 + 0x3aa) = *(undefined8 *)(DAT_0210ee10 + 0x3aa);
  *(undefined8 *)(puVar1 + 0x3b2) = *(undefined8 *)(DAT_0210ee10 + 0x3b2);
  *(undefined2 *)(puVar1 + 0x3bb) = *(undefined2 *)(DAT_0210ee10 + 0x3bb);
  *(undefined8 *)(puVar1 + 0x3bd) = *(undefined8 *)(DAT_0210ee10 + 0x3bd);
  *(undefined8 *)(puVar1 + 0x3c5) = *(undefined8 *)(DAT_0210ee10 + 0x3c5);
  puVar1[0x3cd] = *(undefined1 *)(DAT_0210ee10 + 0x3cd);
  puVar1[0x3ce] = *(undefined1 *)(DAT_0210ee10 + 0x3ce);
  FUN_00414ad0(puVar1 + 0x7ce,*(undefined8 *)(DAT_0210ee10 + 0x7ce));
  *(undefined8 *)(puVar1 + 0x7e0) = *(undefined8 *)(DAT_0210ee10 + 0x7e0);
  *(undefined8 *)(puVar1 + 0x7e8) = *(undefined8 *)(DAT_0210ee10 + 0x7e8);
  *(undefined8 *)(puVar1 + 0x7f0) = *(undefined8 *)(DAT_0210ee10 + 0x7f0);
  puVar1[0x813] = *(undefined1 *)(DAT_0210ee10 + 0x813);
  return;
}

