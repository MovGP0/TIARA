/* Ghidra address: 008366e0 */
/* Ghidra symbol: FUN_008366e0 */


void FUN_008366e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  undefined1 local_10 [4];
  int local_c;
  
  local_20[0] = 0;
  FUN_00682130(param_1,param_2);
  FUN_008350c0(param_1,local_20);
  FUN_00414ad0(param_1 + 0x4f8,local_20[0]);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_00835860(param_1,&local_c,local_10);
    iVar2 = FUN_00836330(param_1,local_c);
    if (iVar2 != local_c) {
      FUN_008358c0(param_1,iVar2);
    }
  }
  FUN_00414480(local_20);
  return;
}

