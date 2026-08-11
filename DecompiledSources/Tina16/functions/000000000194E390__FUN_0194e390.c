/* Ghidra address: 0194e390 */
/* Ghidra symbol: FUN_0194e390 */


void FUN_0194e390(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0043ea00(&local_10,param_2);
  if (local_10 == 0) {
    uVar1 = FUN_0180bfb0();
    FUN_01809b60(uVar1,&local_18,L"prInvProp");
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_18);
    FUN_004134c0(uVar1);
  }
  FUN_00414ad0(param_1 + 0x1c8,param_2);
  FUN_00414560(&local_18,2);
  return;
}

