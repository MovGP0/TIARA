/* Ghidra address: 004d1cb0 */
/* Ghidra symbol: FUN_004d1cb0 */


void FUN_004d1cb0(longlong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_20 = auStack_48;
  puVar1 = auStack_48;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = FUN_004121f0(DAT_02011650);
  FUN_00411f00(uVar2,0xffffffff);
  if ((DAT_01dcb5c0 != 0) && (local_c = *(int *)(DAT_01dcb5c0 + 0x10) + -1, -1 < local_c)) {
    do {
      local_18 = (undefined8 *)FUN_004aeac0(DAT_01dcb5c0,local_c);
      if ((local_18[2] == 0) && ((param_1 != 0 && (*(longlong *)*local_18 == param_1)))) {
        FUN_004ae870(DAT_01dcb5c0,local_c);
        FUN_00418590(*local_18,&DAT_00483468);
        FUN_004095f0(local_18);
      }
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  FUN_00412130(DAT_02011650);
  return;
}

