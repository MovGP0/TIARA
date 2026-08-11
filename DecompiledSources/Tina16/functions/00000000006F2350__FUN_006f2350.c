/* Ghidra address: 006f2350 */
/* Ghidra symbol: FUN_006f2350 */


void FUN_006f2350(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0) {
    if (*(longlong *)(param_1 + 0x508) == 0) {
      uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      *(undefined8 *)(param_1 + 0x508) = uVar2;
    }
    else {
      FUN_004b6e40(*(longlong *)(param_1 + 0x508),0);
    }
    if (*(char *)(param_1 + 0x510) != '\0') {
      uVar1 = FUN_006efc30(*(undefined8 *)(param_1 + 0x4e0));
      *(undefined4 *)(param_1 + 0x5b0) = uVar1;
    }
    FUN_004b8d80(*(undefined8 *)(param_1 + 0x508),param_1);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x508),0);
    if (*(char *)(param_1 + 0x558) != '\0') {
      FUN_006f2fa0(param_1);
    }
    lVar3 = FUN_006f6fe0(param_1);
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
    }
    else {
      uVar2 = FUN_006f6fe0(param_1);
      uVar1 = FUN_006ef6e0(uVar2);
      *(undefined4 *)(param_1 + 0x4b0) = uVar1;
    }
    FUN_006f8d80(param_1);
  }
  FUN_00655750(param_1);
  return;
}

