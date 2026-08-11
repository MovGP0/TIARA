/* Ghidra address: 00d72cd0 */
/* Ghidra symbol: FUN_00d72cd0 */


void FUN_00d72cd0(longlong *param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*param_1 + 0x10))(param_1,uVar2);
  uVar2 = FUN_004113d0(param_2,&PTR_FUN_00d5f1c8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_004113d0(param_2,&PTR_FUN_00d5fcd8);
    if ((char)uVar2 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d60be0);
      if (cVar1 != '\0') {
        if (param_3 == 5) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2[0x24]);
        }
        else if (param_3 == 6) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2[0x26]);
        }
        else if (param_3 == 7) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2[0x25]);
        }
        else if (param_3 == 8) {
          (**(code **)(*param_1 + 0x10))(param_1,param_2[0x27]);
        }
      }
    }
    else {
      if (param_3 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_3 & 0x1f) & 0xa0U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        (**(code **)(*param_1 + 0x10))(param_1,param_2[0x27]);
      }
    }
  }
  else {
    if (param_3 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (param_3 & 0x1f) & 0xa0U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2[0x25]);
    }
    if (param_3 == 8) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2[0x26]);
    }
  }
  return;
}

