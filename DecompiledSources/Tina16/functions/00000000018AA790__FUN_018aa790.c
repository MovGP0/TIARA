/* Ghidra address: 018aa790 */
/* Ghidra symbol: FUN_018aa790 */


char FUN_018aa790(longlong param_1,undefined8 param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(&DAT_02110668,local_res10[0]);
  DAT_0211068c = param_4;
  if ((param_3 == '\0') && (*(char *)(param_1 + 0x4b9) != '\0')) {
    *(int *)(*(longlong *)(param_1 + 0x550) + 0x50c) = *(int *)(param_1 + 0x528) + -1;
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x550) + 0x50c) = 0;
  }
  DAT_02110688 = 0xffffffff;
  FUN_018a6c20(*(undefined8 *)(param_1 + 0x550));
  if (DAT_02110670 != '\0') {
    FUN_018aba30(param_1);
  }
  cVar1 = DAT_02110670;
  FUN_00414480(local_res10);
  return cVar1;
}

