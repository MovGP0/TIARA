/* Ghidra address: 0072dba0 */
/* Ghidra symbol: FUN_0072dba0 */


void FUN_0072dba0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_40;
  longlong *local_30;
  undefined8 local_28 [3];
  
  local_40 = auStack_78;
  local_28[0] = 0;
  local_30 = (longlong *)0x0;
  puVar1 = auStack_78;
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      local_40 = auStack_78;
      FUN_00414b50(local_28,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0xc0));
    }
    else {
      FUN_00414b50(local_28,*(undefined8 *)(param_1 + 0x1c8));
    }
    uVar3 = FUN_0041b800(&local_30);
    cVar2 = FUN_00714c80(uVar3);
    puVar1 = local_40;
    if (cVar2 != '\0') {
      local_58 = (longlong)*(int *)(param_1 + 0xe0);
      (**(code **)(*local_30 + 0x40))
                (local_30,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),local_28[0],1);
      puVar1 = local_40;
    }
  }
  local_40 = puVar1;
  FUN_0041b800(&local_30);
  FUN_00414480(local_28);
  return;
}

