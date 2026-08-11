/* Ghidra address: 014b04d0 */
/* Ghidra symbol: FUN_014b04d0 */


void FUN_014b04d0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &DAT_01f521b0;
  do {
    if (*piVar3 == -1) {
      puVar1 = (undefined8 *)(param_1 + 0x168 + (longlong)iVar2 * 0x10);
      puVar1[1] = param_1;
      *puVar1 = FUN_014b0f20;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 0x2b);
  *(longlong *)(param_1 + 400) = param_1;
  *(code **)(param_1 + 0x188) = FUN_014b07e0;
  *(longlong *)(param_1 + 0x350) = param_1;
  *(code **)(param_1 + 0x348) = FUN_014b0820;
  *(longlong *)(param_1 + 0x280) = param_1;
  *(code **)(param_1 + 0x278) = FUN_014b0860;
  *(longlong *)(param_1 + 0x3f0) = param_1;
  *(code **)(param_1 + 1000) = FUN_014b08a0;
  *(longlong *)(param_1 + 0x330) = param_1;
  *(code **)(param_1 + 0x328) = FUN_014b08e0;
  *(longlong *)(param_1 + 0x310) = param_1;
  *(code **)(param_1 + 0x308) = FUN_014b0920;
  *(longlong *)(param_1 + 0x1c0) = param_1;
  *(code **)(param_1 + 0x1b8) = FUN_014b0960;
  *(longlong *)(param_1 + 0x410) = param_1;
  *(code **)(param_1 + 0x408) = FUN_014b09a0;
  *(longlong *)(param_1 + 0x180) = param_1;
  *(code **)(param_1 + 0x178) = FUN_014b09e0;
  *(longlong *)(param_1 + 0x230) = param_1;
  *(code **)(param_1 + 0x228) = FUN_014b0a20;
  *(longlong *)(param_1 + 0x260) = param_1;
  *(code **)(param_1 + 600) = FUN_014b0a60;
  *(longlong *)(param_1 + 0x2e0) = param_1;
  *(code **)(param_1 + 0x2d8) = FUN_014b0aa0;
  *(longlong *)(param_1 + 0x300) = param_1;
  *(code **)(param_1 + 0x2f8) = FUN_014b0ae0;
  *(longlong *)(param_1 + 0x2b0) = param_1;
  *(code **)(param_1 + 0x2a8) = FUN_014b0b20;
  *(longlong *)(param_1 + 800) = param_1;
  *(code **)(param_1 + 0x318) = FUN_014b0b60;
  *(longlong *)(param_1 + 0x2f0) = param_1;
  *(code **)(param_1 + 0x2e8) = FUN_014b0ba0;
  *(longlong *)(param_1 + 0x370) = param_1;
  *(code **)(param_1 + 0x368) = FUN_014b0be0;
  *(longlong *)(param_1 + 0x340) = param_1;
  *(code **)(param_1 + 0x338) = FUN_014b0c20;
  *(longlong *)(param_1 + 0x240) = param_1;
  *(code **)(param_1 + 0x238) = FUN_014b0c60;
  *(longlong *)(param_1 + 0x270) = param_1;
  *(code **)(param_1 + 0x268) = FUN_014b0ca0;
  *(longlong *)(param_1 + 0x3b0) = param_1;
  *(code **)(param_1 + 0x3a8) = FUN_014b0ce0;
  *(longlong *)(param_1 + 0x2a0) = param_1;
  *(code **)(param_1 + 0x298) = FUN_014b0d20;
  *(longlong *)(param_1 + 0x220) = param_1;
  *(code **)(param_1 + 0x218) = FUN_014b0d60;
  *(longlong *)(param_1 + 0x380) = param_1;
  *(code **)(param_1 + 0x378) = FUN_014b0da0;
  *(longlong *)(param_1 + 0x2d0) = param_1;
  *(code **)(param_1 + 0x2c8) = FUN_014b0de0;
  *(longlong *)(param_1 + 0x360) = param_1;
  *(code **)(param_1 + 0x358) = FUN_014b0e20;
  *(longlong *)(param_1 + 0x3c0) = param_1;
  *(code **)(param_1 + 0x3b8) = FUN_014b0e60;
  *(longlong *)(param_1 + 0x200) = param_1;
  *(code **)(param_1 + 0x1f8) = FUN_014b0ea0;
  *(longlong *)(param_1 + 0x400) = param_1;
  *(code **)(param_1 + 0x3f8) = FUN_014b0ee0;
  return;
}

