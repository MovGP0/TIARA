/* Ghidra address: 004c14b0 */
/* Ghidra symbol: FUN_004c14b0 */


undefined8 * FUN_004c14b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_48;
  undefined1 local_40;
  int local_38;
  undefined1 local_30;
  
  iVar2 = 0;
  FUN_00414ad0(param_2,param_3);
  while( true ) {
    cVar1 = FUN_004a5040(*param_2);
    if (cVar1 != '\0') break;
    iVar2 = iVar2 + 1;
    local_40 = 0x11;
    local_30 = 0;
    local_48 = param_3;
    local_38 = iVar2;
    FUN_00442f70(param_2,L"%s_%d",&local_48,1);
  }
  return param_2;
}

