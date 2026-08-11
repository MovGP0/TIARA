/* Ghidra address: 010c9180 */
/* Ghidra symbol: FUN_010c9180 */


void FUN_010c9180(longlong param_1)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  dVar2 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
  if (1e-20 <= dVar2) {
    FUN_010cb960(*(undefined8 *)(param_1 + 8),local_20,&local_28);
    uVar3 = FUN_010c9000(&DAT_01f195b8,local_20[0],7,&local_2c);
    *(undefined8 *)(param_1 + 8) = uVar3;
    iVar1 = FUN_0040c840(local_28);
    uVar3 = FUN_010ccd30(*(undefined8 *)(param_1 + 8),iVar1 + local_2c);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

