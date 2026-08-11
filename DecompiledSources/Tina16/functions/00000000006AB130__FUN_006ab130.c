/* Ghidra address: 006ab130 */
/* Ghidra symbol: FUN_006ab130 */


void FUN_006ab130(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0066ac78);
  if (cVar1 != '\0') {
    uVar3 = FUN_0064dc90(param_2);
    if (0 < (int)uVar3) {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_006ab161;
    }
  }
  uVar2 = 0;
LAB_006ab161:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  return;
}

