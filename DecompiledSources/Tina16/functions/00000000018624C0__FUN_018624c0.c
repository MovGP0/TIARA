/* Ghidra address: 018624c0 */
/* Ghidra symbol: FUN_018624c0 */


void FUN_018624c0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01862028);
  if (cVar2 != '\0') {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
    uVar1 = FUN_01861880(&PTR_FUN_018611b0,1,param_1[9]);
    *(undefined8 *)(param_2 + 0x48) = uVar1;
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  return;
}

