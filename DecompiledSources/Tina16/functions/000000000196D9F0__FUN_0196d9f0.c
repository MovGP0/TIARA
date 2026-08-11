/* Ghidra address: 0196d9f0 */
/* Ghidra symbol: FUN_0196d9f0 */


void FUN_0196d9f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = FUN_0196dc70(*(undefined8 *)(param_1 + 8),param_2);
  if ((lVar1 == 0) || (lVar1 == param_1)) {
    FUN_00414ad0(param_1 + 0x20,param_2);
  }
  else {
    uVar2 = FUN_0180bfb0();
    FUN_01809b60(uVar2,&local_10,L"clDupName");
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return;
}

