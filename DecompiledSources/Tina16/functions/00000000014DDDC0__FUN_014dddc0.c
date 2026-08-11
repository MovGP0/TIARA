/* Ghidra address: 014dddc0 */
/* Ghidra symbol: FUN_014dddc0 */


void FUN_014dddc0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined2 local_40;
  undefined1 uStack_3e;
  undefined1 local_38 [8];
  undefined1 *local_30;
  
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar2 == 0x20) {
    uVar3 = FUN_01cfd6a0(param_1);
    FUN_014dd530(param_1,4,uVar3,0,0,param_2,&DAT_01f599d0);
  }
  else if (sVar2 == 0x30) {
    uVar3 = FUN_01cfd6a0(param_1);
    FUN_014dd530(param_1,4,uVar3,0,0,param_2,&DAT_01f59a58);
  }
  else if (sVar2 == 0x93) {
    uVar3 = FUN_01cfd6a0(param_1);
    FUN_014dd530(param_1,4,uVar3,0,0,param_2,&PTR_DAT_01f59a14);
  }
  else if (sVar2 == 0x94) {
    uVar3 = FUN_01cfd6a0(param_1);
    FUN_014dd530(param_1,4,uVar3,0,0,param_2,&PTR_DAT_01f59a9c);
  }
  sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar2 != 0x93) && (sVar2 = (**(code **)(*param_1 + 0xf8))(param_1), sVar2 != 0x94)) {
    return;
  }
  local_40 = 0x4f02;
  uStack_3e = 0x4e;
  cVar1 = FUN_014db910(&local_40,param_2,local_38);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,4,&local_30);
    *local_30 = 1;
  }
  return;
}

