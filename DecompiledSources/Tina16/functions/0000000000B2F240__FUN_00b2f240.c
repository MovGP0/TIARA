/* Ghidra address: 00b2f240 */
/* Ghidra symbol: FUN_00b2f240 */


undefined8 FUN_00b2f240(undefined8 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 local_2a [5];
  
  local_2a[0] = *(undefined2 *)(param_3 + 9);
  if (param_4 == '\0') {
    uVar3 = 0x5a;
  }
  else {
    uVar3 = 0x3a;
  }
  FUN_00417360(param_2,0,7);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = uVar3;
  lVar2 = FUN_00414df0(param_2);
  FUN_00409a70(local_2a,lVar2 + 1,2);
  lVar2 = FUN_00414df0(param_2);
  *(undefined2 *)(lVar2 + 3) = *(undefined2 *)(param_3 + 0xb);
  lVar2 = FUN_00414df0(param_2);
  *(undefined1 *)(lVar2 + 5) = *(undefined1 *)(param_3 + 0xf);
  bVar4 = 0;
  if (*(char *)(param_3 + 0x13) == '\0') {
    bVar4 = 0x40;
  }
  if (*(char *)(param_3 + 0x11) == '\0') {
    bVar4 = bVar4 | 0x80;
  }
  lVar2 = FUN_00414df0(param_2);
  *(byte *)(lVar2 + 6) = bVar4;
  return param_2;
}

