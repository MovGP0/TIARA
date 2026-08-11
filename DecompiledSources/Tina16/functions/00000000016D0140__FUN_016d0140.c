/* Ghidra address: 016d0140 */
/* Ghidra symbol: FUN_016d0140 */


void FUN_016d0140(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = FUN_01d34560(&PTR_FUN_016a0250,1,0x32,0x32);
    *(undefined8 *)(param_1 + 0xa30) = uVar1;
    uVar1 = FUN_01d34560(&PTR_FUN_016a1b98,1,100,100);
    *(undefined8 *)(param_1 + 0xa40) = uVar1;
  }
  else if (param_2 == '\x01') {
    uVar1 = FUN_01d34560(&PTR_FUN_016a0250,1,0x32,0x32);
    *(undefined8 *)(param_1 + 0xa30) = uVar1;
  }
  else if (param_2 == '\x02') {
    uVar1 = FUN_01d34560(&PTR_FUN_016a19c8,1,100,100);
    *(undefined8 *)(param_1 + 0xa40) = uVar1;
  }
  return;
}

