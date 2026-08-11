/* Ghidra address: 00683320 */
/* Ghidra symbol: FUN_00683320 */


int FUN_00683320(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    bVar1 = false;
    iVar2 = 0;
    while (!bVar1) {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar3 <= iVar2) break;
      uVar4 = FUN_0065b870(param_1[7]);
      lVar5 = thunk_FUN_041b2403(uVar4,0x149,(longlong)iVar2,0);
      if (lVar5 == 0) {
        bVar1 = true;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    if (!bVar1) {
      iVar2 = -1;
    }
  }
  else {
    uVar4 = FUN_0065b870(param_1[7]);
    iVar2 = FUN_00470120(uVar4,0x158,0xffffffffffffffff,param_2);
  }
  return iVar2;
}

