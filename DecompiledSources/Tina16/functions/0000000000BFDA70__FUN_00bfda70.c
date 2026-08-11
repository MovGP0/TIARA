/* Ghidra address: 00bfda70 */
/* Ghidra symbol: FUN_00bfda70 */


void FUN_00bfda70(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_288 [32];
  longlong *local_268;
  undefined8 local_258;
  undefined1 *local_250;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230 [520];
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_250 = auStack_288;
  local_258 = 0;
  puVar1 = auStack_288;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_28 = thunk_FUN_03fe6811(*(undefined8 *)(param_2 + 8),0xffffffff,0,0);
    thunk_FUN_03cd2fa4(*(undefined8 *)(param_2 + 8),&local_238);
    local_24 = 0;
    iVar2 = local_28;
    if (-1 < local_28 + -1) {
      do {
        thunk_FUN_03fe6811(*(undefined8 *)(param_2 + 8),local_24,local_230,0x104);
        FUN_00416830(&local_258,local_230,0x104);
        (**(code **)(*local_20 + 0x78))(local_20,local_258);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_268 = local_20;
    (**(code **)(param_1 + 0x6b0))(*(undefined8 *)(param_1 + 0x6b8),param_1,local_238,local_234);
    FUN_00410f20(local_20);
    puVar1 = local_250;
  }
  local_250 = puVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  thunk_FUN_041bc5c8(*(undefined8 *)(param_2 + 8));
  FUN_00414480(&local_258);
  return;
}

