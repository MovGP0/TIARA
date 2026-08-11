/* Ghidra address: 0060dd20 */
/* Ghidra symbol: FUN_0060dd20 */


void FUN_0060dd20(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 & 0x80000000) != 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02003138);
    uVar1 = FUN_0044d490(&PTR_FUN_005f2298,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

