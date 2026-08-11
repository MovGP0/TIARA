/* Ghidra address: 0068bca0 */
/* Ghidra symbol: FUN_0068bca0 */


bool FUN_0068bca0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int local_28 [2];
  undefined1 local_20;
  
  uVar1 = FUN_0065b870();
  iVar2 = thunk_FUN_041b2403(uVar1,0x187,(longlong)param_2,0);
  if (iVar2 == -1) {
    local_20 = 0;
    local_28[0] = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004347c0,1,PTR_PTR_02004940,local_28,0);
    iVar2 = FUN_004134c0(uVar1);
  }
  return iVar2 != 0;
}

