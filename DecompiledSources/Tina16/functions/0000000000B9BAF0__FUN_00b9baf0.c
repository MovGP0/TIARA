/* Ghidra address: 00b9baf0 */
/* Ghidra symbol: FUN_00b9baf0 */


undefined8 FUN_00b9baf0(longlong param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x5e) == '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_00b9b610(param_1);
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      *(undefined1 *)(param_1 + 0x5a) = 1;
      *param_2 = 0;
      FUN_00b9bdb0(param_1);
      uVar3 = 0;
    }
    else {
      *param_2 = *(short *)(*(longlong *)(param_1 + 8) + -2 + (longlong)*(int *)(param_1 + 0x10) * 2
                           );
      if (*param_2 == 10) {
        if (*(short *)(param_1 + 0x5c) != 0xd) {
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else if (*param_2 == 0xd) {
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
      else {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      *(short *)(param_1 + 0x5c) = *param_2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      piVar1 = (int *)(param_1 + 0x44);
      *piVar1 = *piVar1 + 1;
      uVar3 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  else {
    sVar2 = *(short *)(param_1 + 0x5c);
    *param_2 = sVar2;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    uVar3 = CONCAT71((uint7)(byte)((ushort)sVar2 >> 8),1);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  return uVar3;
}

