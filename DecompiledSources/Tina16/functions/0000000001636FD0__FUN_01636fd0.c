/* Ghidra address: 01636fd0 */
/* Ghidra symbol: FUN_01636fd0 */


undefined8 FUN_01636fd0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x588) + 0x28))(*(longlong **)(param_1 + 0x588));
  if (iVar1 <= param_3) {
    FUN_01613110(L"THDLProcess.GetSignalName");
  }
  (**(code **)(**(longlong **)(param_1 + 0x588) + 0x18))
            (*(longlong **)(param_1 + 0x588),param_2,param_3);
  return param_2;
}

