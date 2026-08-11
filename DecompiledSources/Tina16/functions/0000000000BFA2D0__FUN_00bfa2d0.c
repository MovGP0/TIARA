/* Ghidra address: 00bfa2d0 */
/* Ghidra symbol: FUN_00bfa2d0 */


void FUN_00bfa2d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x97) != '\0') {
    uVar1 = FUN_00bf2b30(*(undefined8 *)(param_2 + 0xc0));
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    uVar1 = FUN_00bf2b90(*(undefined8 *)(param_2 + 0xc0));
    *(undefined8 *)(param_2 + 0x58) = uVar1;
    FUN_00bd0e70(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x550),0xd,param_2 + 0x60,
                 param_2 + 0x58,0,0);
  }
  FUN_00c087b0(*(undefined8 *)(param_2 + 0xc0));
  return;
}

