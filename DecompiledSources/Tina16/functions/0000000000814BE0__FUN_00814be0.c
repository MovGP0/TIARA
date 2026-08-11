/* Ghidra address: 00814be0 */
/* Ghidra symbol: FUN_00814be0 */


void FUN_00814be0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  DAT_02012678 = 0;
  DAT_02012680 = param_1;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    uVar2 = FUN_00427ab0();
    uVar1 = thunk_FUN_0417e981(0xffffffff,FUN_008170d0,0,uVar2);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
  }
  return;
}

