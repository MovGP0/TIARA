/* Ghidra address: 00cacd60 */
/* Ghidra symbol: FUN_00cacd60 */


void FUN_00cacd60(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res20;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_20;
  char local_19;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_00875240(&local_38,local_res20,param_1[0x2a],3);
  FUN_0041b840(&local_res20,local_38);
  cVar1 = FUN_00cb0ad0(param_1);
  local_19 = cVar1 == '\0';
  if ((bool)local_19) {
    FUN_00cb0bf0(param_1);
  }
  if (param_3 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_00cacb60(param_1,uVar2,1);
  }
  iVar3 = (**(code **)(*param_2 + 0x28))();
  local_20 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_40,local_20);
      (**(code **)(*param_1 + 0x150))(param_1,local_40,local_res20);
      local_20 = local_20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_19 != '\0') {
    (**(code **)(*param_1 + 0x1b8))(param_1);
  }
  FUN_00414480(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_res20);
  return;
}

