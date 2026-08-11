/* Ghidra address: 00cbd660 */
/* Ghidra symbol: FUN_00cbd660 */


void FUN_00cbd660(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  longlong *local_28;
  char local_19;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_50 = 0;
  FUN_00cbde70(param_1);
  local_28 = *(longlong **)(param_1 + 0x100);
  cVar1 = FUN_00cb0ad0(local_28);
  local_19 = cVar1 == '\0';
  if ((bool)local_19) {
    FUN_00cb0bf0(local_28);
  }
  iVar2 = (**(code **)(*param_2 + 0x28))();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_50,local_2c);
      FUN_00877c20(&local_48,local_50,&DAT_00cbd7e8,&LAB_00cbd7f8);
      (**(code **)(*local_28 + 0x150))(local_28,local_48,0);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00caecc0(local_28,0);
  if (local_19 != '\0') {
    (**(code **)(*local_28 + 0x1b8))(local_28);
  }
  FUN_00414560(&local_50,2);
  return;
}

