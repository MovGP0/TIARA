/* Ghidra address: 005c0a30 */
/* Ghidra symbol: FUN_005c0a30 */


longlong *
FUN_005c0a30(longlong *param_1,ulonglong *param_2,ulonglong param_3,undefined8 param_4,short param_5
            ,char param_6,char param_7,undefined1 param_8,undefined8 param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (param_3 <= *param_2) {
    FUN_00414ad0(param_1,param_4);
    goto LAB_005c0b86;
  }
  FUN_00414480(param_1);
  if (param_5 != DAT_01de68c0) {
    if (param_7 == '\0') {
      bVar1 = *(char *)*param_2 - 0x28;
      if (bVar1 < 8) {
        bVar3 = ((int)CONCAT71((int7)(*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x28U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_005c0af0;
    }
    if (*(short *)*param_2 != param_5) {
      FUN_005c0900(param_8,param_9);
    }
    *param_2 = *param_2 + 2;
  }
LAB_005c0af0:
  for (iVar2 = 0;
      (((*param_2 <= param_3 && (0x2f < *(ushort *)*param_2)) && (*(ushort *)*param_2 < 0x3a)) &&
      (iVar2 < param_10)); iVar2 = iVar2 + 1) {
    FUN_00416780(local_20,*(undefined2 *)*param_2);
    FUN_00416ad0(param_1,local_20[0]);
    *param_2 = *param_2 + 2;
  }
  if (*param_1 == 0) {
    if (param_6 == '\0') {
      FUN_005c0900(param_8,param_9);
    }
    else {
      FUN_00414ad0(param_1,param_4);
    }
  }
LAB_005c0b86:
  FUN_00414480(local_20);
  return param_1;
}

