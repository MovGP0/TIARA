/* Ghidra address: 00f306c0 */
/* Ghidra symbol: FUN_00f306c0 */


undefined8 FUN_00f306c0(undefined8 param_1,int *param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_10;
  char local_9;
  
  local_40 = auStack_78;
  local_20 = FUN_00f33100(&LAB_00f256b8,1);
  local_30 = 0;
  local_9 = '\0';
  local_58 = CONCAT44(local_58._4_4_,param_3);
  local_50 = (param_4 & 1) != 0;
  local_28 = FUN_00f2d4e0(&DAT_00f220b0,1,param_1,*param_2);
  FUN_00f2e320(local_28);
  local_10 = FUN_00f31c40(local_28,local_20,(param_4 & 2) != 0);
  if ((local_9 == '\0') && (*param_2 < local_10)) {
    iVar1 = FUN_00f33500(local_20);
    if (iVar1 == 1) {
      *param_2 = local_10;
      local_30 = FUN_00f335e0(local_20);
      goto code_r0x00f30851;
    }
  }
  if ((param_4 & 4) != 0) {
    iVar1 = FUN_00f33500(local_20);
    if (iVar1 < 1) {
      local_58 = 0;
      uVar2 = FUN_00f2c770(&PTR_FUN_00f21720,1,local_10,local_28);
      FUN_004134c0(uVar2);
    }
    else {
      local_58 = FUN_00f33510(local_20,0);
      uVar2 = FUN_00f2c770(&PTR_FUN_00f21720,1,local_10,local_28);
      FUN_004134c0(uVar2);
    }
  }
code_r0x00f30851:
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return local_30;
}

