/* Ghidra address: 017e9f10 */
/* Ghidra symbol: FUN_017e9f10 */


undefined1 FUN_017e9f10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 local_119;
  undefined1 local_118 [268];
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_00c53800(local_res10[0],&local_c);
  if (cVar1 != '\0') {
    iVar2 = FUN_017e9d70(param_1,*(undefined8 *)(param_1 + 0x900),local_c);
    FUN_010c7a40(param_3,(double)iVar2);
    FUN_00416910(local_118,local_res10[0],0xff);
    FUN_013b3040(*(undefined8 *)(param_1 + 0x4e8),local_118,param_3);
  }
  FUN_00414480(local_res10);
  return local_119;
}

