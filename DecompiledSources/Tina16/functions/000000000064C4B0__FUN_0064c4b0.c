/* Ghidra address: 0064c4b0 */
/* Ghidra symbol: FUN_0064c4b0 */


void FUN_0064c4b0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 8;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00640c18);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x130))(param_1,uVar1);
  }
  FUN_004d3060(param_1,param_2);
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffff7;
  if (param_1[0xf] != 0) {
    FUN_0064fca0(param_1,0xb009,0,0);
    FUN_0064fca0(param_1,0xb008,0,0);
    FUN_0064fca0(param_1,0xb023,0,0);
    FUN_0064fca0(param_1,0xb035,0,0);
    FUN_0064fca0(param_1,0xb03d,0,0);
    FUN_0064fca0(param_1,0xb050,0,0);
    FUN_0064fca0(param_1,0xb058,0,0);
  }
  return;
}

