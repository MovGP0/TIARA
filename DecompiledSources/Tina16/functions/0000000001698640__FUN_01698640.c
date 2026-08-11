/* Ghidra address: 01698640 */
/* Ghidra symbol: FUN_01698640 */


void FUN_01698640(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 4) == 0)) {
    if (*param_1 == 0x104) {
      *param_1 = 0x17e;
    }
    else {
      *param_1 = 0x17f;
    }
  }
  else {
    iVar2 = FUN_00414ce0(*param_2);
    uVar1 = FUN_00409570(iVar2 + 1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar3 = FUN_00414ce0(*param_2);
    FUN_00442450(uVar1,*param_2,uVar3);
    FUN_004095f0(*param_2);
    *param_2 = 0;
  }
  return;
}

