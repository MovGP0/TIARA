/* Ghidra address: 015d55a0 */
/* Ghidra symbol: FUN_015d55a0 */


undefined8 FUN_015d55a0(longlong param_1,undefined8 param_2)

{
  undefined1 local_428 [522];
  undefined1 local_21e [22];
  undefined1 local_208 [512];
  
  FUN_00442620(local_21e,&LAB_015d5658);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    thunk_FUN_0418dd92(0xff,local_208);
  }
  else {
    FUN_00442620(local_208,*(undefined8 *)(param_1 + 0xa8));
  }
  thunk_FUN_041b7910(local_208,local_21e,0,local_428);
  FUN_00416830(param_2,local_428,0x105);
  return param_2;
}

