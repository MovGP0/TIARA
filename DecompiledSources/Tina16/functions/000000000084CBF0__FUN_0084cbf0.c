/* Ghidra address: 0084cbf0 */
/* Ghidra symbol: FUN_0084cbf0 */


void FUN_0084cbf0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  
  local_40 = auStack_68;
  local_48 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
  if (cVar1 == '\0') {
    FUN_004b30d0(param_1,param_2);
  }
  else {
    FUN_004b3260(param_1);
    local_30 = (**(code **)(*param_2 + 0x28))(param_2);
    local_30 = local_30 + -1;
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 <= local_30) {
      local_30 = (**(code **)(*param_1 + 0x28))(param_1);
      local_30 = local_30 + -1;
    }
    local_2c = 0;
    if (-1 < local_30) {
      iVar2 = local_30 + 1;
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_2c);
        (**(code **)(*param_1 + 0x40))(param_1,local_2c,local_48);
        uVar3 = (**(code **)(*param_2 + 0x30))(param_2,local_2c);
        (**(code **)(*param_1 + 0x48))(param_1,local_2c,uVar3);
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004b3390(param_1);
  }
  FUN_00414480(&local_48);
  return;
}

