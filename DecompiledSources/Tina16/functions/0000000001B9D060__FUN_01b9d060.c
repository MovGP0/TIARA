/* Ghidra address: 01b9d060 */
/* Ghidra symbol: FUN_01b9d060 */


void FUN_01b9d060(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)PTR_DAT_02003a18 != 0) {
    uVar1 = (**(code **)**(undefined8 **)PTR_DAT_02003a18)(*(undefined8 **)PTR_DAT_02003a18);
    FUN_00418590(uVar1,&DAT_01984da0);
  }
  *(undefined8 *)PTR_DAT_02003a18 = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x150));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x160));
  return;
}

