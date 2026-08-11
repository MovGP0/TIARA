/* Ghidra address: 0183acf0 */
/* Ghidra symbol: FUN_0183acf0 */


void FUN_0183acf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_0181e3c0(param_2,0);
  FUN_0181e5f0(uVar1,&local_10,L"text");
  lVar2 = FUN_01837350(param_1,param_3,local_10);
  FUN_0183da20(param_1,param_2,*(undefined8 *)(lVar2 + 0x90));
  FUN_00414480(&local_10);
  return;
}

