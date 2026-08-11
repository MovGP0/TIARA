/* Ghidra address: 018680e0 */
/* Ghidra symbol: FUN_018680e0 */


void FUN_018680e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                 byte param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uVar1 = (**(code **)(param_1 + 0xd0))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_5 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_5 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_01854d60(param_2,&local_38,param_3,param_5 == 3,param_5 == 2,0,0x1fffffff,0);
      return;
    }
  }
  (**(code **)(*param_2 + 0x110))(param_2,&local_38,param_3);
  return;
}

