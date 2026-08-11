/* Ghidra address: 01c98690 */
/* Ghidra symbol: FUN_01c98690 */


void FUN_01c98690(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  local_18 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_01c8a450(param_1);
    FUN_019ac280(uVar2,&local_18);
    FUN_0043e130(&local_10,local_18);
    FUN_0043e130(&local_20,param_2);
    iVar1 = FUN_00416db0(local_10,local_20);
    if (iVar1 != 0) {
      FUN_01c681b0(param_1,param_2,1,0,0,0,1);
    }
  }
  FUN_00414560(&local_20,3);
  return;
}

