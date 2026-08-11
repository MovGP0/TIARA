/* Ghidra address: 00f20250 */
/* Ghidra symbol: FUN_00f20250 */


void FUN_00f20250(longlong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if ((*(char *)(param_1 + 0x13) != '\0') &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20)),
     iVar1 == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
              (*(longlong **)(param_1 + 0x20),L"sPostpCodeMarker1");
    FUN_0043f750(local_20,1);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
              (*(longlong **)(param_1 + 0x20),local_20[0]);
    FUN_0043f750(&local_28,*(char *)(param_1 + 0x13) != '\0');
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))(*(longlong **)(param_1 + 0x20),local_28);
  }
  FUN_00414560(&local_28,2);
  return;
}

