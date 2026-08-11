/* Ghidra address: 018580f0 */
/* Ghidra symbol: FUN_018580f0 */


undefined8 FUN_018580f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char local_2a;
  char local_29;
  
  uVar4 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (1 < lVar2 - lVar3) {
    iVar1 = FUN_004b6da0(param_2);
    FUN_004b84c0(param_2,&local_2a,2);
    FUN_004b6dc0(param_2,(longlong)iVar1);
    if ((local_2a == -1) && (local_29 == -0x28)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

