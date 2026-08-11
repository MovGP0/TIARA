/* Ghidra address: 00451650 */
/* Ghidra symbol: FUN_00451650 */


uint FUN_00451650(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_230 [520];
  
  uVar1 = FUN_00414ce0(param_1);
  uVar2 = FUN_0041dea0(0xfde9,0,param_1,uVar1,0,0);
  if (uVar2 < 0x105) {
    puVar4 = local_230;
  }
  else {
    puVar4 = (undefined1 *)FUN_004095c0(uVar2 * 2);
  }
  FUN_0041dea0(0xfde9,0,param_1,uVar1,puVar4,uVar2);
  thunk_FUN_03e65ba4();
  uVar5 = 0;
  iVar3 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      uVar5 = (uVar5 << 5 | uVar5 >> 0x1b) ^ (uint)*(ushort *)(puVar4 + (longlong)iVar3 * 2);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (puVar4 != local_230) {
    FUN_004095f0(puVar4);
  }
  return uVar5;
}

