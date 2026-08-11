/* Ghidra address: 006aa3f0 */
/* Ghidra symbol: FUN_006aa3f0 */


void FUN_006aa3f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
  cVar1 = FUN_00680650(uVar3);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
    uVar3 = FUN_00680640(uVar3);
    if ((char)uVar3 == '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_006aa438;
    }
  }
  uVar2 = 0;
LAB_006aa438:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  return;
}

