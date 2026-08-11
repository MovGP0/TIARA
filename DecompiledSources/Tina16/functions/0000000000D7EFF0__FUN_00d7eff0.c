/* Ghidra address: 00d7eff0 */
/* Ghidra symbol: FUN_00d7eff0 */


undefined8 FUN_00d7eff0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x2f0) != 0) &&
     (iVar1 = FUN_00416db0(param_3,L"default"), iVar1 != 0)) {
    uVar2 = FUN_00d7efc0(param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x10))(*(longlong **)(param_1 + 0x2f8),uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x28))
              (*(longlong **)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2f8),param_2,param_3);
    return *(undefined8 *)(param_1 + 0x2f8);
  }
  uVar2 = FUN_00d7efc0(param_1,param_2);
  return uVar2;
}

