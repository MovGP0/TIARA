/* Ghidra address: 01626e10 */
/* Ghidra symbol: FUN_01626e10 */


longlong FUN_01626e10(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_004095c0(0xd0);
    FUN_00409a70(param_1,lVar3,0xd0);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      iVar1 = FUN_00414ce0(*(longlong *)(param_1 + 0x40));
      uVar4 = FUN_00409570(iVar1 + 1);
      *(undefined8 *)(lVar3 + 0x40) = uVar4;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uVar2 = FUN_00414ce0(uVar5);
      FUN_00442450(uVar4,uVar5,uVar2);
    }
    uVar5 = FUN_01626e10(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(lVar3 + 8) = uVar5;
    uVar5 = FUN_01626e10(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
  }
  return lVar3;
}

