/* Ghidra address: 008f8f70 */
/* Ghidra symbol: FUN_008f8f70 */


void FUN_008f8f70(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int local_28 [2];
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02004218);
    uVar1 = FUN_0044d490(&PTR_FUN_00472398,1,local_10);
    FUN_004134c0(uVar1);
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0xc) < param_2)) {
    FUN_0041ddd0(&local_18,PTR_PTR_02005320);
    local_20 = 0;
    local_28[0] = param_2;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_18,local_28,0);
    FUN_004134c0(uVar1);
  }
  FUN_008f9070(param_1,param_2,param_3,param_4);
  FUN_00414560(&local_18,2);
  return;
}

