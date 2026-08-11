/* Ghidra address: 0156af20 */
/* Ghidra symbol: FUN_0156af20 */


void FUN_0156af20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_01b21480(local_res10[0]);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_38,local_24);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                        (*(longlong **)(param_1 + 0x10),local_38);
      if (iVar2 == -1) {
        (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_24);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                  (*(longlong **)(param_1 + 0x10),local_40);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return;
}

