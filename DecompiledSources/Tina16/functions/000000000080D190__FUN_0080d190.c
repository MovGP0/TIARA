/* Ghidra address: 0080d190 */
/* Ghidra symbol: FUN_0080d190 */


bool FUN_0080d190(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = FUN_00410ca0(lVar2)) {
    FUN_00410ae0(lVar2,local_20);
    FUN_00410ae0(param_2,&local_28);
    iVar1 = FUN_00416db0(local_20[0],local_28);
    if (iVar1 == 0) break;
  }
  FUN_00414560(&local_28,2);
  return lVar2 != 0;
}

