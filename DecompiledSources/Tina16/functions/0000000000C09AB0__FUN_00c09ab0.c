/* Ghidra address: 00c09ab0 */
/* Ghidra symbol: FUN_00c09ab0 */


undefined8 FUN_00c09ab0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  uVar2 = FUN_00bf2b30(param_1);
  uVar3 = FUN_00bf2b90(param_1);
  iStack_1c = (int)((ulonglong)uVar2 >> 0x20);
  if (((param_2[1] < iStack_1c) ||
      (iStack_24 = (int)((ulonglong)uVar3 >> 0x20), iStack_24 < param_2[1])) ||
     ((local_20 = (int)uVar2, local_28 = (int)uVar3, iStack_1c == iStack_24 &&
      (local_20 == local_28)))) {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x5f5) == '\x01') {
    uVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x5f5) == '\x02') {
    if (local_28 < local_20) {
      iVar1 = *param_2;
      if ((iVar1 < local_28) || (local_20 <= iVar1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
    }
    else if (local_20 < local_28) {
      iVar1 = *param_2;
      if ((iVar1 < local_20) || (local_28 <= iVar1)) {
        uVar2 = 0;
      }
      else {
        uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else if (((iStack_1c < param_2[1]) || (local_20 <= *param_2)) &&
          ((iVar1 = param_2[1], iVar1 < iStack_24 || (iVar1 = *param_2, iVar1 < local_28)))) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

