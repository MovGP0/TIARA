/* Ghidra address: 018a9b40 */
/* Ghidra symbol: FUN_018a9b40 */


undefined8 FUN_018a9b40(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x278))(param_1);
    uVar3 = (**(code **)*puVar2)(puVar2);
  }
  return uVar3;
}

