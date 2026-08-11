/* Ghidra address: 01634ca0 */
/* Ghidra symbol: FUN_01634ca0 */


void FUN_01634ca0(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar1 <= param_2) {
    FUN_01613110(L"THDLProcess.SetxGraphNumber");
  }
  FUN_0043f750(local_20,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x40))
            (*(longlong **)(param_1 + 0x80),param_2,local_20[0]);
  FUN_00414480(local_20);
  return;
}

