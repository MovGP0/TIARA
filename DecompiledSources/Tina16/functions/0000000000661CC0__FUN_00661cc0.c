/* Ghidra address: 00661cc0 */
/* Ghidra symbol: FUN_00661cc0 */


longlong FUN_00661cc0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  
  local_20 = 0;
  *param_3 = 0;
  lVar1 = FUN_00661ae0(param_1,param_2);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x108) != *(longlong *)(param_1 + 0x28))) {
    lVar2 = FUN_00660e70(*(undefined8 *)(param_1 + 0x90));
    if ((lVar2 != 0) && (lVar1 == 0)) {
      uVar3 = FUN_00660e70(*(undefined8 *)(param_1 + 0x90));
      FUN_00661ba0(auStack_48,uVar3);
    }
  }
  else {
    local_20 = FUN_00661230(param_1,lVar1);
    if (local_20 != 0) {
      *param_3 = 1;
    }
  }
  return local_20;
}

