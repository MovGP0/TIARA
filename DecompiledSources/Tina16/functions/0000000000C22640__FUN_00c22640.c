/* Ghidra address: 00c22640 */
/* Ghidra symbol: FUN_00c22640 */


undefined8 FUN_00c22640(byte param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined8 uVar1;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if (param_1 < 4) {
    if (param_1 == 3) {
      uVar1 = FUN_00c1f6e0(&PTR_FUN_00c1d4b8,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
    if (param_1 == 0) {
      uVar1 = FUN_00c1e140(&PTR_FUN_00c1c508,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
    if (param_1 == 1) {
      uVar1 = FUN_00c1e2b0(&PTR_FUN_00c1c950,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
    if (param_1 == 2) {
      uVar1 = FUN_00c1f530(&PTR_FUN_00c1d300,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
  }
  else {
    if (param_1 == 4) {
      uVar1 = FUN_00c1f840(&PTR_FUN_00c1d670,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
    if (param_1 == 5) {
      uVar1 = FUN_00c1fa00(&PTR_FUN_00c1d828,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
    if (param_1 == 6) {
      uVar1 = FUN_00c208f0(&PTR_FUN_00c1ddb8,CONCAT71(uVar2,1) & 0xffffffff,param_2,param_3);
      return uVar1;
    }
  }
  return 0;
}

