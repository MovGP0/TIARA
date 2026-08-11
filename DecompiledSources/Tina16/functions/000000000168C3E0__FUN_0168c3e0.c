/* Ghidra address: 0168c3e0 */
/* Ghidra symbol: FUN_0168c3e0 */


undefined8 FUN_0168c3e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (param_3 == -1) {
    uVar2 = FUN_01b0fa20(param_1,0);
    uVar3 = FUN_01b0fa40(param_1,0,uVar2);
  }
  else {
    uVar3 = FUN_01b0fa40(param_1,0);
  }
  if ((int)uVar3 < 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_01b0faf0(param_1,0);
    if (uVar3 == uVar4) {
      uVar5 = *(undefined8 *)(param_1 + 0x70);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x60);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
    }
  }
  return uVar5;
}

