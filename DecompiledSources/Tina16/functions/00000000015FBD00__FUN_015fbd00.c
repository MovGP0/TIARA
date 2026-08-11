/* Ghidra address: 015fbd00 */
/* Ghidra symbol: FUN_015fbd00 */


undefined8 FUN_015fbd00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0x13;
  puVar2 = (undefined8 *)PTR_PTR_02004f18;
  do {
    FUN_0043e130(&local_20,*puVar2);
    FUN_0043e130(&local_28,local_res10[0]);
    iVar1 = FUN_00416db0(local_20,local_28);
    if (iVar1 == 0) {
      FUN_00417c40(param_1,puVar2,&DAT_015e7b68);
    }
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return param_1;
}

