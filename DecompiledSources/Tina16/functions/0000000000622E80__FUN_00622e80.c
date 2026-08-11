/* Ghidra address: 00622e80 */
/* Ghidra symbol: FUN_00622e80 */


undefined4
FUN_00622e80(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  undefined4 local_24;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  if (param_6 == (undefined8 *)0x0) {
    local_24 = 0x80004003;
    local_40 = auStack_78;
    goto LAB_006230cb;
  }
  *param_6 = 0;
  puVar1 = auStack_78;
  if (*(char *)((longlong)param_1 + 0x65) == '\0') {
LAB_00622f38:
    local_40 = puVar1;
    iVar3 = FUN_00416420(param_5,0);
    if (iVar3 == 0) {
      cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar2 == '\0') goto LAB_00622f62;
    }
    if (param_2 != 0) {
      cVar2 = thunk_FUN_041c9697(param_4,&DAT_0062311c);
      if (cVar2 == '\0') {
        local_24 = 0x80040110;
        goto LAB_006230cb;
      }
    }
    local_30 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,param_2);
    local_24 = (**(code **)(*local_30 + 0x10))(local_30,param_4,param_6);
    if (*(int *)((longlong)local_30 + 0x1c) == 0) {
      FUN_00410f20(local_30);
    }
  }
  else {
    iVar3 = FUN_00416420(param_5,0);
    puVar1 = local_40;
    if (iVar3 == 0) goto LAB_00622f38;
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_5);
    puVar1 = local_40;
    if (cVar2 != '\0') goto LAB_00622f38;
LAB_00622f62:
    local_24 = 0x80040112;
  }
LAB_006230cb:
  FUN_00414560(&local_50,2);
  return local_24;
}

