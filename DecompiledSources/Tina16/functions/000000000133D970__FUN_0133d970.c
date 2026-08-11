/* Ghidra address: 0133d970 */
/* Ghidra symbol: FUN_0133d970 */


void FUN_0133d970(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffff98;
  undefined1 *puVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar2 = FUN_0133d940(param_1);
  puVar3 = (undefined1 *)(in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  FUN_01b0a6f0(param_1,&local_28,uVar2,param_3,puVar3);
  FUN_00416ba0(local_20,L"   VerilogA model execution Time = ",local_28);
  uVar2 = FUN_0040f200(param_2,local_20[0]);
  FUN_0040f590(uVar2);
  FUN_00409900();
  iVar1 = 0;
  do {
    FUN_01614ea0(&local_38,iVar1);
    FUN_01b0a9e0(param_1,&local_40,*(undefined8 *)(param_1 + 4000 + (longlong)iVar1 * 8),param_3,
                 (ulonglong)puVar3 & 0xffffffffffffff00);
    puVar3 = &LAB_0133db4c;
    FUN_00416cd0(&local_30,4,L"       Instr = (",local_38,&LAB_0133db4c,local_40);
    uVar2 = FUN_0040f200(param_2,local_30);
    FUN_0040f590(uVar2);
    FUN_00409900();
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x4d);
  FUN_00414560(&local_40,5);
  return;
}

