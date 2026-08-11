/* Ghidra address: 016264d0 */
/* Ghidra symbol: FUN_016264d0 */


undefined1
FUN_016264d0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *param_3;
  local_18 = *param_4;
  FUN_00414610(param_5);
  cVar1 = FUN_01626370(*(undefined8 *)(param_1 + 8),param_2);
  if (cVar1 == '\0') {
LAB_0162653e:
    cVar1 = FUN_01626370(*(undefined8 *)(param_1 + 0x10),param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_01626390(*(undefined8 *)(param_1 + 8),&local_10,&local_18,param_5);
      if (cVar1 != '\0') goto LAB_01626577;
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_01626390(*(undefined8 *)(param_1 + 0x10),&local_10,&local_18,param_5);
    if (cVar1 == '\0') goto LAB_0162653e;
LAB_01626577:
    uVar2 = 1;
  }
  FUN_00414480(&param_5);
  return uVar2;
}

