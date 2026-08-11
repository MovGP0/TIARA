/* Ghidra address: 0197f760 */
/* Ghidra symbol: FUN_0197f760 */


undefined8 FUN_0197f760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8));
  if (iVar1 != -1) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar1);
    uVar3 = *(undefined8 *)(lVar2 + 8);
  }
  return uVar3;
}

