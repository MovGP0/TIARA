/* Ghidra address: 006aa290 */
/* Ghidra symbol: FUN_006aa290 */


void FUN_006aa290(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar3,1);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
    uVar3 = FUN_00680640(uVar3);
    if ((char)uVar3 == '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_006aa2d2;
    }
  }
  uVar2 = 0;
LAB_006aa2d2:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  return;
}

