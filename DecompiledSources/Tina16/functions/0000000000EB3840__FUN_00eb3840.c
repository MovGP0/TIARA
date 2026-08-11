/* Ghidra address: 00eb3840 */
/* Ghidra symbol: FUN_00eb3840 */


undefined8
FUN_00eb3840(longlong param_1,int param_2,undefined8 param_3,int *param_4,longlong *param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (((param_6 < 0) ||
      (((param_2 < param_6 && (0 < param_7)) || (param_2 < param_6 + param_7 + -1)))) ||
     ((param_7 < 0 || (param_6 + param_7 < 0)))) {
    FUN_00594f90();
  }
  if (param_7 == 0) {
    *param_4 = param_6;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar3 = param_6 + param_7 + -1;
    if (param_6 <= iVar3) {
      do {
        iVar4 = param_6 + ((uint)(iVar3 - param_6) >> 1);
        iVar1 = (**(code **)(*param_5 + 0x18))
                          (param_5,*(undefined8 *)(param_1 + (longlong)iVar4 * 8),param_3);
        if (iVar1 < 0) {
          param_6 = iVar4 + 1;
        }
        else {
          iVar3 = iVar4 + -1;
          if (iVar1 == 0) {
            uVar2 = 1;
          }
        }
      } while (param_6 <= iVar3);
    }
    *param_4 = param_6;
  }
  return uVar2;
}

