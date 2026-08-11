/* Ghidra address: 010fcb80 */
/* Ghidra symbol: FUN_010fcb80 */


void FUN_010fcb80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *local_20;
  
  iVar1 = (**(code **)(**(longlong **)(param_1[0x167] + 8) + 0x28))
                    (*(longlong **)(param_1[0x167] + 8));
  if (iVar1 != 0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar2 = (**(code **)(*param_1 + 0x458))(param_1);
    (**(code **)(*param_1 + 0x540))(param_1,uVar2,&local_20);
    uVar2 = (**(code **)(*param_1 + 0x458))(param_1);
    (**(code **)(*param_1 + 0x548))(param_1,uVar2,local_20);
    (**(code **)(*local_20 + 0x90))(local_20);
    uVar2 = (**(code **)(*param_1 + 0x460))(param_1);
    (**(code **)(*param_1 + 0x540))(param_1,uVar2,&local_20);
    uVar2 = (**(code **)(*param_1 + 0x460))(param_1);
    (**(code **)(*param_1 + 0x548))(param_1,uVar2,local_20);
    FUN_00410f20(local_20);
    (**(code **)(*(longlong *)param_1[0x165] + 0x90))((longlong *)param_1[0x165]);
    FUN_010fcfd0(param_1[0x167]);
  }
  return;
}

