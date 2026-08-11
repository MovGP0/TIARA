/* Ghidra address: 008097f0 */
/* Ghidra symbol: FUN_008097f0 */


void FUN_008097f0(void)

{
  undefined4 uVar1;
  undefined1 local_c [12];
  
  if (*(char *)(DAT_02012668 + 0x159) == '\0') {
    if (DAT_020126a0 == 0) {
      uVar1 = FUN_00427ab0();
      DAT_020126a0 = thunk_FUN_0417e981(3,PTR_FUN_01e15cb0,0,uVar1);
    }
    if (DAT_02012698 == 0) {
      DAT_02012698 = thunk_FUN_0416e139(0,0,0,0);
    }
    if (DAT_020126a8 == 0) {
      DAT_020126a8 = thunk_FUN_03a60ddc(0,1000,PTR_FUN_01e15ca8,0,0,local_c);
    }
  }
  return;
}

