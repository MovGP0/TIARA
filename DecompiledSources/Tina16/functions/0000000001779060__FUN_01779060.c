/* Ghidra address: 01779060 */
/* Ghidra symbol: FUN_01779060 */


void FUN_01779060(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *param_2 = uVar2;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  if (iVar1 < 1) {
    *param_3 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30),local_20,0)
    ;
    iVar1 = FUN_0043fc00(local_20[0]);
    if (iVar1 == 1) {
      *param_3 = 1;
    }
    else {
      *param_3 = 0;
    }
    (**(code **)(*(longlong *)*param_2 + 0x10))
              ((longlong *)*param_2,*(undefined8 *)(param_1 + 0x30));
    (**(code **)(*(longlong *)*param_2 + 0x98))((longlong *)*param_2,0);
  }
  FUN_00414480(local_20);
  return;
}

