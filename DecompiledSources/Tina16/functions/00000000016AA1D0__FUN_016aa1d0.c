/* Ghidra address: 016aa1d0 */
/* Ghidra symbol: FUN_016aa1d0 */


undefined8 FUN_016aa1d0(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double local_18;
  undefined8 local_10;
  
  dVar1 = (double)param_1[1];
  dVar3 = (double)param_1[2];
  dVar2 = dVar1;
  if (dVar3 < dVar1) {
    dVar2 = dVar3;
    dVar3 = dVar1;
    local_18 = dVar1;
  }
  FUN_016a9fe0(*param_1,dVar2,dVar3,0,0,0,0xffffffff,&local_10,&local_18);
  return local_10;
}

