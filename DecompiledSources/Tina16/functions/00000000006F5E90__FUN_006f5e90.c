/* Ghidra address: 006f5e90 */
/* Ghidra symbol: FUN_006f5e90 */


void FUN_006f5e90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  
  if (param_3 == 1) {
    uVar1 = 0;
  }
  else {
    uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
    if (param_3 == 2) {
      uVar1 = (undefined4)CONCAT71(uVar2,1);
    }
    else {
      if (param_3 != 8) {
        return;
      }
      uVar1 = (undefined4)CONCAT71(uVar2,2);
    }
  }
  if ((*(char *)(param_1 + 0x589) == '\0') && (*(longlong *)(param_1 + 0x5f0) != 0)) {
    (**(code **)(param_1 + 0x5f0))(*(undefined8 *)(param_1 + 0x5f8),param_1,param_2,uVar1);
  }
  return;
}

