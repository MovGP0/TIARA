/* Ghidra address: 00d26eb0 */
/* Ghidra symbol: FUN_00d26eb0 */


void FUN_00d26eb0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte local_128 [256];
  
  FUN_00d26cd0(param_1,local_128,&DAT_01ebef10,*(undefined4 *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x34);
  iVar3 = 0;
  pbVar4 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 4) =
         *(undefined4 *)
          (&DAT_01ebf010 +
          (longlong)
          (int)(uint)((&DAT_01ebee10)[(int)(uint)((&DAT_01ebee10)[*pbVar4] ^ bVar2)] ^ bVar1) * 4);
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar3 != 0x100);
  FUN_00d26cd0(param_1,local_128,&DAT_01ebef10,*(uint *)(param_1 + 0x38) >> 8);
  bVar1 = *(byte *)(param_1 + 0x31);
  bVar2 = *(byte *)(param_1 + 0x35);
  iVar3 = 0;
  pbVar4 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x400 + (longlong)iVar3 * 4) =
         *(undefined4 *)
          (&DAT_01ebf410 +
          (longlong)
          (int)(uint)((&DAT_01ebee10)[(int)(uint)((&DAT_01ebef10)[*pbVar4] ^ bVar2)] ^ bVar1) * 4);
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar3 != 0x100);
  FUN_00d26cd0(param_1,local_128,&DAT_01ebee10,*(uint *)(param_1 + 0x38) >> 0x10);
  bVar1 = *(byte *)(param_1 + 0x32);
  bVar2 = *(byte *)(param_1 + 0x36);
  iVar3 = 0;
  pbVar4 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x800 + (longlong)iVar3 * 4) =
         *(undefined4 *)
          (&DAT_01ebf810 +
          (longlong)
          (int)(uint)((&DAT_01ebef10)[(int)(uint)((&DAT_01ebee10)[*pbVar4] ^ bVar2)] ^ bVar1) * 4);
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar3 != 0x100);
  FUN_00d26cd0(param_1,local_128,&DAT_01ebee10,*(uint *)(param_1 + 0x38) >> 0x18);
  bVar1 = *(byte *)(param_1 + 0x33);
  bVar2 = *(byte *)(param_1 + 0x37);
  iVar3 = 0;
  pbVar4 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xc00 + (longlong)iVar3 * 4) =
         *(undefined4 *)
          (&DAT_01ebfc10 +
          (longlong)
          (int)(uint)((&DAT_01ebef10)[(int)(uint)((&DAT_01ebef10)[*pbVar4] ^ bVar2)] ^ bVar1) * 4);
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (iVar3 != 0x100);
  return;
}

