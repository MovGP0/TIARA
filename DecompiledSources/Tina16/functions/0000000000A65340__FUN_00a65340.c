/* Ghidra address: 00a65340 */
/* Ghidra symbol: FUN_00a65340 */


void FUN_00a65340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0xa8),L"border");
  if (iVar2 == 0) {
    FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0xa8),L"-top",param_2);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    (**(code **)*puVar1)
              (puVar1,local_20[0],param_3,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58));
    FUN_00416cd0(&local_28,3,*(undefined8 *)(param_1 + 0xa8),L"-right",param_2);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    (**(code **)*puVar1)
              (puVar1,local_28,param_3,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58));
    FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0xa8),L"-bottom",param_2);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    (**(code **)*puVar1)
              (puVar1,local_30,param_3,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58));
    FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0xa8),L"-left",param_2);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    (**(code **)*puVar1)
              (puVar1,local_38,param_3,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58));
  }
  else {
    FUN_00416ba0(&local_40,*(undefined8 *)(param_1 + 0xa8),param_2);
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x30);
    (**(code **)*puVar1)
              (puVar1,local_40,param_3,*(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x58));
  }
  FUN_00414560(&local_40,5);
  return;
}

