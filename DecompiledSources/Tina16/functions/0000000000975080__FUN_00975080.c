/* Ghidra address: 00975080 */
/* Ghidra symbol: FUN_00975080 */


undefined8 FUN_00975080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_res18[0] = param_3;
  FUN_00414650(local_res18);
  FUN_00414520(param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  if (0 < iVar3) {
    do {
      cVar1 = FUN_009a9480(*(undefined8 *)(param_1 + 0x88),iVar3);
      if (cVar1 != '\0') {
        FUN_009a8410(*(undefined8 *)(param_1 + 0x88),&local_28,iVar3);
        iVar2 = FUN_00416420(local_28,local_res18[0]);
        if (iVar2 == 0) {
          FUN_009a8410(*(undefined8 *)(param_1 + 0x88),&local_38,iVar3);
          FUN_00414b90(param_2,local_30);
          break;
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00417840(&local_38,&DAT_009427f8,2);
  FUN_00414520(local_res18);
  return param_2;
}

