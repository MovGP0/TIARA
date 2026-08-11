/* Ghidra address: 01a7a150 */
/* Ghidra symbol: FUN_01a7a150 */


void FUN_01a7a150(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x410,*(undefined4 *)(param_1 + 0x6b8),L"NormalZoomBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    FUN_01ad9580(*(undefined8 *)(param_1 + 0x798),0,1,0);
    FUN_01a782f0(param_1,local_20);
    cVar1 = FUN_01acf9e0(*(undefined8 *)(param_1 + 0x798),local_20);
    if (cVar1 == '\0') {
      FUN_01acfc60(*(undefined8 *)(param_1 + 0x798));
    }
    else {
      FUN_01acfa60(*(undefined8 *)(param_1 + 0x798));
    }
    FUN_01add6f0(*(undefined8 *)(param_1 + 0x798),0);
    FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),1);
  }
  FUN_00414480(&local_10);
  return;
}

