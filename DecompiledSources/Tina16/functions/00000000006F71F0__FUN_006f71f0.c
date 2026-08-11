/* Ghidra address: 006f71f0 */
/* Ghidra symbol: FUN_006f71f0 */


undefined8 FUN_006f71f0(longlong param_1,longlong param_2,byte param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar5 = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar6 = 0;
    if (param_3 < 3) {
      if (param_3 == 2) {
        uVar6 = 0x100;
      }
      else if (param_3 == 0) {
        uVar6 = 0x400;
      }
      else if (param_3 == 1) {
        uVar6 = 0x800;
      }
    }
    else if (param_3 == 3) {
      uVar6 = 0x200;
    }
    else if (param_3 == 4) {
      uVar6 = 0;
    }
    if (param_2 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_006ef6e0(param_2);
    }
    if ((param_4 & 2) != 0) {
      uVar6 = uVar6 | 4;
    }
    if ((param_4 & 4) != 0) {
      uVar6 = uVar6 | 8;
    }
    if ((param_4 & 8) != 0) {
      uVar6 = uVar6 | 1;
    }
    if ((param_4 & 0x10) != 0) {
      uVar6 = uVar6 | 2;
    }
    uVar4 = FUN_0065b870(param_1);
    iVar3 = FUN_00611d10(uVar4,uVar2,uVar6);
    if (iVar3 != -1) {
      uVar5 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar3);
    }
  }
  return uVar5;
}

