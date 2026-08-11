/* Ghidra address: 01cd6f90 */
/* Ghidra symbol: FUN_01cd6f90 */


void FUN_01cd6f90(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_01ada080(*(undefined8 *)(param_1 + 0x60));
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x38))
              (*(longlong **)(param_1 + 0x110),L"main",L"Enabled",*(undefined1 *)(param_1 + 0x12));
    FUN_00b8fd60(local_20,*(undefined8 *)(param_2 + 0xb8),9,0,1);
    FUN_00b8fd60(&local_28,*(undefined8 *)(param_1 + 0xb8),9,0,1);
    iVar2 = FUN_00416db0(local_20[0],local_28);
    if (iVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd7290,
                 *(undefined8 *)(param_1 + 0xb8));
    }
    FUN_00b8fd60(&local_30,*(undefined8 *)(param_2 + 0xc0),9,0,1);
    FUN_00b8fd60(&local_38,*(undefined8 *)(param_1 + 0xc0),9,0,1);
    iVar2 = FUN_00416db0(local_30,local_38);
    if (iVar2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x80))
                (*(longlong **)(param_1 + 0x110),L"main",&DAT_01cd72a4,
                 *(undefined8 *)(param_1 + 0xc0));
    }
    if (*(int *)(param_2 + 0x74) != *(int *)(param_1 + 0x74)) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"divs",*(int *)(param_1 + 0x74));
    }
    if (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x90)) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"precision",*(int *)(param_1 + 0x90));
    }
    if (*(char *)(param_2 + 0x80) != *(char *)(param_1 + 0x80)) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x28))
                (*(longlong **)(param_1 + 0x110),L"main",L"nformat",*(char *)(param_1 + 0x80));
    }
    FUN_01add6f0(*(undefined8 *)(param_1 + 0x60),local_res18[0]);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res18);
  return;
}

