/* Ghidra address: 004b20a0 */
/* Ghidra symbol: FUN_004b20a0 */


undefined8 FUN_004b20a0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_00410ae0(*param_1,param_2);
  pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
  lVar2 = (*pcVar1)(param_1);
  if (lVar2 != 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
    uVar3 = (*pcVar1)(param_1);
    pcVar1 = (code *)FUN_00411550(uVar3,0xfffe);
    (*pcVar1)(uVar3,&local_20);
    if (local_20 != 0) {
      FUN_004b21a0(param_1,&local_28);
      if (local_28 != 0) {
        FUN_00416cd0(param_2,3,local_20,&LAB_004b2198,local_28);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

