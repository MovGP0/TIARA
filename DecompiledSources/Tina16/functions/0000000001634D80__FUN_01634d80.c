/* Ghidra address: 01634d80 */
/* Ghidra symbol: FUN_01634d80 */


undefined4 FUN_01634d80(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar1 <= param_2) {
    FUN_01613110(L"THDLProcess.GetGraphNumber");
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
            (*(longlong **)(param_1 + 0x80),local_20,param_2);
  uVar2 = FUN_0043fc00(local_20[0]);
  FUN_00414480(local_20);
  return uVar2;
}

