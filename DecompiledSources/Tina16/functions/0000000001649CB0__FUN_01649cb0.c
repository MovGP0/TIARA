/* Ghidra address: 01649cb0 */
/* Ghidra symbol: FUN_01649cb0 */


void FUN_01649cb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_81a [2050];
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_00442620(local_81a,*(undefined8 *)(param_1 + 0x638));
  _RunVAMSDigital(*(undefined8 *)(lVar1 + 0x10b0),uVar2,param_1 + 0x5c4);
  return;
}

