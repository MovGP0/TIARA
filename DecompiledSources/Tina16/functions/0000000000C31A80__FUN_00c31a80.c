/* Ghidra address: 00c31a80 */
/* Ghidra symbol: FUN_00c31a80 */


void FUN_00c31a80(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((longlong *)param_1[3] == param_2) {
    cVar1 = FUN_004238a0(param_1 + 4,param_3);
    if (cVar1 != '\0') goto LAB_00c31acb;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  param_1[3] = (longlong)param_2;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  (**(code **)(*param_1 + 0x60))(param_1);
LAB_00c31acb:
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  (**(code **)(*param_2 + 0x110))(param_2,param_3,uVar2);
  return;
}

