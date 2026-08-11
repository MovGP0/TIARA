/* Ghidra address: 00a19da0 */
/* Ghidra symbol: FUN_00a19da0 */


void FUN_00a19da0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x248) = puVar2;
  *puVar2 = FUN_00a19f40;
  puVar2[1] = FUN_00a19f90;
  puVar2[2] = FUN_00a1ae70;
  puVar2[5] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xb4) = 0;
  puVar2[7] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  puVar2[8] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xbc) = 0;
  puVar2[9] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  puVar2[10] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
  puVar2[0xb] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x19) = 0;
  puVar2[0xc] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xcc) = 0;
  puVar2[0xd] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x1a) = 0;
  puVar2[0xe] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
  puVar2[0xf] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  puVar2[0x10] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xdc) = 0;
  puVar2[0x11] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  puVar2[0x12] = FUN_00a1af10;
  *(undefined4 *)((longlong)puVar2 + 0xe4) = 0;
  puVar2[0x13] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xec) = 0;
  puVar2[0x15] = FUN_00a1af10;
  *(undefined4 *)(puVar2 + 0x1e) = 0;
  puVar2[6] = FUN_00a1afe0;
  puVar2[0x14] = FUN_00a1afe0;
  lVar1 = *(longlong *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}

