/* Ghidra address: 00b9c980 */
/* Ghidra symbol: FUN_00b9c980 */


int FUN_00b9c980(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005dbcf0(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 < 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                      (*(longlong **)(param_1 + 0x10),param_2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    if (iVar2 < *(int *)(param_1 + 0x18)) {
      FUN_005db560(*(undefined8 *)(param_1 + 8),param_2,iVar1);
    }
    else {
      FUN_00b9ca20(param_1);
    }
  }
  return iVar1;
}

