/* Ghidra address: 006ab560 */
/* Ghidra symbol: FUN_006ab560 */


void FUN_006ab560(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0066ac78);
  if (cVar1 != '\0') {
    cVar1 = FUN_00680640(param_2);
    if (cVar1 == '\0') {
      uVar3 = FUN_0064dc90(param_2);
      if (0 < (int)uVar3) {
        uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        goto LAB_006ab59d;
      }
    }
  }
  uVar2 = 0;
LAB_006ab59d:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  return;
}

