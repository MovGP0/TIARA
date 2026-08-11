/* Ghidra address: 01898380 */
/* Ghidra symbol: FUN_01898380 */


void FUN_01898380(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((char)param_1[0xdc] == '\0') {
    FUN_006e3eb0(param_1);
  }
  else {
    uVar1 = FUN_006e2530(param_1);
    uVar2 = FUN_007f9990(0);
    (**(code **)(*param_1 + 0x298))(param_1,uVar1,uVar2 | 8);
  }
  return;
}

