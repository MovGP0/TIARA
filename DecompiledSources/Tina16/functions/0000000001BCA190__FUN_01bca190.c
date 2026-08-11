/* Ghidra address: 01bca190 */
/* Ghidra symbol: FUN_01bca190 */


undefined4
FUN_01bca190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            uint param_5,undefined8 param_6,undefined4 param_7,longlong *param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined4 uVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined7 uVar5;
  
  local_20 = 0;
  local_24 = 0x80004001;
  cVar1 = FUN_00781870();
  if ((cVar1 == '\0') || ((*PTR_DAT_02002b98 & 2) == 0)) goto LAB_01bca2d2;
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,2);
  uVar2 = param_5 & 0xf0;
  if ((uVar2 == 0x10) || (uVar2 == 0x80)) {
    uVar4 = CONCAT71(uVar5,4);
  }
  else if (uVar2 == 0x30) {
    uVar4 = 0;
  }
  else if (uVar2 == 0x20) {
    uVar4 = CONCAT71(uVar5,3);
  }
  else if (uVar2 == 0x30) {
    uVar4 = CONCAT71(uVar5,2);
  }
  param_5 = param_5 & 0xf;
  if (param_5 < 4) {
    if (param_5 == 3) {
      uVar6 = 0xb;
    }
    else if (param_5 == 0) {
      uVar6 = 4;
    }
    else if (param_5 == 1) {
      uVar6 = 0xc;
    }
    else {
      if (param_5 != 2) goto LAB_01bca27c;
      uVar6 = 0x70;
    }
  }
  else if (param_5 == 4) {
    uVar6 = 3;
  }
  else if (param_5 == 5) {
    uVar6 = 0x28;
  }
  else {
LAB_01bca27c:
    uVar6 = 4;
  }
  FUN_004167d0(&local_20,param_3);
  iVar3 = FUN_0072d5c0(local_20,uVar4 & 0xffffffff,uVar6,param_7,0xffffffff,0xffffffff,0);
  *param_8 = (longlong)iVar3;
  local_24 = 0;
LAB_01bca2d2:
  FUN_00414480(&local_20);
  return local_24;
}

