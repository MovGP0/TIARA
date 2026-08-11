/* Ghidra address: 01626390 */
/* Ghidra symbol: FUN_01626390 */


undefined1 FUN_01626390(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_res20;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = *param_2;
  local_18 = *param_3;
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (*param_1 == 3) {
    cVar1 = FUN_016135e0(param_1 + 0x1c,&local_10);
    if (cVar1 != '\0') {
      cVar1 = FUN_016135e0(param_1 + 0x1e,&local_18);
      if (cVar1 != '\0') {
        FUN_004167a0(&local_20,*(undefined8 *)(param_1 + 0x10));
        iVar3 = FUN_004170c0(local_res20,local_20,1);
        if (iVar3 == 1) {
          uVar2 = 1;
          goto LAB_01626422;
        }
      }
    }
  }
  uVar2 = 0;
LAB_01626422:
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  return uVar2;
}

