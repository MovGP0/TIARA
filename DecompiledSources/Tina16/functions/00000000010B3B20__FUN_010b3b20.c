/* Ghidra address: 010b3b20 */
/* Ghidra symbol: FUN_010b3b20 */


undefined1 FUN_010b3b20(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (param_2 == 1) {
    cVar1 = FUN_015ff190(&local_10);
    if (cVar1 == '\0') goto LAB_010b3b59;
  }
  else {
LAB_010b3b59:
    if (param_2 == 8) {
      cVar1 = FUN_010b3ad0(param_1,8);
      if (cVar1 != '\0') {
        cVar1 = FUN_010ae170(&local_10);
        if (cVar1 != '\0') goto LAB_010b3c6e;
      }
    }
    if (param_2 == 8) {
      cVar1 = FUN_010b3a90(param_1,8);
      if (cVar1 != '\0') {
        cVar1 = FUN_015ff190(&local_10);
        if (cVar1 != '\0') goto LAB_010b3c6e;
      }
    }
    if (param_2 == 0x200) {
      cVar1 = FUN_015ff1f0(&local_10);
      if (cVar1 != '\0') goto LAB_010b3c6e;
    }
    if (param_2 == 0x400) {
      cVar1 = FUN_015ff3d0(&local_10);
      if (cVar1 != '\0') goto LAB_010b3c6e;
    }
    if (param_2 == 2) {
      cVar1 = FUN_010adc60();
      if (cVar1 != '\0') goto LAB_010b3c6e;
    }
    if (param_2 == 4) {
      cVar1 = FUN_010add60();
      if (cVar1 == '\0') {
        cVar1 = FUN_0105fed0(&local_10,&local_18);
        if ((cVar1 == '\0') && (*(longlong *)(PTR_DAT_020030c0 + 0x50) == 0)) goto LAB_010b3c24;
      }
    }
    else {
LAB_010b3c24:
      if ((param_2 == 0x2000) || (param_2 == 0x4000)) {
        cVar1 = FUN_0105fed0(&local_10,&local_18);
        if (cVar1 != '\0') goto LAB_010b3c6e;
      }
      if (param_2 == 0x100) {
        cVar1 = FUN_010ade70();
        if (cVar1 != '\0') goto LAB_010b3c6e;
      }
      if (param_2 != 0x800) {
        uVar2 = 0;
        goto LAB_010b3c70;
      }
    }
  }
LAB_010b3c6e:
  uVar2 = 1;
LAB_010b3c70:
  FUN_00414560(&local_18,2);
  return uVar2;
}

