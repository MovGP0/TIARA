/* Ghidra address: 00453ab0 */
/* Ghidra symbol: FUN_00453ab0 */


void FUN_00453ab0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_18 [2];
  undefined1 local_10;
  
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    local_10 = 0;
    local_18[0] = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02004940,local_18,0);
    FUN_004134c0(uVar1);
  }
  return;
}

