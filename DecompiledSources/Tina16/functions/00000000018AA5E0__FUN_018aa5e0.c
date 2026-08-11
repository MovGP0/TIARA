/* Ghidra address: 018aa5e0 */
/* Ghidra symbol: FUN_018aa5e0 */


void FUN_018aa5e0(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *local_res10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  puVar1 = auStack_48;
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x278))(param_1);
    *(int *)(lVar3 + 0x10) = (int)param_1[0xa5];
    lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    local_res10 = param_2;
    if ((*(char *)(lVar3 + 0x180) != '\0') && (*(longlong *)PTR_DAT_020041e8 != 0)) {
      FUN_00410ae0(*param_2,&local_28);
      iVar2 = FUN_00416db0(local_28,L"TfrxTextExport");
      if (iVar2 == 0) {
        local_res10 = *(undefined8 **)PTR_DAT_020041e8;
      }
    }
    if (param_3 == '\0') {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
      (**(code **)(*plVar4 + 0x168))(plVar4,local_res10);
    }
    else {
      FUN_018aa770(param_1,local_res10);
    }
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00414480(&local_28);
  return;
}

