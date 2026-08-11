/* Ghidra address: 0116c040 */
/* Ghidra symbol: FUN_0116c040 */


int * FUN_0116c040(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  ,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 local_130 [8];
  undefined1 local_128 [264];
  
  local_res10[0] = param_2;
  piVar2 = (int *)FUN_00410920(param_1,local_res10);
  if (piVar2 != (int *)0xffffffffffffffff) {
    *(undefined1 *)(piVar2 + 0x20) = DAT_0203ae95;
    FUN_01167ab0(piVar2,0,param_3,param_4);
    piVar2[0xf] = param_6;
    piVar2[0x10] = param_7;
    piVar2[0x1c] = param_8;
    uVar3 = FUN_011680b0(param_6);
    *(undefined8 *)(piVar2 + 0x12) = uVar3;
    uVar3 = FUN_011680b0(param_7);
    *(undefined8 *)(piVar2 + 0x14) = uVar3;
    uVar3 = FUN_011680b0(param_8);
    *(undefined8 *)(piVar2 + 0x1e) = uVar3;
    piVar2[0x16] = param_9;
    piVar2[0x17] = param_10;
    iVar1 = FUN_0040c770(DAT_0203aeb0 * 24.0);
    piVar2[8] = iVar1;
    iVar1 = FUN_0040c770(DAT_0203aeb0 * 24.0);
    piVar2[9] = iVar1;
    iVar1 = FUN_0040c770(DAT_0203aeb0 * 32.0);
    piVar2[0xb] = iVar1;
    iVar1 = FUN_0040c770(DAT_0203aeb0 * 16.0);
    piVar2[0x21] = iVar1;
    iVar1 = FUN_0040c770(DAT_0203aeb0 * 8.0);
    piVar2[0x22] = iVar1;
    piVar2[10] = param_5;
    piVar2[0xc] = param_11;
    if ((param_5 == 0) || (param_5 == 2)) {
      piVar2[0x19] = 0;
      piVar2[0x1a] = 0;
    }
    else {
      piVar2[0x19] = 0;
      piVar2[0x1a] = 0;
    }
    *piVar2 = *piVar2 + piVar2[0x19];
    piVar2[1] = piVar2[1] + piVar2[0x1a];
    param_1 = piVar2;
    if (DAT_0203a509 == '\0') {
      FUN_0040e840(local_128,param_11);
      FUN_00415020(piVar2 + 0xd,local_128,5);
      FUN_00414ff0(local_130,&LAB_0116c260);
      FUN_00415110(local_130,piVar2 + 0xd,6);
      FUN_00415020(piVar2 + 0xd,local_130,5);
    }
    else {
      FUN_00415020(piVar2 + 0xd,&DAT_0203a509,5);
    }
  }
  return param_1;
}

