/* Ghidra address: 006aa480 */
/* Ghidra symbol: FUN_006aa480 */


void FUN_006aa480(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x138))(param_1,param_2);
  iVar1 = (**(code **)(*plVar3 + 0x270))(plVar3);
  if (0 < iVar1) {
    uVar4 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
    uVar4 = FUN_00680640(uVar4);
    if ((char)uVar4 == '\0') {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      goto LAB_006aa4cc;
    }
  }
  uVar2 = 0;
LAB_006aa4cc:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2);
  return;
}

