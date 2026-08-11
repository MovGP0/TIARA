/* Ghidra address: 01914cd0 */
/* Ghidra symbol: FUN_01914cd0 */


undefined8
FUN_01914cd0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined **param_4,
            undefined8 param_5)

{
  int iVar1;
  
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_005d2fd0) {
    iVar1 = FUN_00416db0(param_5,L"FILENAME");
    if (iVar1 == 0) {
      FUN_00468a10(param_2,*(undefined8 *)(param_3 + 8));
    }
  }
  return param_2;
}

