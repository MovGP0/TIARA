/* Ghidra address: 006ef2d0 */
/* Ghidra symbol: FUN_006ef2d0 */


void FUN_006ef2d0(undefined8 param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar3 = 1;
      goto LAB_006ef329;
    }
    if (param_2 == 0) {
      uVar3 = 4;
      goto LAB_006ef329;
    }
    if (param_2 == 1) {
      uVar3 = 8;
      goto LAB_006ef329;
    }
  }
  else {
    if (param_2 == 3) {
      uVar3 = 2;
      goto LAB_006ef329;
    }
    if (param_2 == 4) {
      uVar3 = 0x20;
      goto LAB_006ef329;
    }
  }
  uVar3 = 0;
LAB_006ef329:
  uVar4 = uVar3;
  if (param_3 == '\0') {
    uVar4 = 0;
  }
  uVar1 = FUN_006eeda0(param_1);
  uVar2 = FUN_006ef6e0(param_1);
  FUN_00611e10(uVar1,uVar2,uVar4,uVar3);
  return;
}

