/* Ghidra address: 014fe320 */
/* Ghidra symbol: FUN_014fe320 */


undefined1 FUN_014fe320(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 local_2d;
  undefined1 local_2c [12];
  
  uVar3 = param_2 & 0xffffffff;
  if ((int)param_2 == 0) {
    uVar2 = FUN_015f8ec0();
    *param_3 = uVar2;
    uVar1 = 0;
  }
  else {
    if (*PTR_DAT_02003fc8 != '\0') {
      uVar2 = FUN_015f8ec0();
      *param_3 = uVar2;
    }
    if (*(char *)(DAT_0210ec08 + 0x741) == '\0') {
      if (*PTR_DAT_02003fc8 == '\0') {
        _get_digital_node_value(param_1,uVar3,&local_2d,param_3,local_2c,0);
      }
      uVar2 = FUN_014fe1f0(uVar3);
      uVar1 = FUN_01cc5a50(*(undefined8 *)PTR_DAT_02001440,uVar2,DAT_0210ec18);
    }
    else {
      if (*PTR_DAT_02003fc8 != '\0') {
        uVar3 = FUN_01aa8f70(*(undefined8 *)(DAT_0210ec08 + 0x728),uVar3);
      }
      uVar1 = *(undefined1 *)(*(longlong *)(DAT_0210ec08 + 0x730) + (uVar3 & 0xffff));
    }
  }
  return uVar1;
}

