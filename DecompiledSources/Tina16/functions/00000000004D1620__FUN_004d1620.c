/* Ghidra address: 004d1620 */
/* Ghidra symbol: FUN_004d1620 */


void FUN_004d1620(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_38;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_28 = *param_2;
  local_20 = param_2[1];
  puVar1 = auStack_68;
  if (*(longlong *)PTR_PTR_02002ff8 == 0) {
    FUN_004098e0(0x1a);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  uVar2 = FUN_004121f0(DAT_02011650);
  FUN_00411f00(uVar2,0xffffffff);
  if ((DAT_01dcb5c0 != 0) && (local_2c = *(int *)(DAT_01dcb5c0 + 0x10) + -1, -1 < local_2c)) {
    do {
      local_38 = (longlong *)FUN_004aeac0(DAT_01dcb5c0,local_2c);
      if ((local_38[2] == 0) &&
         (((param_1 != 0 && (*(longlong *)*local_38 == param_1)) ||
          ((local_28 != 0 &&
           ((*(longlong *)(*local_38 + 8) == local_28 &&
            (*(longlong *)(*local_38 + 0x10) == local_20)))))))) {
        FUN_004ae870(DAT_01dcb5c0,local_2c);
        FUN_00418590(*local_38,&DAT_00483468);
        FUN_004095f0(local_38);
      }
      local_2c = local_2c + -1;
    } while (local_2c != -1);
  }
  FUN_00412130(DAT_02011650);
  return;
}

