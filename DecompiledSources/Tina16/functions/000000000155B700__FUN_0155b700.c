/* Ghidra address: 0155b700 */
/* Ghidra symbol: FUN_0155b700 */


void FUN_0155b700(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  code *local_28;
  undefined8 local_20;
  
  cVar1 = FUN_01995600(param_2,0,0);
  if (cVar1 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    local_28 = FUN_015672d0;
    local_20 = param_1;
    FUN_015670c0(param_1,param_2,0,&local_28);
  }
  return;
}

