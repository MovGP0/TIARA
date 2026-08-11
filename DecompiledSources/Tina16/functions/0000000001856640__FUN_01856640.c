/* Ghidra address: 01856640 */
/* Ghidra symbol: FUN_01856640 */


undefined8 FUN_01856640(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_3a [6];
  
  uVar4 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (0x11 < lVar2 - lVar3) {
    iVar1 = FUN_004b6da0(param_2);
    FUN_004b84c0(param_2,local_3a,0x12);
    FUN_004b6dc0(param_2,(longlong)iVar1);
    if (local_3a[0] == -0x65393229) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

