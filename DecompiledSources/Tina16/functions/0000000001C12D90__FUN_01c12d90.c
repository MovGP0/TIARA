/* Ghidra address: 01c12d90 */
/* Ghidra symbol: FUN_01c12d90 */


void FUN_01c12d90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if (*(char *)((longlong)param_1 + 0x366) != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') goto LAB_01c12df7;
    }
    FUN_00423b50(param_2,1,1);
  }
LAB_01c12df7:
  uVar2 = FUN_01c07120(param_1);
  lVar3 = FUN_01c03e40(uVar2);
  FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar3 + 0x9c));
  FUN_01c05800(param_1,param_2,param_3,local_res20);
  FUN_00414480(&local_res20);
  return;
}

