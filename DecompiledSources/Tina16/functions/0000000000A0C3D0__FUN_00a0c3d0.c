/* Ghidra address: 00a0c3d0 */
/* Ghidra symbol: FUN_00a0c3d0 */


void FUN_00a0c3d0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  uVar1 = FUN_00a0d730();
  puVar2 = (undefined8 *)FUN_00a0d6d0(param_1,0x98);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_00a0d740(param_1);
    *(undefined8 *)(*param_1 + 0x28) = 0x36;
    (**(code **)*param_1)(param_1);
  }
  *puVar2 = FUN_00a0c4e0;
  puVar2[1] = FUN_00a0c680;
  puVar2[2] = FUN_00a0c760;
  puVar2[3] = FUN_00a0c850;
  puVar2[4] = FUN_00a0c950;
  puVar2[5] = FUN_00a0c9f0;
  puVar2[6] = FUN_00a0ca90;
  puVar2[7] = FUN_00a0cfe0;
  puVar2[8] = FUN_00a0d280;
  puVar2[9] = FUN_00a0d520;
  puVar2[10] = FUN_00a0d680;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = 1000000000;
  *(undefined4 *)(puVar2 + 0xb) = uVar1;
  *(undefined1 (*) [16])(puVar2 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x10) = (undefined1  [16])0x0;
  *(undefined4 *)(puVar2 + 0x12) = 0x98;
  param_1[1] = (longlong)puVar2;
  return;
}

