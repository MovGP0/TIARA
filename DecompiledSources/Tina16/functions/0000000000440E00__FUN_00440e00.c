/* Ghidra address: 00440e00 */
/* Ghidra symbol: FUN_00440e00 */


undefined1 FUN_00440e00(undefined8 param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 local_279;
  undefined8 local_270;
  uint local_268 [148];
  
  local_270 = 0;
  local_279 = 0;
  thunk_FUN_041931fb(0);
  uVar3 = FUN_00416740(param_1);
  iVar2 = thunk_FUN_041e708b(uVar3,0,local_268);
  if (iVar2 == 0) goto LAB_00440e9f;
  if ((local_268[0] & 0x400) != 0) {
    if (param_3 == '\0') goto LAB_00440e9f;
    cVar1 = FUN_0043da30(param_1,&local_270);
    if (cVar1 == '\0') goto LAB_00440e9f;
    uVar3 = FUN_00416740(local_270);
    iVar2 = thunk_FUN_041e708b(uVar3,0,local_268);
    if (iVar2 == 0) goto LAB_00440e9f;
  }
  puVar5 = local_268;
  for (lVar4 = 0x4a; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_2 = *(undefined8 *)puVar5;
    puVar5 = puVar5 + 2;
    param_2 = param_2 + 1;
  }
  local_279 = 1;
LAB_00440e9f:
  FUN_00414480(&local_270);
  return local_279;
}

