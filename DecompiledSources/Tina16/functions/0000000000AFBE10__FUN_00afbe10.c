/* Ghidra address: 00afbe10 */
/* Ghidra symbol: FUN_00afbe10 */


void FUN_00afbe10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_00a90568);
  FUN_0064e030(*(undefined8 *)(param_1 + 0x740),*(uint *)(lVar1 + 0x168) | *(uint *)PTR_DAT_02005078
              );
  return;
}

