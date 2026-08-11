/* Ghidra address: 00a448d0 */
/* Ghidra symbol: FUN_00a448d0 */


void FUN_00a448d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_20,param_3);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_48,local_24);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
                        (*(longlong **)(param_1 + 0x10),local_48);
      if (iVar2 < 0) {
        (**(code **)(*local_20 + 0x18))(local_20,&local_50,local_24);
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                  (*(longlong **)(param_1 + 0x10),local_50);
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_24 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2)
  ;
  if (local_24 < 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2,local_20)
    ;
    local_20 = (longlong *)0x0;
  }
  else {
    local_30 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                         (*(longlong **)(param_1 + 8),local_24);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_58,local_24);
        iVar2 = (**(code **)(*local_30 + 0xb0))(local_30,local_58);
        if (iVar2 < 0) {
          (**(code **)(*local_20 + 0x18))(local_20,&local_60,local_24);
          (**(code **)(*local_30 + 0x78))(local_30,local_60);
        }
        local_24 = local_24 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,4);
  return;
}

