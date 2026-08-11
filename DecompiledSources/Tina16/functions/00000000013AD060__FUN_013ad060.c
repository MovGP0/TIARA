/* Ghidra address: 013ad060 */
/* Ghidra symbol: FUN_013ad060 */


char FUN_013ad060(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  char local_19;
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_19 = '\0';
  local_3c = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)local_28 + 0x2c) = 0xff;
  while (local_19 == '\0') {
    iVar1 = (**(code **)(**(longlong **)(local_res10 + 0x448) + 0x28))
                      (*(longlong **)(local_res10 + 0x448));
    if (iVar1 <= local_3c) break;
    (**(code **)(*local_28 + 0x90))(local_28);
    (**(code **)(**(longlong **)(local_res10 + 0x448) + 0x18))
              (*(longlong **)(local_res10 + 0x448),&local_58,local_3c);
    FUN_004b50b0(local_28,local_58);
    iVar1 = (**(code **)(*local_28 + 0x28))(local_28);
    if (iVar1 == 3) {
      (**(code **)(*local_28 + 0x18))(local_28,&local_60,0);
      iVar1 = FUN_00416db0(local_60,local_res8);
      if (iVar1 == 0) {
        local_19 = '\x01';
        (**(code **)(*local_28 + 0x18))(local_28,&local_30,1);
        (**(code **)(*local_28 + 0x18))(local_28,&local_38,2);
        uVar2 = FUN_00b8f030(local_30);
        *local_res18 = uVar2;
        uVar2 = FUN_00b8f030(local_38);
        *local_res20 = uVar2;
      }
    }
    local_3c = local_3c + 1;
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res8);
  return local_19;
}

