/* Ghidra address: 01bd3a50 */
/* Ghidra symbol: FUN_01bd3a50 */


void FUN_01bd3a50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_01c06460(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 != '\0') && (param_2 != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x238))(param_1);
    if ((char)uVar3 == '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_01bd3a92;
    }
  }
  uVar2 = 0;
LAB_01bd3a92:
  (**(code **)(*param_1 + 0x128))(param_1,uVar2);
  return;
}

