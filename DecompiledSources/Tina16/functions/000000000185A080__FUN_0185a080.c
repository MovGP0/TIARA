/* Ghidra address: 0185a080 */
/* Ghidra symbol: FUN_0185a080 */


void FUN_0185a080(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                 byte param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  bool bVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  if (param_5 < 8) {
    uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_5 & 0x1f);
    uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xc) != 0);
  }
  else {
    uVar4 = 0;
  }
  if (((char)uVar4 != '\0') && (uVar4 = FUN_00a3c2e0(param_3), (char)uVar4 == '\x01')) {
    uVar3 = FUN_00a3c5c0(param_3);
    FUN_01868670(param_1,param_2,param_3,&local_38,uVar3,param_5);
    return;
  }
  if (param_5 < 8) {
    bVar5 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (param_5 & 0x1f) & 0xcU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    bVar5 = true;
  }
  else {
    bVar5 = *param_2 == *(longlong *)PTR_PTR_02002398;
  }
  if ((bVar5) &&
     ((cVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_3), cVar1 != '\0' ||
      (cVar1 = (**(code **)(param_1 + 0xb8))(param_1,param_3), cVar1 != '\0')))) {
    (**(code **)(param_1 + 0x58))(param_1,param_2,param_3,&local_38,0x1fffffff,param_5);
  }
  else {
    FUN_018680e0(param_1,param_2,param_3,&local_38,param_5);
  }
  return;
}

