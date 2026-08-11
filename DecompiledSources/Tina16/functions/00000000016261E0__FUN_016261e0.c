/* Ghidra address: 016261e0 */
/* Ghidra symbol: FUN_016261e0 */


undefined4 * FUN_016261e0(byte *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  puVar1 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar1,0xd0,0);
  *puVar1 = 0x104;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  uVar2 = FUN_00409570(local_128[0] + 1);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  FUN_004154b0(&local_130,local_128,0);
  FUN_004425e0(uVar2,local_130);
  FUN_004144d0(&local_130);
  return puVar1;
}

