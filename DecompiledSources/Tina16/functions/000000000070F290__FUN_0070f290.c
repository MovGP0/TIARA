/* Ghidra address: 0070f290 */
/* Ghidra symbol: FUN_0070f290 */


void FUN_0070f290(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  FUN_00785c20(param_1,param_2);
  local_28 = (int)*(short *)(param_2 + 0x10);
  local_24 = (int)*(short *)(param_2 + 0x12);
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041b2403(uVar1,0x1206,0,&local_28);
  if (((local_20 & 4) == 0) && ((local_20 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0x40) = local_1c;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  uVar1 = FUN_00786090(param_1);
  thunk_FUN_041543e0(uVar1,0,0,1);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

