/* Ghidra address: 01449560 */
/* Ghidra symbol: FUN_01449560 */


void FUN_01449560(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_58 = *param_2;
  uStack_50 = param_2[1];
  dVar1 = (double)FUN_00c44590(&local_48);
  dVar1 = (double)FUN_0040c2f0(dVar1 + 1e-100);
  dVar2 = (double)FUN_00c44590(&local_58);
  dVar2 = (double)FUN_0040c2f0(dVar2 + 1e-100);
  if (dVar1 + dVar2 <= 708.0) {
    FUN_00c44720(&local_48,&local_58,param_3);
  }
  else {
    FUN_00ef4260(0xd,param_4);
    FUN_01449400(param_3,0,0);
  }
  return;
}

