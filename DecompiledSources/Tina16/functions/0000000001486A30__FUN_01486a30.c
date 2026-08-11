/* Ghidra address: 01486a30 */
/* Ghidra symbol: FUN_01486a30 */


void FUN_01486a30(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_014869a0(param_1,param_2);
  iVar3 = FUN_014868f0(param_1,param_2,uVar2);
  if (iVar3 < 0) {
    uVar4 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar3 = FUN_004134c0(uVar4);
  }
  uVar1 = *(undefined1 *)(param_1[1] + 0x10 + (longlong)iVar3 * 0x18);
  *(char *)(param_1[1] + 0x10 + (longlong)iVar3 * 0x18) = (char)param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

