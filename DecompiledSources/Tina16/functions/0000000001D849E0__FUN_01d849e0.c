/* Ghidra address: 01d849e0 */
/* Ghidra symbol: FUN_01d849e0 */


undefined8 * FUN_01d849e0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong local_220;
  undefined1 local_214 [524];
  
  local_220 = 0;
  uVar1 = thunk_FUN_041b94f3(PTR_IMAGE_DOS_HEADER_0200c280,local_214,0x106);
  FUN_00414740(param_1,local_214,uVar1);
  FUN_01d84800(&local_220,*param_1);
  if (local_220 != 0) {
    FUN_00414ad0(param_1,local_220);
  }
  FUN_00414480(&local_220);
  return param_1;
}

