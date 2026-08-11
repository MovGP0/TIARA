/* Ghidra address: 01867c80 */
/* Ghidra symbol: FUN_01867c80 */


undefined8 FUN_01867c80(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  short local_38 [12];
  
  uVar4 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (0xf < lVar2 - lVar3) {
    iVar1 = FUN_004b6da0(param_2);
    FUN_004b84c0(param_2,local_38,0x10);
    FUN_004b6dc0(param_2,(longlong)iVar1);
    if (local_38[0] == 0x4d42) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

