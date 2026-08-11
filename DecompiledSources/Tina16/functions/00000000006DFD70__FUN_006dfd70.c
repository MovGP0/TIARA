/* Ghidra address: 006dfd70 */
/* Ghidra symbol: FUN_006dfd70 */


void FUN_006dfd70(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 local_2d;
  int local_2c [3];
  
  lVar1 = FUN_004b6da0(param_2);
  lVar2 = (**(code **)*param_2)(param_2);
  if (lVar1 < lVar2) {
    FUN_004b84c0(param_2,local_2c,4);
    iVar3 = 0;
    for (lVar1 = FUN_006df4b0(param_1); (iVar3 < local_2c[0] && (lVar1 != 0));
        lVar1 = FUN_006dd600(lVar1)) {
      FUN_004b84c0(param_2,&local_2d,1);
      FUN_006dd0c0(lVar1,local_2d);
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

