/* Ghidra address: 00d270c0 */
/* Ghidra symbol: FUN_00d270c0 */


void FUN_00d270c0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte local_228 [256];
  byte local_128 [256];
  
  FUN_00d26cd0(param_1,local_228,&DAT_01ebef10,*(undefined4 *)(param_1 + 0x3c));
  iVar5 = 0x100;
  pbVar3 = local_228;
  pbVar4 = local_128;
  do {
    *pbVar4 = (&DAT_01ebef10)[*pbVar3];
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00d26cd0(param_1,local_128,local_128,*(undefined4 *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar2 = *(byte *)(param_1 + 0x34);
  iVar5 = 0;
  pbVar3 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 4) =
         *(undefined4 *)
          (&DAT_01ebf010 +
          (longlong)
          (int)(uint)((&DAT_01ebee10)[(int)(uint)((&DAT_01ebee10)[*pbVar3] ^ bVar2)] ^ bVar1) * 4);
    iVar5 = iVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar5 != 0x100);
  FUN_00d26cd0(param_1,local_228,&DAT_01ebee10,*(uint *)(param_1 + 0x3c) >> 8);
  iVar5 = 0x100;
  pbVar3 = local_228;
  pbVar4 = local_128;
  do {
    *pbVar4 = (&DAT_01ebef10)[*pbVar3];
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00d26cd0(param_1,local_128,local_128,*(uint *)(param_1 + 0x38) >> 8);
  bVar1 = *(byte *)(param_1 + 0x31);
  bVar2 = *(byte *)(param_1 + 0x35);
  iVar5 = 0;
  pbVar3 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x400 + (longlong)iVar5 * 4) =
         *(undefined4 *)
          (&DAT_01ebf410 +
          (longlong)
          (int)(uint)((&DAT_01ebee10)[(int)(uint)((&DAT_01ebef10)[*pbVar3] ^ bVar2)] ^ bVar1) * 4);
    iVar5 = iVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar5 != 0x100);
  FUN_00d26cd0(param_1,local_228,&DAT_01ebee10,*(uint *)(param_1 + 0x3c) >> 0x10);
  iVar5 = 0x100;
  pbVar3 = local_228;
  pbVar4 = local_128;
  do {
    *pbVar4 = (&DAT_01ebee10)[*pbVar3];
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00d26cd0(param_1,local_128,local_128,*(uint *)(param_1 + 0x38) >> 0x10);
  bVar1 = *(byte *)(param_1 + 0x32);
  bVar2 = *(byte *)(param_1 + 0x36);
  iVar5 = 0;
  pbVar3 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x800 + (longlong)iVar5 * 4) =
         *(undefined4 *)
          (&DAT_01ebf810 +
          (longlong)
          (int)(uint)((&DAT_01ebef10)[(int)(uint)((&DAT_01ebee10)[*pbVar3] ^ bVar2)] ^ bVar1) * 4);
    iVar5 = iVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar5 != 0x100);
  FUN_00d26cd0(param_1,local_228,&DAT_01ebef10,*(uint *)(param_1 + 0x3c) >> 0x18);
  iVar5 = 0x100;
  pbVar3 = local_228;
  pbVar4 = local_128;
  do {
    *pbVar4 = (&DAT_01ebee10)[*pbVar3];
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00d26cd0(param_1,local_128,local_128,*(uint *)(param_1 + 0x38) >> 0x18);
  bVar1 = *(byte *)(param_1 + 0x33);
  bVar2 = *(byte *)(param_1 + 0x37);
  iVar5 = 0;
  pbVar3 = local_128;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xc00 + (longlong)iVar5 * 4) =
         *(undefined4 *)
          (&DAT_01ebfc10 +
          (longlong)
          (int)(uint)((&DAT_01ebef10)[(int)(uint)((&DAT_01ebef10)[*pbVar3] ^ bVar2)] ^ bVar1) * 4);
    iVar5 = iVar5 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar5 != 0x100);
  return;
}

