/* Ghidra address: 006e3eb0 */
/* Ghidra symbol: FUN_006e3eb0 */


void FUN_006e3eb0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x581) = 1;
  uVar2 = FUN_006e2530(param_1);
  uVar1 = FUN_007f9990(0);
  FUN_006e50b0(param_1,uVar2,uVar1 | 8);
  if (((*(char *)(param_1 + 0x58d) == '\0') && ((*(uint *)(param_1 + 0xa4) & 0x2000) == 0)) &&
     (*(longlong *)(param_1 + 0x5c8) != 0)) {
    (**(code **)(param_1 + 0x5c8))(*(undefined8 *)(param_1 + 0x5d0),param_1,param_2);
  }
  return;
}

