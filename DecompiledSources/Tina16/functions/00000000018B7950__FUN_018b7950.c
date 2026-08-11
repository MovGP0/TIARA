/* Ghidra address: 018b7950 */
/* Ghidra symbol: FUN_018b7950 */


undefined8 FUN_018b7950(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),uVar2);
  }
  return uVar3;
}

