/* Ghidra address: 019af8f0 */
/* Ghidra symbol: FUN_019af8f0 */


bool FUN_019af8f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [46];
  undefined2 local_2a;
  undefined1 local_28 [24];
  
  uVar2 = FUN_0198a580(param_2);
  if ((byte)uVar2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1eU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    (**(code **)(*param_2 + 0x68))(param_2,*(undefined8 *)(param_1 + 0x210),local_28);
    local_2a = (**(code **)(*param_2 + 0xf8))(param_2);
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x10); iVar3 = iVar3 + 1) {
      uVar2 = FUN_00b94e60(param_1,iVar3);
      cVar1 = FUN_019af840(auStack_58,uVar2);
      if (cVar1 != '\0') break;
    }
    bVar4 = iVar3 == *(int *)(param_1 + 0x10);
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

