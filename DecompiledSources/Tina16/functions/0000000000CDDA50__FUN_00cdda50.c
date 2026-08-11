/* Ghidra address: 00cdda50 */
/* Ghidra symbol: FUN_00cdda50 */


undefined8 FUN_00cdda50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),local_30,iVar3);
      cVar1 = FUN_00879090(local_30[0],local_res18[0]);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                  (*(longlong **)(param_1 + 0x18),param_2,iVar3);
        goto LAB_00cddafd;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(param_2);
LAB_00cddafd:
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

