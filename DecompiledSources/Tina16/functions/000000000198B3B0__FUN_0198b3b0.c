/* Ghidra address: 0198b3b0 */
/* Ghidra symbol: FUN_0198b3b0 */


longlong FUN_0198b3b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3b0));
  FUN_019aead0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x418));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x420));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x428));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x430));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x438));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x440));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x448));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x450));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x458));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x208));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 1000));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x3f0));
  FUN_019a4ce0(param_1);
  FUN_01d0f910(*(undefined8 *)(param_1 + 0x468),*(undefined8 *)(param_1 + 0x470),
               *(undefined8 *)(param_1 + 0x478));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x468));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x470));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x478));
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x3a0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
  puVar1 = *(undefined8 **)(param_1 + 0x210);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar2,&DAT_01a96ff8);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1f8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x200));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x408));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xde8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xdf0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xdf8));
  FUN_00414480(param_1 + 0x230);
  FUN_00414480(param_1 + 0x360);
  FUN_00414480(param_1 + 0xe30);
  FUN_00414480(param_1 + 0xe38);
  FUN_00414480(param_1 + 0xe48);
  FUN_00b94e30(param_1);
  return param_1;
}

