/* Ghidra address: 00c38a30 */
/* Ghidra symbol: FUN_00c38a30 */


void FUN_00c38a30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  
  lVar1 = FUN_00609e10(param_2);
  *(undefined4 *)(lVar1 + 0x90) = 0x42;
  FUN_00498350(local_38,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  uVar2 = FUN_00609e10(param_2);
  FUN_005fead0(lVar1,local_38,uVar2,local_38);
  *(undefined4 *)(lVar1 + 0x90) = 0xcc0020;
  return;
}

