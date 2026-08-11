/* Ghidra address: 009d4c50 */
/* Ghidra symbol: FUN_009d4c50 */


undefined4 FUN_009d4c50(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_3 = 0;
  lVar1 = FUN_009d3290(param_2);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b0))
                    (*(longlong **)(param_1 + 0x18),lVar1);
  if (lVar2 == lVar1) {
    FUN_0041b840(param_3,param_2);
  }
  else {
    FUN_009d3370(param_3,lVar2,*(undefined8 *)(param_1 + 0x20),0);
  }
  FUN_009d4ed0(param_1,lVar2);
  return 0;
}

