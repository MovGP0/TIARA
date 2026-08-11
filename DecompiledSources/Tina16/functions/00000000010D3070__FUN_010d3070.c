/* Ghidra address: 010d3070 */
/* Ghidra symbol: FUN_010d3070 */


bool FUN_010d3070(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 local_310;
  undefined1 local_308 [256];
  char local_208;
  undefined1 local_1f0 [480];
  
  local_310 = 0;
  FUN_010d3290(param_1,param_2,local_308);
  bVar2 = local_208 == '\x01';
  if (bVar2) {
    FUN_004169a0(param_3,local_1f0);
    FUN_00414b50(&local_310,*param_3);
    FUN_00416dc0(&local_310,local_310,1,3);
    iVar1 = FUN_00416db0(local_310,&LAB_010d3154);
    if (iVar1 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    FUN_00414480(param_3);
  }
  FUN_00414480(&local_310);
  return bVar2;
}

