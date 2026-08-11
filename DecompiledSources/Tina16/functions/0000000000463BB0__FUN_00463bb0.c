/* Ghidra address: 00463bb0 */
/* Ghidra symbol: FUN_00463bb0 */


undefined1 FUN_00463bb0(short *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_40 [2];
  short local_2a;
  undefined8 local_28;
  undefined1 local_19 [9];
  
  local_40[0] = 0;
  local_28 = 0;
  sVar1 = *param_1;
  if (sVar1 == 8) {
    iVar3 = (**(code **)PTR_DAT_02003698)(*(undefined8 *)(param_1 + 4),0x400,0,&local_2a);
  }
  else if (sVar1 == 0x100) {
    iVar3 = FUN_00415a60(*(undefined8 *)(param_1 + 4),&DAT_00463df4);
    if (iVar3 == 0) {
      local_19[0] = 0;
      goto LAB_00463d99;
    }
    iVar3 = FUN_00415a60(*(undefined8 *)(param_1 + 4),&DAT_00463e04);
    if (iVar3 == 0) {
      local_19[0] = 1;
      goto LAB_00463d99;
    }
    FUN_00415f40(&local_28,*(undefined8 *)(param_1 + 4));
    uVar4 = FUN_00415f70(local_28);
    iVar3 = (**(code **)PTR_DAT_02003698)(uVar4,0x400,0,&local_2a);
  }
  else if (sVar1 == 0x102) {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 4),&DAT_00463e14);
    if (iVar3 == 0) {
      local_19[0] = 0;
      goto LAB_00463d99;
    }
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 4),&LAB_00463e24);
    if (iVar3 == 0) {
      local_19[0] = 1;
      goto LAB_00463d99;
    }
    FUN_004168e0(&local_28,*(undefined8 *)(param_1 + 4));
    iVar3 = (**(code **)PTR_DAT_02003698)(*(undefined8 *)(param_1 + 4),0x400,0,&local_2a);
  }
  else {
    FUN_00467310(&local_28,param_1);
    uVar4 = FUN_00415f70(local_28);
    iVar3 = (**(code **)PTR_DAT_02003698)(uVar4,0x400,0,&local_2a);
  }
  if (iVar3 == -0x7ffdfffb) {
    FUN_004168b0(local_40,local_28);
    cVar2 = FUN_0043ff60(local_40[0],local_19);
    if (cVar2 == '\0') {
      FUN_00460800(0x80020005,sVar1,0xb);
    }
  }
  else if (iVar3 == 0) {
    local_19[0] = local_2a != 0;
  }
  else {
    FUN_00460800(iVar3,sVar1,0xb);
  }
LAB_00463d99:
  FUN_00414480(local_40);
  FUN_00414520(&local_28);
  return local_19[0];
}

