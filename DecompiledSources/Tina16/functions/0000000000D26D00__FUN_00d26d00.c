/* Ghidra address: 00d26d00 */
/* Ghidra symbol: FUN_00d26d00 */


void FUN_00d26d00(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte local_118 [256];
  
  FUN_00d26cd0(param_1,local_118,&DAT_01ebee10,*(undefined4 *)(param_1 + 0x34));
  bVar1 = *(byte *)(param_1 + 0x30);
  iVar2 = 0;
  pbVar3 = local_118;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 4) =
         *(undefined4 *)
          (&DAT_01ebf010 + (longlong)(int)(uint)((&DAT_01ebee10)[*pbVar3] ^ bVar1) * 4);
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 != 0x100);
  FUN_00d26cd0(param_1,local_118,&DAT_01ebef10,*(uint *)(param_1 + 0x34) >> 8);
  bVar1 = *(byte *)(param_1 + 0x31);
  iVar2 = 0;
  pbVar3 = local_118;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x400 + (longlong)iVar2 * 4) =
         *(undefined4 *)
          (&DAT_01ebf410 + (longlong)(int)(uint)((&DAT_01ebee10)[*pbVar3] ^ bVar1) * 4);
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 != 0x100);
  FUN_00d26cd0(param_1,local_118,&DAT_01ebee10,*(uint *)(param_1 + 0x34) >> 0x10);
  bVar1 = *(byte *)(param_1 + 0x32);
  iVar2 = 0;
  pbVar3 = local_118;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x800 + (longlong)iVar2 * 4) =
         *(undefined4 *)
          (&DAT_01ebf810 + (longlong)(int)(uint)((&DAT_01ebef10)[*pbVar3] ^ bVar1) * 4);
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 != 0x100);
  FUN_00d26cd0(param_1,local_118,&DAT_01ebef10,*(uint *)(param_1 + 0x34) >> 0x18);
  bVar1 = *(byte *)(param_1 + 0x33);
  iVar2 = 0;
  pbVar3 = local_118;
  do {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xc00 + (longlong)iVar2 * 4) =
         *(undefined4 *)
          (&DAT_01ebfc10 + (longlong)(int)(uint)((&DAT_01ebef10)[*pbVar3] ^ bVar1) * 4);
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar2 != 0x100);
  return;
}

