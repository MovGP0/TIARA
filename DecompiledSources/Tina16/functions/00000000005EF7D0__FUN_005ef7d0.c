/* Ghidra address: 005ef7d0 */
/* Ghidra symbol: FUN_005ef7d0 */


undefined8 FUN_005ef7d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined1 local_20;
  
  cVar1 = FUN_005ef8d0(param_2,param_1);
  if (cVar1 == '\0') {
    local_38 = *(undefined8 *)PTR_PTR_02005288;
    local_30 = 0x11;
    local_20 = 0;
    local_28 = param_2;
    FUN_00442fd0(param_1,L"%s%0.8x",&local_38,1);
  }
  return param_1;
}

