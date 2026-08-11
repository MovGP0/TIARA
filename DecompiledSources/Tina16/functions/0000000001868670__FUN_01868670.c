/* Ghidra address: 01868670 */
/* Ghidra symbol: FUN_01868670 */


void FUN_01868670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int param_5,byte param_6)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  uVar3 = (**(code **)(param_1 + 0xd0))(param_1);
  if ((char)uVar3 == '\0') {
    if (param_6 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (param_6 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) || (param_5 != 0x1fffffff)) {
      local_40 = 0;
      cVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_3);
      if ((cVar1 != '\0') && (param_5 == 0x1fffffff)) {
        local_40 = (**(code **)(param_1 + 0xa0))(param_1,param_3);
      }
      if ((param_5 == 0x1fffffff) && (local_40 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      FUN_01854d60(param_2,&local_38,param_3,param_6 == 3,param_6 == 2,uVar2,param_5,local_40);
      FUN_00452320(&local_40);
      return;
    }
  }
  (**(code **)(param_1 + 0x50))(param_1,param_2,param_3,&local_38,param_6);
  return;
}

