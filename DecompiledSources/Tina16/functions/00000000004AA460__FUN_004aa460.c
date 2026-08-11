/* Ghidra address: 004aa460 */
/* Ghidra symbol: FUN_004aa460 */


longlong FUN_004aa460(longlong param_1,undefined **param_2)

{
  ushort *puVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  undefined **local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  lVar2 = FUN_004aa0c0(&DAT_004a5210,1);
  FUN_004ef2a0(*(undefined8 *)(param_1 + 8),param_2,lVar2);
  local_40 = param_2;
  while ((local_40 != (undefined **)0x0 && (local_40 != &PTR_FUN_00486f38))) {
    puVar1 = (ushort *)local_40[-0x14];
    if (puVar1 != (ushort *)0x0) {
      puVar3 = puVar1 + 5;
      uVar4 = (uint)*puVar1;
      if (-1 < (int)(uVar4 - 1)) {
        do {
          local_20 = FUN_00587fb0(puVar3);
          FUN_00587e00(&local_20,&local_30);
          FUN_004eda60(*(undefined8 *)(lVar2 + 0x10),local_30,*(undefined4 *)puVar3);
          local_28 = FUN_00587fb0(puVar3);
          puVar3 = (ushort *)FUN_00587ee0(&local_28);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    local_40 = (undefined **)FUN_00410ca0();
  }
  FUN_00414480(&local_30);
  return lVar2;
}

