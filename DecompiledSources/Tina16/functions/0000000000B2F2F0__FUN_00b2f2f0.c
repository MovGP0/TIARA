/* Ghidra address: 00b2f2f0 */
/* Ghidra symbol: FUN_00b2f2f0 */


undefined8 FUN_00b2f2f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  undefined2 local_2a;
  
  local_2a = *(undefined2 *)(param_3 + 9);
  FUN_00417360(param_2,0,0xb);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = 0x3b;
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(&local_2a,lVar2 + 1,2);
  lVar2 = FUN_00414df0(param_2);
  *(undefined2 *)(lVar2 + 3) = *(undefined2 *)(param_3 + 0xb);
  lVar2 = FUN_00414df0(param_2);
  *(undefined2 *)(lVar2 + 5) = *(undefined2 *)(param_3 + 0xd);
  lVar2 = FUN_00414df0(param_2);
  *(ushort *)(lVar2 + 7) = (ushort)*(byte *)(param_3 + 0xf);
  lVar2 = FUN_00414df0(param_2);
  *(ushort *)(lVar2 + 9) = (ushort)*(byte *)(param_3 + 0x10);
  bVar3 = 0;
  bVar4 = 0;
  if (*(char *)(param_3 + 0x13) == '\0') {
    bVar3 = 0x40;
  }
  if (*(char *)(param_3 + 0x11) == '\0') {
    bVar3 = bVar3 | 0x80;
  }
  if (*(char *)(param_3 + 0x14) == '\0') {
    bVar4 = 0x40;
  }
  if (*(char *)(param_3 + 0x12) == '\0') {
    bVar4 = bVar4 | 0x80;
  }
  lVar2 = FUN_00414df0(param_2);
  *(byte *)(lVar2 + 8) = bVar3;
  lVar2 = FUN_00414df0(param_2);
  *(byte *)(lVar2 + 10) = bVar4;
  return param_2;
}

