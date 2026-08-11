/* Ghidra address: 00f2e6b0 */
/* Ghidra symbol: FUN_00f2e6b0 */


void FUN_00f2e6b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar1 = FUN_00f34990(param_1,param_2);
  if (lVar1 == 0) {
    local_20 = 0x11;
    local_28 = param_2;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00f214b0,1,PTR_PTR_02005b70,&local_28,0);
    FUN_004134c0(uVar2);
  }
  return;
}

