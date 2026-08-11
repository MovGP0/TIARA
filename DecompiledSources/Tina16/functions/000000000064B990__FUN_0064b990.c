/* Ghidra address: 0064b990 */
/* Ghidra symbol: FUN_0064b990 */


void FUN_0064b990(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  cVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar4 != '\0') {
    lVar3 = param_1[4];
    *(undefined8 *)(lVar3 + 0x1f8) = uVar1;
    *(undefined8 *)(lVar3 + 0x200) = uVar2;
  }
  return;
}

