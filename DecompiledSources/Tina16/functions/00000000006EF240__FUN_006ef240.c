/* Ghidra address: 006ef240 */
/* Ghidra symbol: FUN_006ef240 */


bool FUN_006ef240(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar4 = 1;
      goto LAB_006ef297;
    }
    if (param_2 == 0) {
      uVar4 = 4;
      goto LAB_006ef297;
    }
    if (param_2 == 1) {
      uVar4 = 8;
      goto LAB_006ef297;
    }
  }
  else {
    if (param_2 == 3) {
      uVar4 = 2;
      goto LAB_006ef297;
    }
    if (param_2 == 4) {
      uVar4 = 0x20;
      goto LAB_006ef297;
    }
  }
  uVar4 = 0;
LAB_006ef297:
  uVar1 = FUN_006eeda0(param_1);
  iVar2 = FUN_006ef6e0(param_1);
  uVar3 = thunk_FUN_041b2403(uVar1,0x102c,(longlong)iVar2,uVar4);
  return (uVar4 & uVar3) != 0;
}

