/* Ghidra address: 01d5dee0 */
/* Ghidra symbol: FUN_01d5dee0 */


void FUN_01d5dee0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 uint *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 local_38;
  char local_30;
  
  local_38 = *param_4;
  uVar1 = param_4[1];
  uVar2 = FUN_016e9e80(param_1,1);
  *param_5 = uVar2 & 0xff;
  *(char *)(param_5 + 1) = (char)param_2;
  *(char *)((longlong)param_5 + 5) = (char)param_3;
  FUN_016ebe60(param_1,(char)*param_5 + '\x01',param_2,param_3,1);
  FUN_016ed320(param_1,(char)*param_5 + '\x01',0,0,0);
  local_30 = (char)uVar1;
  if (local_30 != '\0') {
    local_38 = 0x46293e5939a08cea;
  }
  FUN_016ef160(param_1,0x3cd203af9ee75616,local_38,*param_5 + 1,(char)param_2,(char)param_3,1,1);
  return;
}

