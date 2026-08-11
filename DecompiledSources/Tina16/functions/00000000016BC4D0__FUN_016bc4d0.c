/* Ghidra address: 016bc4d0 */
/* Ghidra symbol: FUN_016bc4d0 */


void FUN_016bc4d0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x9d8) = *(undefined8 *)(param_1 + 0x9c8);
  *(undefined8 *)(param_1 + 0x9f0) = *(undefined8 *)(param_1 + 0x9e0);
  uVar1 = FUN_01d34560(&PTR_FUN_016b3c30,1,100,100);
  *(undefined8 *)(param_1 + 0x9c8) = uVar1;
  uVar1 = FUN_01d34560(&PTR_FUN_016a2078,1,100,100);
  *(undefined8 *)(param_1 + 0x9e0) = uVar1;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_1 + 0x9b8);
    *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(param_1 + 0x9f8);
    *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_1 + 0xa10);
    uVar1 = FUN_01d34560(&PTR_FUN_016b37f8,1,1000,1000);
    *(undefined8 *)(param_1 + 0x9b8) = uVar1;
    uVar1 = FUN_01d34560(&PTR_FUN_016a24d8,1,100,100);
    *(undefined8 *)(param_1 + 0x9f8) = uVar1;
    uVar1 = FUN_01d34560(&PTR_FUN_01d33528,1,0x32,0x32);
    *(undefined8 *)(param_1 + 0xa10) = uVar1;
  }
  return;
}

