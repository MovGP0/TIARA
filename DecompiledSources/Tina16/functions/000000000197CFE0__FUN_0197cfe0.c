/* Ghidra address: 0197cfe0 */
/* Ghidra symbol: FUN_0197cfe0 */


void FUN_0197cfe0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(char *)(param_1 + 0x100) = param_2;
  if (param_2 == '\0') {
    uVar1 = FUN_0180bfb0();
    FUN_01809b60(uVar1,&local_18,L"clComprPreparedRepFilter");
    FUN_00414ad0(param_1 + 0xb0,local_18);
  }
  else {
    uVar1 = FUN_0180bfb0();
    FUN_01809b60(uVar1,&local_10,L"dsComprRepFilter");
    FUN_00414ad0(param_1 + 0xb0,local_10);
  }
  FUN_00414560(&local_18,2);
  return;
}

