/* Ghidra address: 01aad710 */
/* Ghidra symbol: FUN_01aad710 */


longlong FUN_01aad710(longlong param_1)

{
  undefined8 *puVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_1 + 0x13b30);
  if (sVar2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x13b38);
    do {
      FUN_004095f0(*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a40));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a48));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x13a50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x19c20));
  FUN_01aaaa80(param_1);
  return param_1;
}

