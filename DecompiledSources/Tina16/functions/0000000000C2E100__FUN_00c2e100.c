/* Ghidra address: 00c2e100 */
/* Ghidra symbol: FUN_00c2e100 */


void FUN_00c2e100(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_00c2e070(param_1,param_2);
  cVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (cVar1 != cVar2) {
    FUN_0041ddd0(local_20,PTR_PTR_020031a0);
    FUN_00c1a320(local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

