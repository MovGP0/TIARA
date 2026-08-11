/* Ghidra address: 005c00e0 */
/* Ghidra symbol: FUN_005c00e0 */


undefined8 FUN_005c00e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  byte local_39;
  longlong local_38;
  longlong local_30 [3];
  
  (**(code **)*param_1)(param_1,param_2,local_30,&local_38,&local_39);
  uVar3 = FUN_005bbcb0(param_2,local_30[0] * 1000);
  uVar1 = (**(code **)*param_1)(param_1,uVar3,local_30,&local_38,&local_39);
  if (local_39 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (local_39 & 0x1f) & 10U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar3 = FUN_005bbcb0(uVar3,local_38 * 1000);
  }
  return uVar3;
}

