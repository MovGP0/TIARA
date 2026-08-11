/* Ghidra address: 00c41060 */
/* Ghidra symbol: FUN_00c41060 */


undefined8 FUN_00c41060(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00c41110();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00c3d260(lVar1,param_2);
  }
  return uVar2;
}

