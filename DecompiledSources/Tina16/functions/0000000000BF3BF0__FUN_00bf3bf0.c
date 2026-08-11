/* Ghidra address: 00bf3bf0 */
/* Ghidra symbol: FUN_00bf3bf0 */


void FUN_00bf3bf0(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  undefined8 local_40 [2];
  undefined4 local_30 [2];
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_20;
  int local_c;
  
  local_40[0] = 0;
  if ((((param_3 & 2) != 0) && (0x5f < *param_2)) && (*param_2 < 0x6a)) {
    FUN_0043f750(local_40,*param_2 - 0x60);
    FUN_00416ad0(param_1 + 0x908,local_40[0]);
  }
  if (*param_2 == 0x12) {
    if (*(longlong *)(param_1 + 0x908) != 0) {
      cVar1 = FUN_0043fc80(*(undefined8 *)(param_1 + 0x908),&local_c);
      if (((cVar1 != '\0') && (0xff < local_c)) && (local_c < 0x10000)) {
        local_30[0] = 0x102;
        local_28 = (undefined2)local_c;
        local_26 = 0;
        local_20 = 0;
        FUN_00bf3e90(param_1,local_30);
        *(undefined1 *)(param_1 + 0x901) = 1;
      }
    }
    FUN_00414480(param_1 + 0x908);
  }
  FUN_006598b0(param_1,param_2,param_3);
  FUN_00bd9b30(*(undefined8 *)(param_1 + 0x658),param_1,param_2,param_3);
  FUN_00414480(local_40);
  return;
}

