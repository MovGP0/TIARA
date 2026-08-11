/* Ghidra address: 00f1df90 */
/* Ghidra symbol: FUN_00f1df90 */


void FUN_00f1df90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_1 != 0) {
    FUN_01cc5c60(param_1);
    do {
      lVar2 = FUN_01cc5cc0(param_1);
      if (lVar2 != 0) {
        FUN_01cc0ae0(lVar2,local_30);
        if ((local_30[0] != 0) && (0 < *(int *)(lVar2 + 0x2c))) {
          FUN_01cc0ae0(lVar2,local_20);
          FUN_01ce7b20(local_20);
          iVar1 = (**(code **)(*(longlong *)*param_2 + 0xb0))((longlong *)*param_2,local_20[0]);
          if (iVar1 == -1) {
            (**(code **)(*(longlong *)*param_2 + 0x80))((longlong *)*param_2,local_20[0],lVar2);
          }
        }
      }
    } while (lVar2 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

