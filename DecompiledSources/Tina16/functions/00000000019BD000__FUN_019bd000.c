/* Ghidra address: 019bd000 */
/* Ghidra symbol: FUN_019bd000 */


void FUN_019bd000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong local_20;
  
  local_20 = FUN_014860c0(param_2,L"components");
  if (local_20 == 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Missing components array in circuit");
    FUN_004134c0(uVar1);
  }
  FUN_019bce10(param_1,&local_20,param_4,param_4);
  return;
}

