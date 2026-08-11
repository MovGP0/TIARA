/* Ghidra address: 00f49b20 */
/* Ghidra symbol: FUN_00f49b20 */


int FUN_00f49b20(undefined8 param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                longlong param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_2c;
  
  local_2c = 0;
  if ((param_5 != 0) &&
     (cVar3 = FUN_00f489b0(param_5,*(undefined8 *)(param_6 + 0x10)), cVar3 != '\0')) {
    iVar1 = *(int *)(param_6 + 8);
    iVar2 = *(int *)(param_6 + 0xc);
    for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x20)) {
      iVar4 = *(int *)(param_2 + 0x10);
      if ((param_3 == iVar4) && (param_4 == *(int *)(param_2 + 0x14))) {
        iVar4 = *(int *)(param_2 + 0x18);
        iVar7 = *(int *)(param_2 + 0x1c);
      }
      else {
        iVar7 = *(int *)(param_2 + 0x14);
      }
      if (((param_3 == iVar4) && (param_3 == iVar1)) &&
         (uVar5 = param_4 - iVar2 >> 0x1f, uVar6 = iVar7 - iVar2 >> 0x1f,
         uVar8 = param_4 - iVar7 >> 0x1f,
         ((param_4 - iVar2 ^ uVar5) - uVar5) + ((iVar7 - iVar2 ^ uVar6) - uVar6) ==
         (param_4 - iVar7 ^ uVar8) - uVar8)) {
        uVar5 = param_4 - iVar2 >> 0x1f;
        return local_2c + ((param_4 - iVar2 ^ uVar5) - uVar5);
      }
      if (((param_4 == iVar7) && (param_4 == iVar2)) &&
         (uVar5 = param_3 - iVar1 >> 0x1f, uVar6 = iVar4 - iVar1 >> 0x1f,
         uVar8 = param_3 - iVar4 >> 0x1f,
         ((param_3 - iVar1 ^ uVar5) - uVar5) + ((iVar4 - iVar1 ^ uVar6) - uVar6) ==
         (param_3 - iVar4 ^ uVar8) - uVar8)) {
        uVar5 = param_3 - iVar1 >> 0x1f;
        return local_2c + ((param_3 - iVar1 ^ uVar5) - uVar5);
      }
      uVar6 = param_3 - iVar4 >> 0x1f;
      uVar5 = param_4 - iVar7 >> 0x1f;
      local_2c = local_2c + ((param_3 - iVar4 ^ uVar6) - uVar6) +
                 ((param_4 - iVar7 ^ uVar5) - uVar5);
      param_3 = iVar4;
      param_4 = iVar7;
    }
  }
  return local_2c;
}

