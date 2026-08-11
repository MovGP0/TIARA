/* Ghidra address: 01a8e4c0 */
/* Ghidra symbol: FUN_01a8e4c0 */


undefined8 FUN_01a8e4c0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int local_30;
  uint uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar2 = *param_2;
  local_30 = (int)uVar2;
  local_28 = (int)*param_1;
  local_24 = (int)((ulonglong)*param_1 >> 0x20);
  local_20 = (int)param_1[1];
  local_1c = (int)((ulonglong)param_1[1] >> 0x20);
  uStack_2c = (uint)((ulonglong)uVar2 >> 0x20);
  if ((((local_30 < local_28) || (local_20 < local_30)) || ((int)uStack_2c < local_24)) ||
     (local_1c < (int)uStack_2c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)((ulonglong)uVar2 >> 0x28),1);
  }
  if (((char)uVar1 == '\0') &&
     (((local_30 + 1 < local_28 || (local_20 < local_30 + 1)) ||
      (((int)uStack_2c < local_24 || (uVar1 = (ulonglong)uStack_2c, local_1c < (int)uStack_2c))))))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  if (((char)uVar1 == '\0') &&
     (((local_30 < local_28 || (local_20 < local_30)) ||
      (((int)(uStack_2c + 1) < local_24 ||
       (uVar1 = (ulonglong)(uStack_2c + 1), local_1c < (int)(uStack_2c + 1))))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  if (((char)uVar1 == '\0') &&
     ((((local_30 + -1 < local_28 || (local_20 < local_30 + -1)) || ((int)uStack_2c < local_24)) ||
      (uVar1 = (ulonglong)uStack_2c, local_1c < (int)uStack_2c)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  if (((char)uVar1 == '\0') &&
     (((local_30 < local_28 || (local_20 < local_30)) ||
      (((int)(uStack_2c - 1) < local_24 ||
       (uVar1 = (ulonglong)(uStack_2c - 1), local_1c < (int)(uStack_2c - 1))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar2;
}

