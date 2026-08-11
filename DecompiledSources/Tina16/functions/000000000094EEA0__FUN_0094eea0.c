/* Ghidra address: 0094eea0 */
/* Ghidra symbol: FUN_0094eea0 */


bool FUN_0094eea0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x100))(param_1);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x100))(param_1);
    iVar2 = (**(code **)*puVar4)(puVar4);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

