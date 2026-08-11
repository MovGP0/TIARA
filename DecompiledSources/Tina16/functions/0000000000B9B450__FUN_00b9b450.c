/* Ghidra address: 00b9b450 */
/* Ghidra symbol: FUN_00b9b450 */


void FUN_00b9b450(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + -8);
  }
  if (0 < iVar1) {
    FUN_004b89e0(uVar2,param_2,(longlong)iVar1);
  }
  FUN_004b6dc0(uVar2,0);
  (**(code **)(*param_1 + 8))(param_1,uVar2,1,param_3);
  return;
}

