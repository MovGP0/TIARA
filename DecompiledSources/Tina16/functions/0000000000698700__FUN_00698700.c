/* Ghidra address: 00698700 */
/* Ghidra symbol: FUN_00698700 */


void FUN_00698700(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_0064c470(param_1[2]);
  if (cVar1 == '\x01') {
    FUN_00786040(param_1,0);
    FUN_00785c20(param_1,param_2);
    FUN_00786040(param_1,1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar2 = FUN_00786090(param_1);
    uVar3 = thunk_FUN_04118143(uVar2,0xfffffff0);
    if ((((uVar3 & 0xc) == 0xc) &&
        (*(int *)(param_1[2] + 0x98) + -0xf <= (int)*(short *)(param_2 + 0x10))) &&
       (*(longlong *)(param_1[2] + 0x4b0) != 0)) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    else {
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_03c244fb(uVar2);
      uVar2 = FUN_00786090(param_1);
      thunk_FUN_0416f4fc(uVar2);
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
      *(undefined1 *)((longlong)param_1 + 0x42) = 1;
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

