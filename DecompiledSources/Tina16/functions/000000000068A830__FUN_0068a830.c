/* Ghidra address: 0068a830 */
/* Ghidra symbol: FUN_0068a830 */


longlong FUN_0068a830(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(byte *)(lVar1 + 0x4cc) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(lVar1 + 0x4cc) & 0x1f) &
            0x18U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    local_28 = FUN_0068e1d0(lVar1,param_2);
  }
  else {
    pcVar2 = (code *)FUN_00411550(lVar1,0xffaa);
    local_28 = (*pcVar2)(lVar1,param_2);
    if (local_28 == -1) {
      FUN_0041ddd0(local_20,PTR_PTR_02004940);
      FUN_004b34c0(param_1,local_20[0],param_2);
    }
  }
  FUN_00414480(local_20);
  return local_28;
}

