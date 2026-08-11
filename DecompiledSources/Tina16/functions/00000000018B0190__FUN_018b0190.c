/* Ghidra address: 018b0190 */
/* Ghidra symbol: FUN_018b0190 */


void FUN_018b0190(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0x15) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x760));
    thunk_FUN_03e425c0(uVar1,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    (**(code **)(param_1 + 0x868))(*(undefined8 *)(param_1 + 0x870),param_2);
  }
  return;
}

