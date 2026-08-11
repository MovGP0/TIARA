/* Ghidra address: 01968c70 */
/* Ghidra symbol: FUN_01968c70 */


void FUN_01968c70(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar2 = param_2;
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x1a8);
    if (lVar2 == param_1) {
      uVar1 = FUN_0180bfb0();
      FUN_01809b60(uVar1,&local_10,L"clCirRefNotAllow");
      uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
      lVar2 = FUN_004134c0(uVar1);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = param_2;
  FUN_00414480(&local_10);
  return;
}

