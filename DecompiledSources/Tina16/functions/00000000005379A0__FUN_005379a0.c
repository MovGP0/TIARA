/* Ghidra address: 005379a0 */
/* Ghidra symbol: FUN_005379a0 */


undefined8 FUN_005379a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  cVar1 = FUN_005360d0(param_1);
  if (cVar1 == '\0') {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x05') {
      uVar2 = FUN_00538390(param_1);
      FUN_004169a0(param_2,uVar2);
      return param_2;
    }
    if (cVar1 == '\n') {
      puVar3 = (undefined8 *)FUN_00538390(param_1);
      FUN_00416880(param_2,*puVar3);
      return param_2;
    }
    if (cVar1 == '\v') {
      puVar3 = (undefined8 *)FUN_00538390(param_1);
      FUN_004168b0(param_2,*puVar3);
      return param_2;
    }
    if (cVar1 == '\x12') {
      puVar3 = (undefined8 *)FUN_00538390(param_1);
      FUN_00414ad0(param_2,*puVar3);
      return param_2;
    }
  }
  FUN_00560430(param_1,param_2,1);
  return param_2;
}

