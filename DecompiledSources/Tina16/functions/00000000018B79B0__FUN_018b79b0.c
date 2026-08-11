/* Ghidra address: 018b79b0 */
/* Ghidra symbol: FUN_018b79b0 */


undefined8 FUN_018b79b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00414480(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_3);
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
              (*(longlong **)(param_1 + 0x10),param_2,uVar2);
  }
  return param_2;
}

