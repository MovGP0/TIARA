/* Ghidra address: 015f0ae0 */
/* Ghidra symbol: FUN_015f0ae0 */


undefined8 FUN_015f0ae0(undefined8 param_1,char *param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *local_res10 [3];
  undefined8 local_440 [65];
  undefined1 local_231 [513];
  byte *local_30 [2];
  
  local_440[0] = 0;
  local_30[0] = (byte *)0x0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_004144d0(local_30);
  iVar3 = 0;
  if (local_res10[0] != (char *)0x0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_00c535d0(local_res10[0][(longlong)iVar2 + -1]);
      if (((cVar1 == '\0') &&
          (cVar1 = FUN_00c53600(local_res10[0][(longlong)iVar2 + -1]), cVar1 == '\0')) &&
         ((param_4 & local_res10[0][(longlong)iVar2 + -1] == '~') == 0)) {
        if (local_res10[0][(longlong)iVar2 + -1] == ' ') {
          FUN_004155b0(local_30,&DAT_015f0d40);
        }
      }
      else {
        FUN_004153d0(local_440,local_res10[0][(longlong)iVar2 + -1],0);
        FUN_004155b0(local_30,local_440[0]);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (local_30[0] != (byte *)0x0) {
    iVar3 = *(int *)(local_30[0] + -4);
  }
  if (((0 < iVar3) && (cVar1 = FUN_00c535d0(*local_30[0]), cVar1 == '\0')) &&
     ((param_4 & *local_res10[0] == '~') == 0)) {
    FUN_004156b0(local_30,&LAB_015f0d50,local_30[0]);
  }
  FUN_004425e0(local_231,local_30[0]);
  cVar1 = _is_vhdl_keyword(local_231);
  if (cVar1 != '\0') {
    FUN_004156b0(local_30,&LAB_015f0d50,local_30[0]);
  }
  FUN_00414bf0(param_1,local_30[0]);
  FUN_004144d0(local_440);
  FUN_004144d0(local_30);
  FUN_004144d0(local_res10);
  return param_1;
}

