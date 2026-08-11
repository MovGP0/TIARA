/* Ghidra address: 00592f40 */
/* Ghidra symbol: FUN_00592f40 */


undefined8 FUN_00592f40(undefined8 param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  
  if (param_3 <= param_2) {
    if (param_2 <= param_3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

