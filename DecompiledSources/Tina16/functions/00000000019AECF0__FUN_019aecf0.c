/* Ghidra address: 019aecf0 */
/* Ghidra symbol: FUN_019aecf0 */


undefined8 FUN_019aecf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0xb0))(*(longlong **)(param_1 + 0x420));
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x30))
                      (*(longlong **)(param_1 + 0x420),iVar1);
  }
  return uVar2;
}

