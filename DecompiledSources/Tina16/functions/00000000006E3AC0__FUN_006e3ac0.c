/* Ghidra address: 006e3ac0 */
/* Ghidra symbol: FUN_006e3ac0 */


undefined8 FUN_006e3ac0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x90))(*(longlong **)(param_1 + 0x4c0));
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x4c0);
  }
  return uVar2;
}

