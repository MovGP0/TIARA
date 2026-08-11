/* Ghidra address: 0064b320 */
/* Ghidra symbol: FUN_0064b320 */


void FUN_0064b320(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00639a60);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  return;
}

