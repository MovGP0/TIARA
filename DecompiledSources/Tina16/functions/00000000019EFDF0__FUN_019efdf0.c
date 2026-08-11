/* Ghidra address: 019efdf0 */
/* Ghidra symbol: FUN_019efdf0 */


bool FUN_019efdf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  bool local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_39 = false;
  if ((*(longlong *)(param_1 + 0x88) == 0) ||
     (cVar1 = FUN_01d01970(*(undefined8 *)(param_1 + 0x88)), cVar1 == '\0')) {
    if (((*(longlong *)(param_1 + 0x80) != 0) &&
        (cVar1 = FUN_01d04d40(*(undefined8 *)(param_1 + 0x80)), cVar1 != '\0')) &&
       (*(char *)(*(longlong *)(param_1 + 0x80) + 0x1a0) == '\x01')) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x1c8))();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x80) + 0x298))
                    (*(longlong **)(param_1 + 0x80),&local_38,iVar4);
          iVar3 = FUN_00416db0(local_38,local_res10[0]);
          local_39 = iVar3 == 0;
          if (local_39) break;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x1c8))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_019ef990(*(undefined8 *)(param_1 + 0xb0),local_30,*(undefined8 *)(param_1 + 0x88),iVar4)
        ;
        iVar3 = FUN_00416db0(local_30[0],local_res10[0]);
        local_39 = iVar3 == 0;
        if (local_39) break;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return local_39;
}

